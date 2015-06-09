#include "joystickhandler.h"
#include <iostream>
#include <QDebug>

JoystickHandler::JoystickHandler(){

	/* Initialize SDL */
	if(SDL_Init(SDL_INIT_JOYSTICK) < 0)
	{
		fprintf(stderr, "Could not init SDL: %s\n", SDL_GetError());
	}

	/* Enable Joystick events */
	SDL_JoystickEventState(SDL_ENABLE);

	openAll();
	printJoysticks();

}
/**
 * @brief Thread startpoint
 */
void JoystickHandler::run(){
	while(1){
		handleEvents();
		msleep(10);
	}
}
/**
 * @brief Open All connected joysicks
 */
void JoystickHandler::openAll(){
	
	struct JoystickStruct joystickStruct;
	
	for(int idx = 0; idx < SDL_NumJoysticks(); idx++){
		
		joystickStruct.joystick = SDL_JoystickOpen(idx);
		joystickStruct.name = QString(SDL_JoystickNameForIndex(idx));
		joystickStruct.deadzone = 3200;
		joystickStruct.axisFunctions.insert("x", 0);
		joystickStruct.axisFunctions.insert("y", 1);
		joystickStruct.axisFunctions.insert("z", 2);
		joystickStruct.axisFunctions.insert("rot", 3);
		/* This should only be temporary until configuration Function is done */
		joystickStruct.joystickFunction = THRUSTER_FUNCTION;
		joysticks.insert(SDL_JoystickInstanceID(joystickStruct.joystick), joystickStruct);

	}

	printJoysticks();
}
/**
 * @brief Print controller names.
 * @details Prints the name of opened controllers to
 * the standard output; (Command line)
 */
void JoystickHandler::printJoysticks(){
	qDebug() << joysticks.keys();
}
/**
 * @brief Handle Joystick events
 * @details Handles joystick events and puts the events data into
 * the joysticks struct.
 */
void JoystickHandler::handleEvents(){
	while(SDL_PollEvent(&event)){
		
		switch(event.type)
		{
			case SDL_JOYAXISMOTION:
			if((event.jaxis.value < -joysticks.value(event.jaxis.which).deadzone) || (event.jaxis.value > joysticks.value(event.jaxis.which).deadzone)){
				
				joysticks[event.jaxis.which].axisValues[event.jaxis.axis] = event.jaxis.value ;

				createAxisMessage(event.jaxis.which, joysticks[event.jaxis.which].joystickFunction);
			}
			break;
			
			case SDL_JOYBUTTONDOWN:
				joysticks[event.jbutton.which].buttonValues[event.jbutton.button] = event.jbutton.state;

			break;
			
			case SDL_JOYBUTTONUP:
				joysticks[event.jbutton.which].buttonValues[event.jbutton.button] = event.jbutton.state;

			break;
			
			case SDL_JOYBALLMOTION:
				joysticks[event.jball.which].ballValues[event.jball.ball] = event.jball.xrel;

			break;

			case SDL_JOYHATMOTION:
				joysticks[event.jhat.which].hatValues[event.jhat.hat] = event.jhat.value;
			break;

			default:
			break;
		}
	}
}

void JoystickHandler::createAxisMessage(int instanceId, int function){
	QString message;
	QString tempTh;
	QString tempManip;

	int axisValue;

	QMapIterator<SDL_JoystickID, JoystickHandler::JoystickStruct> i(joysticks);

	while(i.hasNext()){
		i.next();
		if(i.value().joystickFunction == THRUSTER_FUNCTION){
			QMapIterator<QString, int> iterator(i.value().axisFunctions);
			while(iterator.hasNext()){
				iterator.next();
				tempTh.append(QString::number(i.value().axisValues[iterator.value()]) + ",");
			}
			currentThMessage = tempTh;
		}else{
		}
	}
	
	/*
	if (joysticks[instanceId].joystickFunction == THRUSTER_FUNCTION){
		
		QMapIterator<QString, int> i(joysticks[instanceId].axisFunctions);

		while(i.hasNext()){
			i.next();
			//qDebug() << i.key() << " Value: \t " << i.value();
			if(joysticks[instanceId].axisValues.contains(i.value())){
				axisValue = joysticks[instanceId].axisValues[i.value()].value();
				message.append(QString::number(axisValue + QString(","));
			}
		}
		message.append("0,0,0,0,0,0");
	}

	emit axisValues(message.toUtf8());
	*/
}
void JoystickHandler::createButtonMessage(){

}
void JoystickHandler::createHatMessage(){

}
void JoystickHandler::createBallMessage(){

}

void JoystickHandler::configureJoysticks(){
	/* Open SQL Database and look for previous configuration */

}

void JoystickHandler::configureJoystick(int instanceId, int function){
	joysticks[instanceId].joystickFunction = function;
}


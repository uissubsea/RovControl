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

}

void JoystickHandler::run(){
	while(1){
		handleEvents();
		msleep(10);
	}
}

void JoystickHandler::openAll(){
	struct JoystickStruct joystickStruct;
	for(int idx = 0; idx < SDL_NumJoysticks(); idx++){
		
		joystickStruct.joystick = SDL_JoystickOpen(idx);
		joystickStruct.name = QString(SDL_JoystickNameForIndex(idx));
		joystickStruct.axisValues.insert(0,0);
		joystickStruct.map.insert("", 0);
		joystickStruct.deadzone = 3200;
		joysticks.insert(SDL_JoystickInstanceID(joystickStruct.joystick), joystickStruct);
	}

	printJoysticks();
}

void JoystickHandler::printJoysticks(){
	qDebug() << joysticks.keys();
}

void JoystickHandler::handleEvents(){
	while(SDL_PollEvent(&event)){
		
		switch(event.type)
		{
			case SDL_JOYAXISMOTION:
			if((event.jaxis.value < -joysticks.value(event.jaxis.which).deadzone) || (event.jaxis.value > joysticks.value(event.jaxis.which).deadzone)){
				/* Put value into datastructure */
				joysticks[event.jaxis.which].axisValues[event.jaxis.axis] = event.jaxis.value;

				qDebug() << joysticks[event.jaxis.which].axisValues;
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
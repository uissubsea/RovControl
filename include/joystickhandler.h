#ifndef JOYSTICKHANDLER_H
#define JOYSTICKHANDLER_H

#include <SDL2/SDL.h>
#include <QDebug>
#include <QThread>
#include <QMap>

class JoystickHandler : public QThread
{
	Q_OBJECT

public:
	JoystickHandler();
	void openAll();
	void printJoysticks();

private:
	bool stateChanged;
	
	struct JoystickStruct{
		SDL_Joystick *joystick;
		QString name;
		QMap<int, int> axisValues;
		QMap<int, int> buttonValues;
		QMap<int, int> ballValues;
		QMap<int, int> hatValues;
		QMap<QString, int> map;
		int deadzone;
	};

	QMap<SDL_JoystickID, JoystickStruct> joysticks;
	QMap<int, int> axisVal;

	SDL_Event event;
	void run();

	void handleEvents();
};

#endif
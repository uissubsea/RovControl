#ifndef JOYSTICKHANDLER_H
#define JOYSTICKHANDLER_H

#include <SDL2/SDL.h>
#include <QDebug>
#include <QThread>
#include <QMap>
#include <QMapIterator>
#include <QTextCodec>

#ifndef THRUSTER_FUNCTION
#define THRUSTER_FUNCTION 0
#endif

#ifndef MANIP_FUNCTION
#define MANIP_FUNCTION 1
#endif

class JoystickHandler : public QThread
{
	Q_OBJECT

public:
	JoystickHandler();
	void openAll();
	void printJoysticks();

signals:
	void axisValues(QByteArray);
	void buttonValues(QString);
	void hatValues(QString);
	void ballValues(QString);

private:
	bool stateChanged;

	struct JoystickStruct{
		SDL_Joystick *joystick;
		QString name;
		int joystickFunction; /* Determines whether joystick controls manipulator or thrusters */
		QMap<int, int> axisValues;
		QMap<int, int> buttonValues;
		QMap<int, int> ballValues;
		QMap<int, int> hatValues;
		QMap<QString, int> axisFunctions;
		int deadzone;
		int minFactor;	/* Determine max range of stick */
		int maxFactor;  /* Determine minumum range of stick */
	};

	QMap<SDL_JoystickID, JoystickStruct> joysticks;

	QString currentThMessage;
	QString currentManipMessage;

	SDL_Event event;
	void run();

	void handleEvents();
	void configureJoysticks();
	void configureJoystick(int, int);

	void createAxisMessage(int, int);
	void createButtonMessage();
	void createHatMessage();
	void createBallMessage();
};

#endif
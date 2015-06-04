#ifndef STATUSWINDOW_H
#define STATUSWINDOW_H

#include "ui_statuswindow.h"

class StatusWindow : public QWidget
{
	Q_OBJECT

public:
	StatusWindow(QWidget *parent = 0);

private slots:
	/* Put slots here */

private:
	Ui::StatusWindow ui;	
};

#endif
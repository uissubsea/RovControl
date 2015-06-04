/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionCamera1;
    QAction *actionCamera2;
    QAction *actionOptions;
    QAction *actionStatus;
    QAction *actionPOD1;
    QAction *actionPOD2;
    QAction *actionController;
    QAction *actionCamera3;
    QAction *actionManipulator;
    QAction *actionThursters;
    QAction *actionVehicleData;
    QAction *actionAboutUs;
    QAction *actionAboutVehicle;
    QAction *actionOption;
    QAction *actionConnect;
    QAction *actionDisconnect;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QMdiArea *mdiArea;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuAbout;
    QMenu *menuView;
    QMenu *menuSettings;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(705, 553);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionCamera1 = new QAction(MainWindow);
        actionCamera1->setObjectName(QStringLiteral("actionCamera1"));
        actionCamera2 = new QAction(MainWindow);
        actionCamera2->setObjectName(QStringLiteral("actionCamera2"));
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName(QStringLiteral("actionOptions"));
        actionStatus = new QAction(MainWindow);
        actionStatus->setObjectName(QStringLiteral("actionStatus"));
        actionPOD1 = new QAction(MainWindow);
        actionPOD1->setObjectName(QStringLiteral("actionPOD1"));
        actionPOD2 = new QAction(MainWindow);
        actionPOD2->setObjectName(QStringLiteral("actionPOD2"));
        actionController = new QAction(MainWindow);
        actionController->setObjectName(QStringLiteral("actionController"));
        actionCamera3 = new QAction(MainWindow);
        actionCamera3->setObjectName(QStringLiteral("actionCamera3"));
        actionManipulator = new QAction(MainWindow);
        actionManipulator->setObjectName(QStringLiteral("actionManipulator"));
        actionThursters = new QAction(MainWindow);
        actionThursters->setObjectName(QStringLiteral("actionThursters"));
        actionVehicleData = new QAction(MainWindow);
        actionVehicleData->setObjectName(QStringLiteral("actionVehicleData"));
        actionAboutUs = new QAction(MainWindow);
        actionAboutUs->setObjectName(QStringLiteral("actionAboutUs"));
        actionAboutVehicle = new QAction(MainWindow);
        actionAboutVehicle->setObjectName(QStringLiteral("actionAboutVehicle"));
        actionOption = new QAction(MainWindow);
        actionOption->setObjectName(QStringLiteral("actionOption"));
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName(QStringLiteral("actionConnect"));
        actionDisconnect = new QAction(MainWindow);
        actionDisconnect->setObjectName(QStringLiteral("actionDisconnect"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mdiArea = new QMdiArea(centralwidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));

        gridLayout->addWidget(mdiArea, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 705, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuSettings = new QMenu(menubar);
        menuSettings->setObjectName(QStringLiteral("menuSettings"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuSettings->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionConnect);
        menuFile->addAction(actionDisconnect);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuAbout->addAction(actionAboutUs);
        menuAbout->addAction(actionAboutVehicle);
        menuView->addAction(actionCamera1);
        menuView->addAction(actionCamera2);
        menuView->addAction(actionCamera3);
        menuView->addSeparator();
        menuView->addAction(actionPOD1);
        menuView->addAction(actionPOD2);
        menuView->addSeparator();
        menuView->addAction(actionManipulator);
        menuView->addAction(actionThursters);
        menuView->addAction(actionVehicleData);
        menuView->addSeparator();
        menuView->addAction(actionStatus);
        menuSettings->addAction(actionController);
        menuSettings->addSeparator();
        toolBar->addAction(actionConnect);
        toolBar->addSeparator();
        toolBar->addAction(actionDisconnect);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "RovControl v 0.1a", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
#ifndef QT_NO_TOOLTIP
        actionExit->setToolTip(QApplication::translate("MainWindow", "Exit the application", 0));
#endif // QT_NO_TOOLTIP
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0));
        actionCamera1->setText(QApplication::translate("MainWindow", "Camera 1", 0));
        actionCamera2->setText(QApplication::translate("MainWindow", "Camera 2", 0));
        actionOptions->setText(QApplication::translate("MainWindow", "Options", 0));
        actionStatus->setText(QApplication::translate("MainWindow", "Status", 0));
        actionPOD1->setText(QApplication::translate("MainWindow", "POD 1", 0));
        actionPOD2->setText(QApplication::translate("MainWindow", "POD 2", 0));
        actionController->setText(QApplication::translate("MainWindow", "Controller", 0));
        actionCamera3->setText(QApplication::translate("MainWindow", "Camera 3", 0));
        actionManipulator->setText(QApplication::translate("MainWindow", "Manipulator", 0));
        actionThursters->setText(QApplication::translate("MainWindow", "Thursters", 0));
        actionVehicleData->setText(QApplication::translate("MainWindow", "Vehicle data", 0));
        actionAboutUs->setText(QApplication::translate("MainWindow", "UiS Subsea", 0));
        actionAboutVehicle->setText(QApplication::translate("MainWindow", "Njord v.2.8.1 beta", 0));
        actionOption->setText(QApplication::translate("MainWindow", "Options", 0));
        actionConnect->setText(QApplication::translate("MainWindow", "Connect", 0));
        actionDisconnect->setText(QApplication::translate("MainWindow", "Disconnect", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", 0));
        menuView->setTitle(QApplication::translate("MainWindow", "View", 0));
        menuSettings->setTitle(QApplication::translate("MainWindow", "Settings", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

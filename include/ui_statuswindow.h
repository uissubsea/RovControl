/********************************************************************************
** Form generated from reading UI file 'StatusWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATUSWINDOW_H
#define UI_STATUSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StatusWindow
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *ecStatus;
    QLabel *manipStatus;
    QLabel *tcuLabel;
    QLabel *manipulatorLabel;
    QLabel *ecLabel;
    QLabel *tcuStatus;
    QLabel *sensorStatus;
    QLabel *sensorLabel;
    QGroupBox *logBox;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;

    void setupUi(QWidget *StatusWindow)
    {
        if (StatusWindow->objectName().isEmpty())
            StatusWindow->setObjectName(QStringLiteral("StatusWindow"));
        StatusWindow->resize(672, 512);
        gridLayout_3 = new QGridLayout(StatusWindow);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox = new QGroupBox(StatusWindow);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        ecStatus = new QLabel(groupBox);
        ecStatus->setObjectName(QStringLiteral("ecStatus"));

        gridLayout_2->addWidget(ecStatus, 0, 1, 1, 1);

        manipStatus = new QLabel(groupBox);
        manipStatus->setObjectName(QStringLiteral("manipStatus"));

        gridLayout_2->addWidget(manipStatus, 2, 1, 1, 1);

        tcuLabel = new QLabel(groupBox);
        tcuLabel->setObjectName(QStringLiteral("tcuLabel"));

        gridLayout_2->addWidget(tcuLabel, 1, 0, 1, 1);

        manipulatorLabel = new QLabel(groupBox);
        manipulatorLabel->setObjectName(QStringLiteral("manipulatorLabel"));

        gridLayout_2->addWidget(manipulatorLabel, 2, 0, 1, 1);

        ecLabel = new QLabel(groupBox);
        ecLabel->setObjectName(QStringLiteral("ecLabel"));
        ecLabel->setFrameShape(QFrame::NoFrame);

        gridLayout_2->addWidget(ecLabel, 0, 0, 1, 1);

        tcuStatus = new QLabel(groupBox);
        tcuStatus->setObjectName(QStringLiteral("tcuStatus"));

        gridLayout_2->addWidget(tcuStatus, 1, 1, 1, 1);

        sensorStatus = new QLabel(groupBox);
        sensorStatus->setObjectName(QStringLiteral("sensorStatus"));

        gridLayout_2->addWidget(sensorStatus, 3, 1, 1, 1);

        sensorLabel = new QLabel(groupBox);
        sensorLabel->setObjectName(QStringLiteral("sensorLabel"));

        gridLayout_2->addWidget(sensorLabel, 3, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        logBox = new QGroupBox(StatusWindow);
        logBox->setObjectName(QStringLiteral("logBox"));
        gridLayout = new QGridLayout(logBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textEdit = new QTextEdit(logBox);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);


        gridLayout_3->addWidget(logBox, 1, 0, 1, 1);


        retranslateUi(StatusWindow);

        QMetaObject::connectSlotsByName(StatusWindow);
    } // setupUi

    void retranslateUi(QWidget *StatusWindow)
    {
        StatusWindow->setWindowTitle(QApplication::translate("StatusWindow", "Rov Status", 0));
        groupBox->setTitle(QApplication::translate("StatusWindow", "Status", 0));
        ecStatus->setText(QApplication::translate("StatusWindow", "StatusEC", 0));
        manipStatus->setText(QApplication::translate("StatusWindow", "StatusManip", 0));
        tcuLabel->setText(QApplication::translate("StatusWindow", "TCU", 0));
        manipulatorLabel->setText(QApplication::translate("StatusWindow", "Manipulator", 0));
        ecLabel->setText(QApplication::translate("StatusWindow", "Ethernet/Can", 0));
        tcuStatus->setText(QApplication::translate("StatusWindow", "StatusTCU", 0));
        sensorStatus->setText(QApplication::translate("StatusWindow", "Status Sensor", 0));
        sensorLabel->setText(QApplication::translate("StatusWindow", "Sensor Unit", 0));
        logBox->setTitle(QApplication::translate("StatusWindow", "Log", 0));
    } // retranslateUi

};

namespace Ui {
    class StatusWindow: public Ui_StatusWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATUSWINDOW_H

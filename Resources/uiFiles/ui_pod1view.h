/********************************************************************************
** Form generated from reading UI file 'pod1.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POD1VIEW_H
#define UI_POD1VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pod1View
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *mc1VLabel;
    QLCDNumber *mc1_voltage;
    QLabel *mc1CLabel;
    QLCDNumber *mc1_current;
    QLabel *mc1PLabel;
    QLCDNumber *mc1_power;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QLabel *mc3VLabel;
    QLCDNumber *mc3_voltage;
    QLabel *mc3CLabel;
    QLCDNumber *mc3_current;
    QLabel *mc3PLabel;
    QLCDNumber *mc3_power;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    QLCDNumber *mc4_voltage;
    QLabel *label_11;
    QLCDNumber *mc4_current;
    QLabel *label_12;
    QLCDNumber *mc4_power;
    QLabel *label_10;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_6;
    QLabel *label_13;
    QLCDNumber *mc5_voltage;
    QLabel *label_14;
    QLCDNumber *mc5_current;
    QLabel *label_15;
    QLCDNumber *mc5_power;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_7;
    QLabel *label_16;
    QLCDNumber *mc6_voltage;
    QLabel *label_17;
    QLCDNumber *mc6_current;
    QLabel *label_18;
    QLCDNumber *mc6_power;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_8;
    QLabel *label_19;
    QLCDNumber *mc7_voltage;
    QLabel *label_20;
    QLCDNumber *mc7_current;
    QLabel *label_21;
    QLCDNumber *mc7_power;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_9;
    QLabel *label_22;
    QLCDNumber *mc8_voltage;
    QLabel *label_23;
    QLCDNumber *mc8_current;
    QLabel *label_24;
    QLCDNumber *mc8_power;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *mc2CLabel;
    QLCDNumber *mc2_voltage;
    QLCDNumber *mc2_current;
    QLabel *mc2PLabel;
    QLCDNumber *mc2_power;
    QLabel *mc2VLabel;
    QGroupBox *groupBox_9;
    QLabel *label_25;
    QLabel *label_26;
    QLCDNumber *pod1_temp;
    QToolButton *toolButton;

    void setupUi(QWidget *pod1View)
    {
        if (pod1View->objectName().isEmpty())
            pod1View->setObjectName(QStringLiteral("pod1View"));
        pod1View->resize(506, 636);
        gridLayout = new QGridLayout(pod1View);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(pod1View);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mc1VLabel = new QLabel(groupBox);
        mc1VLabel->setObjectName(QStringLiteral("mc1VLabel"));

        gridLayout_2->addWidget(mc1VLabel, 0, 0, 1, 1);

        mc1_voltage = new QLCDNumber(groupBox);
        mc1_voltage->setObjectName(QStringLiteral("mc1_voltage"));

        gridLayout_2->addWidget(mc1_voltage, 0, 1, 1, 1);

        mc1CLabel = new QLabel(groupBox);
        mc1CLabel->setObjectName(QStringLiteral("mc1CLabel"));

        gridLayout_2->addWidget(mc1CLabel, 1, 0, 1, 1);

        mc1_current = new QLCDNumber(groupBox);
        mc1_current->setObjectName(QStringLiteral("mc1_current"));

        gridLayout_2->addWidget(mc1_current, 1, 1, 1, 1);

        mc1PLabel = new QLabel(groupBox);
        mc1PLabel->setObjectName(QStringLiteral("mc1PLabel"));

        gridLayout_2->addWidget(mc1PLabel, 2, 0, 1, 1);

        mc1_power = new QLCDNumber(groupBox);
        mc1_power->setObjectName(QStringLiteral("mc1_power"));

        gridLayout_2->addWidget(mc1_power, 2, 1, 1, 1);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(pod1View);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        mc3VLabel = new QLabel(groupBox_3);
        mc3VLabel->setObjectName(QStringLiteral("mc3VLabel"));

        gridLayout_4->addWidget(mc3VLabel, 0, 0, 1, 1);

        mc3_voltage = new QLCDNumber(groupBox_3);
        mc3_voltage->setObjectName(QStringLiteral("mc3_voltage"));

        gridLayout_4->addWidget(mc3_voltage, 0, 1, 1, 1);

        mc3CLabel = new QLabel(groupBox_3);
        mc3CLabel->setObjectName(QStringLiteral("mc3CLabel"));

        gridLayout_4->addWidget(mc3CLabel, 1, 0, 1, 1);

        mc3_current = new QLCDNumber(groupBox_3);
        mc3_current->setObjectName(QStringLiteral("mc3_current"));

        gridLayout_4->addWidget(mc3_current, 1, 1, 1, 1);

        mc3PLabel = new QLabel(groupBox_3);
        mc3PLabel->setObjectName(QStringLiteral("mc3PLabel"));

        gridLayout_4->addWidget(mc3PLabel, 2, 0, 1, 1);

        mc3_power = new QLCDNumber(groupBox_3);
        mc3_power->setObjectName(QStringLiteral("mc3_power"));
        mc3_power->setSmallDecimalPoint(false);
        mc3_power->setDigitCount(5);
        mc3_power->setMode(QLCDNumber::Dec);
        mc3_power->setSegmentStyle(QLCDNumber::Filled);
        mc3_power->setProperty("intValue", QVariant(0));

        gridLayout_4->addWidget(mc3_power, 2, 1, 1, 1);


        gridLayout->addWidget(groupBox_3, 2, 0, 1, 1);

        groupBox_4 = new QGroupBox(pod1View);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        mc4_voltage = new QLCDNumber(groupBox_4);
        mc4_voltage->setObjectName(QStringLiteral("mc4_voltage"));

        gridLayout_5->addWidget(mc4_voltage, 0, 1, 1, 1);

        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_5->addWidget(label_11, 1, 0, 1, 1);

        mc4_current = new QLCDNumber(groupBox_4);
        mc4_current->setObjectName(QStringLiteral("mc4_current"));

        gridLayout_5->addWidget(mc4_current, 1, 1, 1, 1);

        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_5->addWidget(label_12, 2, 0, 1, 1);

        mc4_power = new QLCDNumber(groupBox_4);
        mc4_power->setObjectName(QStringLiteral("mc4_power"));

        gridLayout_5->addWidget(mc4_power, 2, 1, 1, 1);

        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_5->addWidget(label_10, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_4, 2, 1, 1, 1);

        groupBox_5 = new QGroupBox(pod1View);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        gridLayout_6 = new QGridLayout(groupBox_5);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_13 = new QLabel(groupBox_5);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_6->addWidget(label_13, 0, 0, 1, 1);

        mc5_voltage = new QLCDNumber(groupBox_5);
        mc5_voltage->setObjectName(QStringLiteral("mc5_voltage"));

        gridLayout_6->addWidget(mc5_voltage, 0, 1, 1, 1);

        label_14 = new QLabel(groupBox_5);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_6->addWidget(label_14, 1, 0, 1, 1);

        mc5_current = new QLCDNumber(groupBox_5);
        mc5_current->setObjectName(QStringLiteral("mc5_current"));

        gridLayout_6->addWidget(mc5_current, 1, 1, 1, 1);

        label_15 = new QLabel(groupBox_5);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_6->addWidget(label_15, 2, 0, 1, 1);

        mc5_power = new QLCDNumber(groupBox_5);
        mc5_power->setObjectName(QStringLiteral("mc5_power"));

        gridLayout_6->addWidget(mc5_power, 2, 1, 1, 1);


        gridLayout->addWidget(groupBox_5, 3, 0, 1, 1);

        groupBox_6 = new QGroupBox(pod1View);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        gridLayout_7 = new QGridLayout(groupBox_6);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        label_16 = new QLabel(groupBox_6);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_7->addWidget(label_16, 0, 0, 1, 1);

        mc6_voltage = new QLCDNumber(groupBox_6);
        mc6_voltage->setObjectName(QStringLiteral("mc6_voltage"));

        gridLayout_7->addWidget(mc6_voltage, 0, 1, 1, 1);

        label_17 = new QLabel(groupBox_6);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_7->addWidget(label_17, 1, 0, 1, 1);

        mc6_current = new QLCDNumber(groupBox_6);
        mc6_current->setObjectName(QStringLiteral("mc6_current"));

        gridLayout_7->addWidget(mc6_current, 1, 1, 1, 1);

        label_18 = new QLabel(groupBox_6);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_7->addWidget(label_18, 2, 0, 1, 1);

        mc6_power = new QLCDNumber(groupBox_6);
        mc6_power->setObjectName(QStringLiteral("mc6_power"));

        gridLayout_7->addWidget(mc6_power, 2, 1, 1, 1);


        gridLayout->addWidget(groupBox_6, 3, 1, 1, 1);

        groupBox_7 = new QGroupBox(pod1View);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        gridLayout_8 = new QGridLayout(groupBox_7);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        label_19 = new QLabel(groupBox_7);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_8->addWidget(label_19, 0, 0, 1, 1);

        mc7_voltage = new QLCDNumber(groupBox_7);
        mc7_voltage->setObjectName(QStringLiteral("mc7_voltage"));

        gridLayout_8->addWidget(mc7_voltage, 0, 1, 1, 1);

        label_20 = new QLabel(groupBox_7);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_8->addWidget(label_20, 1, 0, 1, 1);

        mc7_current = new QLCDNumber(groupBox_7);
        mc7_current->setObjectName(QStringLiteral("mc7_current"));

        gridLayout_8->addWidget(mc7_current, 1, 1, 1, 1);

        label_21 = new QLabel(groupBox_7);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_8->addWidget(label_21, 2, 0, 1, 1);

        mc7_power = new QLCDNumber(groupBox_7);
        mc7_power->setObjectName(QStringLiteral("mc7_power"));

        gridLayout_8->addWidget(mc7_power, 2, 1, 1, 1);


        gridLayout->addWidget(groupBox_7, 4, 0, 1, 1);

        groupBox_8 = new QGroupBox(pod1View);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        gridLayout_9 = new QGridLayout(groupBox_8);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        label_22 = new QLabel(groupBox_8);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_9->addWidget(label_22, 0, 0, 1, 1);

        mc8_voltage = new QLCDNumber(groupBox_8);
        mc8_voltage->setObjectName(QStringLiteral("mc8_voltage"));

        gridLayout_9->addWidget(mc8_voltage, 0, 1, 1, 1);

        label_23 = new QLabel(groupBox_8);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout_9->addWidget(label_23, 1, 0, 1, 1);

        mc8_current = new QLCDNumber(groupBox_8);
        mc8_current->setObjectName(QStringLiteral("mc8_current"));

        gridLayout_9->addWidget(mc8_current, 1, 1, 1, 1);

        label_24 = new QLabel(groupBox_8);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout_9->addWidget(label_24, 2, 0, 1, 1);

        mc8_power = new QLCDNumber(groupBox_8);
        mc8_power->setObjectName(QStringLiteral("mc8_power"));

        gridLayout_9->addWidget(mc8_power, 2, 1, 1, 1);


        gridLayout->addWidget(groupBox_8, 4, 1, 1, 1);

        groupBox_2 = new QGroupBox(pod1View);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mc2CLabel = new QLabel(groupBox_2);
        mc2CLabel->setObjectName(QStringLiteral("mc2CLabel"));

        gridLayout_3->addWidget(mc2CLabel, 1, 0, 1, 1);

        mc2_voltage = new QLCDNumber(groupBox_2);
        mc2_voltage->setObjectName(QStringLiteral("mc2_voltage"));

        gridLayout_3->addWidget(mc2_voltage, 0, 1, 1, 1);

        mc2_current = new QLCDNumber(groupBox_2);
        mc2_current->setObjectName(QStringLiteral("mc2_current"));

        gridLayout_3->addWidget(mc2_current, 1, 1, 1, 1);

        mc2PLabel = new QLabel(groupBox_2);
        mc2PLabel->setObjectName(QStringLiteral("mc2PLabel"));

        gridLayout_3->addWidget(mc2PLabel, 2, 0, 1, 1);

        mc2_power = new QLCDNumber(groupBox_2);
        mc2_power->setObjectName(QStringLiteral("mc2_power"));

        gridLayout_3->addWidget(mc2_power, 2, 1, 1, 1);

        mc2VLabel = new QLabel(groupBox_2);
        mc2VLabel->setObjectName(QStringLiteral("mc2VLabel"));

        gridLayout_3->addWidget(mc2VLabel, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_2, 1, 1, 1, 1);

        groupBox_9 = new QGroupBox(pod1View);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setMinimumSize(QSize(0, 60));
        label_25 = new QLabel(groupBox_9);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(20, 30, 71, 16));
        label_26 = new QLabel(groupBox_9);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(270, 30, 161, 21));
        pod1_temp = new QLCDNumber(groupBox_9);
        pod1_temp->setObjectName(QStringLiteral("pod1_temp"));
        pod1_temp->setGeometry(QRect(120, 30, 95, 23));
        toolButton = new QToolButton(groupBox_9);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(390, 30, 27, 23));
        toolButton->setAutoRaise(false);

        gridLayout->addWidget(groupBox_9, 0, 0, 1, 2);


        retranslateUi(pod1View);

        QMetaObject::connectSlotsByName(pod1View);
    } // setupUi

    void retranslateUi(QWidget *pod1View)
    {
        pod1View->setWindowTitle(QApplication::translate("pod1View", "POD 1", 0));
        groupBox->setTitle(QApplication::translate("pod1View", "MC1", 0));
        mc1VLabel->setText(QApplication::translate("pod1View", "Voltage [V]", 0));
        mc1CLabel->setText(QApplication::translate("pod1View", "Current [mA]", 0));
        mc1PLabel->setText(QApplication::translate("pod1View", "Power [W]", 0));
        groupBox_3->setTitle(QApplication::translate("pod1View", "MC3", 0));
        mc3VLabel->setText(QApplication::translate("pod1View", "Voltage [V]", 0));
        mc3CLabel->setText(QApplication::translate("pod1View", "Current [mA]", 0));
        mc3PLabel->setText(QApplication::translate("pod1View", "Power [W]", 0));
        groupBox_4->setTitle(QApplication::translate("pod1View", "MC4", 0));
        label_11->setText(QApplication::translate("pod1View", "Current [mA]", 0));
        label_12->setText(QApplication::translate("pod1View", "Power [W]", 0));
        label_10->setText(QApplication::translate("pod1View", "Voltage [V]", 0));
        groupBox_5->setTitle(QApplication::translate("pod1View", "MC5", 0));
        label_13->setText(QApplication::translate("pod1View", "Voltage [V]", 0));
        label_14->setText(QApplication::translate("pod1View", "Current [mA]", 0));
        label_15->setText(QApplication::translate("pod1View", "Power [W]", 0));
        groupBox_6->setTitle(QApplication::translate("pod1View", "MC6", 0));
        label_16->setText(QApplication::translate("pod1View", "Voltage [V]", 0));
        label_17->setText(QApplication::translate("pod1View", "Current [mA]", 0));
        label_18->setText(QApplication::translate("pod1View", "Power [W]", 0));
        groupBox_7->setTitle(QApplication::translate("pod1View", "MC7", 0));
        label_19->setText(QApplication::translate("pod1View", "Voltage [V]", 0));
        label_20->setText(QApplication::translate("pod1View", "Current [mA]", 0));
        label_21->setText(QApplication::translate("pod1View", "Power [W]", 0));
        groupBox_8->setTitle(QApplication::translate("pod1View", "MC8", 0));
        label_22->setText(QApplication::translate("pod1View", "Voltage [V]", 0));
        label_23->setText(QApplication::translate("pod1View", "Current [mA]", 0));
        label_24->setText(QApplication::translate("pod1View", "Power [W]", 0));
        groupBox_2->setTitle(QApplication::translate("pod1View", "MC2", 0));
        mc2CLabel->setText(QApplication::translate("pod1View", "Current [mA]", 0));
        mc2PLabel->setText(QApplication::translate("pod1View", "Power [W]", 0));
        mc2VLabel->setText(QApplication::translate("pod1View", "Voltage [V]", 0));
        groupBox_9->setTitle(QApplication::translate("pod1View", "Sensors", 0));
        label_25->setText(QApplication::translate("pod1View", "Temp. [\302\260C]", 0));
        label_26->setText(QApplication::translate("pod1View", "Hydrostat failure", 0));
        toolButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class pod1View: public Ui_pod1View {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POD1VIEW_H

/********************************************************************************
** Form generated from reading UI file 'decisive_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DECISIVE_GUI_H
#define UI_DECISIVE_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DecisiveAttacks
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QFormLayout *formLayout_2;
    QLabel *label;
    QComboBox *attacker_combo;
    QLabel *label_2;
    QSpinBox *a_spinBox;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_3;
    QLabel *label_3;
    QComboBox *defender_combobox;
    QLabel *label_4;
    QSpinBox *d_spinbox;
    QLabel *label_7;
    QLabel *onslaught_lbl;
    QFormLayout *formLayout_4;
    QLabel *label_5;
    QComboBox *gambit_combo;
    QSpinBox *spinBox;
    QLabel *label_6;
    QLabel *label_8;
    QSpinBox *difficulty_spinbox;
    QVBoxLayout *verticalLayout_4;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *success_radio;
    QRadioButton *fail_radio;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *DecisiveAttacks)
    {
        if (DecisiveAttacks->objectName().isEmpty())
            DecisiveAttacks->setObjectName(QStringLiteral("DecisiveAttacks"));
        DecisiveAttacks->resize(399, 342);
        horizontalLayout = new QHBoxLayout(DecisiveAttacks);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(DecisiveAttacks);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        formLayout_2 = new QFormLayout(groupBox);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        attacker_combo = new QComboBox(groupBox);
        attacker_combo->setObjectName(QStringLiteral("attacker_combo"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(attacker_combo->sizePolicy().hasHeightForWidth());
        attacker_combo->setSizePolicy(sizePolicy);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, attacker_combo);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        a_spinBox = new QSpinBox(groupBox);
        a_spinBox->setObjectName(QStringLiteral("a_spinBox"));
        a_spinBox->setMinimum(-99);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, a_spinBox);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(DecisiveAttacks);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        formLayout_3 = new QFormLayout(groupBox_2);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_3);

        defender_combobox = new QComboBox(groupBox_2);
        defender_combobox->setObjectName(QStringLiteral("defender_combobox"));
        sizePolicy.setHeightForWidth(defender_combobox->sizePolicy().hasHeightForWidth());
        defender_combobox->setSizePolicy(sizePolicy);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, defender_combobox);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_4);

        d_spinbox = new QSpinBox(groupBox_2);
        d_spinbox->setObjectName(QStringLiteral("d_spinbox"));
        d_spinbox->setMinimum(-99);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, d_spinbox);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_7);

        onslaught_lbl = new QLabel(groupBox_2);
        onslaught_lbl->setObjectName(QStringLiteral("onslaught_lbl"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, onslaught_lbl);


        verticalLayout_2->addWidget(groupBox_2);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        label_5 = new QLabel(DecisiveAttacks);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_5);

        gambit_combo = new QComboBox(DecisiveAttacks);
        gambit_combo->setObjectName(QStringLiteral("gambit_combo"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, gambit_combo);

        spinBox = new QSpinBox(DecisiveAttacks);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, spinBox);

        label_6 = new QLabel(DecisiveAttacks);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_6);

        label_8 = new QLabel(DecisiveAttacks);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_8);

        difficulty_spinbox = new QSpinBox(DecisiveAttacks);
        difficulty_spinbox->setObjectName(QStringLiteral("difficulty_spinbox"));
        difficulty_spinbox->setEnabled(false);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, difficulty_spinbox);


        verticalLayout_2->addLayout(formLayout_4);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        buttonBox = new QDialogButtonBox(DecisiveAttacks);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_4->addWidget(buttonBox);

        groupBox_4 = new QGroupBox(DecisiveAttacks);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy2);
        groupBox_4->setLayoutDirection(Qt::LeftToRight);
        groupBox_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        verticalLayout_3 = new QVBoxLayout(groupBox_4);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        success_radio = new QRadioButton(groupBox_4);
        success_radio->setObjectName(QStringLiteral("success_radio"));

        verticalLayout_3->addWidget(success_radio);

        fail_radio = new QRadioButton(groupBox_4);
        fail_radio->setObjectName(QStringLiteral("fail_radio"));

        verticalLayout_3->addWidget(fail_radio);


        verticalLayout_4->addWidget(groupBox_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_4);


        retranslateUi(DecisiveAttacks);
        QObject::connect(buttonBox, SIGNAL(accepted()), DecisiveAttacks, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DecisiveAttacks, SLOT(reject()));

        QMetaObject::connectSlotsByName(DecisiveAttacks);
    } // setupUi

    void retranslateUi(QDialog *DecisiveAttacks)
    {
        DecisiveAttacks->setWindowTitle(QApplication::translate("DecisiveAttacks", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("DecisiveAttacks", "Attacker", 0));
        label->setText(QApplication::translate("DecisiveAttacks", "Name", 0));
        label_2->setText(QApplication::translate("DecisiveAttacks", "Initiative Modifier", 0));
        groupBox_2->setTitle(QApplication::translate("DecisiveAttacks", "Defender", 0));
        label_3->setText(QApplication::translate("DecisiveAttacks", "Name", 0));
        label_4->setText(QApplication::translate("DecisiveAttacks", "Initiative Modifier", 0));
        label_7->setText(QApplication::translate("DecisiveAttacks", "Onslaught Penalty", 0));
        onslaught_lbl->setText(QApplication::translate("DecisiveAttacks", "TextLabel", 0));
        label_5->setText(QApplication::translate("DecisiveAttacks", "Gambit", 0));
        label_6->setText(QApplication::translate("DecisiveAttacks", "Rout Check", 0));
        label_8->setText(QApplication::translate("DecisiveAttacks", "Difficulty", 0));
        groupBox_4->setTitle(QString());
        success_radio->setText(QApplication::translate("DecisiveAttacks", "Successful", 0));
        fail_radio->setText(QApplication::translate("DecisiveAttacks", "Failed", 0));
    } // retranslateUi

};

namespace Ui {
    class DecisiveAttacks: public Ui_DecisiveAttacks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DECISIVE_GUI_H

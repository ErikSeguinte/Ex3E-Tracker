/********************************************************************************
** Form generated from reading UI file 'attack_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTACK_GUI_H
#define UI_ATTACK_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
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

class Ui_WitheringAttack
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QFormLayout *formLayout_2;
    QComboBox *attacker_combo;
    QLabel *label_2;
    QSpinBox *a_spinBox;
    QLabel *label;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_3;
    QLabel *label_3;
    QComboBox *defender_combobox;
    QLabel *label_4;
    QSpinBox *d_spinbox;
    QLabel *label_7;
    QLabel *onslaught_lbl;
    QFormLayout *formLayout;
    QLabel *label_5;
    QSpinBox *damage_spinbox;
    QLabel *label_6;
    QSpinBox *rout_spinBox;
    QCheckBox *post_soak_damage_exceeds_10_checkBox;
    QVBoxLayout *verticalLayout_3;
    QDialogButtonBox *buttonBox;
    QGroupBox *Hit_Miss;
    QVBoxLayout *verticalLayout;
    QRadioButton *success_radioButton;
    QRadioButton *failed_radioButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *WitheringAttack)
    {
        if (WitheringAttack->objectName().isEmpty())
            WitheringAttack->setObjectName(QStringLiteral("WitheringAttack"));
        WitheringAttack->resize(399, 343);
        horizontalLayout = new QHBoxLayout(WitheringAttack);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(WitheringAttack);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        formLayout_2 = new QFormLayout(groupBox);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        attacker_combo = new QComboBox(groupBox);
        attacker_combo->setObjectName(QStringLiteral("attacker_combo"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, attacker_combo);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        a_spinBox = new QSpinBox(groupBox);
        a_spinBox->setObjectName(QStringLiteral("a_spinBox"));
        a_spinBox->setMinimum(-99);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, a_spinBox);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(WitheringAttack);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        formLayout_3 = new QFormLayout(groupBox_2);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_3);

        defender_combobox = new QComboBox(groupBox_2);
        defender_combobox->setObjectName(QStringLiteral("defender_combobox"));

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

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_7);

        onslaught_lbl = new QLabel(groupBox_2);
        onslaught_lbl->setObjectName(QStringLiteral("onslaught_lbl"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, onslaught_lbl);


        verticalLayout_2->addWidget(groupBox_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_5 = new QLabel(WitheringAttack);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        damage_spinbox = new QSpinBox(WitheringAttack);
        damage_spinbox->setObjectName(QStringLiteral("damage_spinbox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, damage_spinbox);

        label_6 = new QLabel(WitheringAttack);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setEnabled(true);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_6);

        rout_spinBox = new QSpinBox(WitheringAttack);
        rout_spinBox->setObjectName(QStringLiteral("rout_spinBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, rout_spinBox);

        post_soak_damage_exceeds_10_checkBox = new QCheckBox(WitheringAttack);
        post_soak_damage_exceeds_10_checkBox->setObjectName(QStringLiteral("post_soak_damage_exceeds_10_checkBox"));

        formLayout->setWidget(2, QFormLayout::SpanningRole, post_soak_damage_exceeds_10_checkBox);


        verticalLayout_2->addLayout(formLayout);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        buttonBox = new QDialogButtonBox(WitheringAttack);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);

        Hit_Miss = new QGroupBox(WitheringAttack);
        Hit_Miss->setObjectName(QStringLiteral("Hit_Miss"));
        verticalLayout = new QVBoxLayout(Hit_Miss);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        success_radioButton = new QRadioButton(Hit_Miss);
        success_radioButton->setObjectName(QStringLiteral("success_radioButton"));

        verticalLayout->addWidget(success_radioButton);

        failed_radioButton = new QRadioButton(Hit_Miss);
        failed_radioButton->setObjectName(QStringLiteral("failed_radioButton"));

        verticalLayout->addWidget(failed_radioButton);


        verticalLayout_3->addWidget(Hit_Miss);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_3);

        QWidget::setTabOrder(defender_combobox, damage_spinbox);
        QWidget::setTabOrder(damage_spinbox, attacker_combo);
        QWidget::setTabOrder(attacker_combo, a_spinBox);
        QWidget::setTabOrder(a_spinBox, d_spinbox);
        QWidget::setTabOrder(d_spinbox, rout_spinBox);

        retranslateUi(WitheringAttack);
        QObject::connect(buttonBox, SIGNAL(accepted()), WitheringAttack, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), WitheringAttack, SLOT(reject()));

        QMetaObject::connectSlotsByName(WitheringAttack);
    } // setupUi

    void retranslateUi(QDialog *WitheringAttack)
    {
        WitheringAttack->setWindowTitle(QApplication::translate("WitheringAttack", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("WitheringAttack", "Attacker", 0));
        label_2->setText(QApplication::translate("WitheringAttack", "Initiative Modifier", 0));
        label->setText(QApplication::translate("WitheringAttack", "Name", 0));
        groupBox_2->setTitle(QApplication::translate("WitheringAttack", "Defender", 0));
        label_3->setText(QApplication::translate("WitheringAttack", "Name", 0));
        label_4->setText(QApplication::translate("WitheringAttack", "Initiative Modifier", 0));
        label_7->setText(QApplication::translate("WitheringAttack", "Onslaught Penalty", 0));
        onslaught_lbl->setText(QApplication::translate("WitheringAttack", "TextLabel", 0));
        label_5->setText(QApplication::translate("WitheringAttack", "Damage", 0));
        label_6->setText(QApplication::translate("WitheringAttack", "Rout Checks", 0));
        post_soak_damage_exceeds_10_checkBox->setText(QApplication::translate("WitheringAttack", "Post Soak damage exceeds 10", 0));
        Hit_Miss->setTitle(QString());
        success_radioButton->setText(QApplication::translate("WitheringAttack", "Successful", 0));
        failed_radioButton->setText(QApplication::translate("WitheringAttack", "Failed", 0));
    } // retranslateUi

};

namespace Ui {
    class WitheringAttack: public Ui_WitheringAttack {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTACK_GUI_H

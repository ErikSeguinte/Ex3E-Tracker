/********************************************************************************
** Form generated from reading UI file 'Modification_Window.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFICATION_WINDOW_H
#define UI_MODIFICATION_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ModWindow
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QFormLayout *formLayout_2;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_8;
    QLineEdit *name_edit;
    QDialogButtonBox *buttonBox;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QSpinBox *Initiative_box;
    QLabel *label_4;
    QSpinBox *crash_counter_box;
    QLabel *label_5;
    QSpinBox *crash_return_box;
    QLabel *label_7;
    QSpinBox *join_battle_box;
    QLabel *label_3;
    QSpinBox *onslaught_spinbox;
    QVBoxLayout *CheckBoxes;
    QCheckBox *player_checkBox;
    QCheckBox *inertcheckBox;
    QCheckBox *legendary_size_checkBox;
    QCheckBox *crashed_check;
    QCheckBox *crashed_recentlycheck;
    QCheckBox *has_gone_check;
    QCheckBox *delayed_checkBox;

    void setupUi(QDialog *ModWindow)
    {
        if (ModWindow->objectName().isEmpty())
            ModWindow->setObjectName(QStringLiteral("ModWindow"));
        ModWindow->resize(381, 282);
        verticalLayout = new QVBoxLayout(ModWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label = new QLabel(ModWindow);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        comboBox = new QComboBox(ModWindow);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, comboBox);

        label_8 = new QLabel(ModWindow);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_8);

        name_edit = new QLineEdit(ModWindow);
        name_edit->setObjectName(QStringLiteral("name_edit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, name_edit);


        horizontalLayout_2->addLayout(formLayout_2);

        buttonBox = new QDialogButtonBox(ModWindow);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_2 = new QLabel(ModWindow);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        Initiative_box = new QSpinBox(ModWindow);
        Initiative_box->setObjectName(QStringLiteral("Initiative_box"));

        formLayout->setWidget(0, QFormLayout::FieldRole, Initiative_box);

        label_4 = new QLabel(ModWindow);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        crash_counter_box = new QSpinBox(ModWindow);
        crash_counter_box->setObjectName(QStringLiteral("crash_counter_box"));

        formLayout->setWidget(1, QFormLayout::FieldRole, crash_counter_box);

        label_5 = new QLabel(ModWindow);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        crash_return_box = new QSpinBox(ModWindow);
        crash_return_box->setObjectName(QStringLiteral("crash_return_box"));

        formLayout->setWidget(2, QFormLayout::FieldRole, crash_return_box);

        label_7 = new QLabel(ModWindow);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_7);

        join_battle_box = new QSpinBox(ModWindow);
        join_battle_box->setObjectName(QStringLiteral("join_battle_box"));

        formLayout->setWidget(3, QFormLayout::FieldRole, join_battle_box);

        label_3 = new QLabel(ModWindow);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        onslaught_spinbox = new QSpinBox(ModWindow);
        onslaught_spinbox->setObjectName(QStringLiteral("onslaught_spinbox"));
        onslaught_spinbox->setMinimum(-99);
        onslaught_spinbox->setMaximum(0);

        formLayout->setWidget(4, QFormLayout::FieldRole, onslaught_spinbox);


        horizontalLayout->addLayout(formLayout);

        CheckBoxes = new QVBoxLayout();
        CheckBoxes->setObjectName(QStringLiteral("CheckBoxes"));
        CheckBoxes->setSizeConstraint(QLayout::SetMinimumSize);
        player_checkBox = new QCheckBox(ModWindow);
        player_checkBox->setObjectName(QStringLiteral("player_checkBox"));

        CheckBoxes->addWidget(player_checkBox);

        inertcheckBox = new QCheckBox(ModWindow);
        inertcheckBox->setObjectName(QStringLiteral("inertcheckBox"));

        CheckBoxes->addWidget(inertcheckBox);

        legendary_size_checkBox = new QCheckBox(ModWindow);
        legendary_size_checkBox->setObjectName(QStringLiteral("legendary_size_checkBox"));

        CheckBoxes->addWidget(legendary_size_checkBox);

        crashed_check = new QCheckBox(ModWindow);
        crashed_check->setObjectName(QStringLiteral("crashed_check"));

        CheckBoxes->addWidget(crashed_check);

        crashed_recentlycheck = new QCheckBox(ModWindow);
        crashed_recentlycheck->setObjectName(QStringLiteral("crashed_recentlycheck"));

        CheckBoxes->addWidget(crashed_recentlycheck);

        has_gone_check = new QCheckBox(ModWindow);
        has_gone_check->setObjectName(QStringLiteral("has_gone_check"));

        CheckBoxes->addWidget(has_gone_check);

        delayed_checkBox = new QCheckBox(ModWindow);
        delayed_checkBox->setObjectName(QStringLiteral("delayed_checkBox"));

        CheckBoxes->addWidget(delayed_checkBox);


        horizontalLayout->addLayout(CheckBoxes);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ModWindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), ModWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ModWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(ModWindow);
    } // setupUi

    void retranslateUi(QDialog *ModWindow)
    {
        ModWindow->setWindowTitle(QApplication::translate("ModWindow", "Dialog", 0));
        label->setText(QApplication::translate("ModWindow", "Name", 0));
        label_8->setText(QApplication::translate("ModWindow", "Shift Target", 0));
        label_2->setText(QApplication::translate("ModWindow", "Initiative", 0));
        label_4->setText(QApplication::translate("ModWindow", "Crash Counter", 0));
        label_5->setText(QApplication::translate("ModWindow", "Crash Return", 0));
        label_7->setText(QApplication::translate("ModWindow", "Join Battle Pool", 0));
        label_3->setText(QApplication::translate("ModWindow", "Onslaught", 0));
        player_checkBox->setText(QApplication::translate("ModWindow", "Player", 0));
        inertcheckBox->setText(QApplication::translate("ModWindow", "Inert Initiative", 0));
        legendary_size_checkBox->setText(QApplication::translate("ModWindow", "Legendary Size", 0));
        crashed_check->setText(QApplication::translate("ModWindow", "Crashed", 0));
        crashed_recentlycheck->setText(QApplication::translate("ModWindow", "Crashed Recently", 0));
        has_gone_check->setText(QApplication::translate("ModWindow", "Has Gone", 0));
        delayed_checkBox->setText(QApplication::translate("ModWindow", "Delayed", 0));
    } // retranslateUi

};

namespace Ui {
    class ModWindow: public Ui_ModWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFICATION_WINDOW_H

/********************************************************************************
** Form generated from reading UI file 'other_action_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OTHER_ACTION_GUI_H
#define UI_OTHER_ACTION_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *character_box;
    QLabel *label_2;
    QComboBox *Action_box;
    QLabel *label_3;
    QSpinBox *cost_spinbox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(358, 110);
        horizontalLayout = new QHBoxLayout(Dialog);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        character_box = new QComboBox(Dialog);
        character_box->setObjectName(QStringLiteral("character_box"));

        formLayout->setWidget(0, QFormLayout::FieldRole, character_box);

        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        Action_box = new QComboBox(Dialog);
        Action_box->setObjectName(QStringLiteral("Action_box"));

        formLayout->setWidget(1, QFormLayout::FieldRole, Action_box);

        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        cost_spinbox = new QSpinBox(Dialog);
        cost_spinbox->setObjectName(QStringLiteral("cost_spinbox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, cost_spinbox);


        horizontalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Other Action Dialog", 0));
        label->setText(QApplication::translate("Dialog", "Character", 0));
        label_2->setText(QApplication::translate("Dialog", "Action", 0));
        label_3->setText(QApplication::translate("Dialog", "Initiative Cost", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OTHER_ACTION_GUI_H

/********************************************************************************
** Form generated from reading UI file 'join_battle_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOIN_BATTLE_GUI_H
#define UI_JOIN_BATTLE_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_JoinBattle
{
public:
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QLabel *label_2;
    QSpinBox *spinBox_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *JoinBattle)
    {
        if (JoinBattle->objectName().isEmpty())
            JoinBattle->setObjectName(QStringLiteral("JoinBattle"));
        JoinBattle->resize(275, 112);
        horizontalLayout = new QHBoxLayout(JoinBattle);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(JoinBattle);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        spinBox = new QSpinBox(JoinBattle);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, spinBox);

        label_2 = new QLabel(JoinBattle);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        spinBox_2 = new QSpinBox(JoinBattle);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, spinBox_2);


        horizontalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(JoinBattle);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        retranslateUi(JoinBattle);
        QObject::connect(buttonBox, SIGNAL(accepted()), JoinBattle, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), JoinBattle, SLOT(reject()));

        QMetaObject::connectSlotsByName(JoinBattle);
    } // setupUi

    void retranslateUi(QDialog *JoinBattle)
    {
        JoinBattle->setWindowTitle(QApplication::translate("JoinBattle", "Join Battle!", 0));
        label->setText(QApplication::translate("JoinBattle", "TextLabel", 0));
        label_2->setText(QApplication::translate("JoinBattle", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class JoinBattle: public Ui_JoinBattle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOIN_BATTLE_GUI_H

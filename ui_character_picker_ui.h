/********************************************************************************
** Form generated from reading UI file 'character_picker_ui.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARACTER_PICKER_UI_H
#define UI_CHARACTER_PICKER_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CharacterPicker
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CharacterPicker)
    {
        if (CharacterPicker->objectName().isEmpty())
            CharacterPicker->setObjectName(QStringLiteral("CharacterPicker"));
        CharacterPicker->resize(240, 81);
        horizontalLayout = new QHBoxLayout(CharacterPicker);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox = new QGroupBox(CharacterPicker);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout->addWidget(comboBox);


        horizontalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(CharacterPicker);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        retranslateUi(CharacterPicker);
        QObject::connect(buttonBox, SIGNAL(accepted()), CharacterPicker, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CharacterPicker, SLOT(reject()));

        QMetaObject::connectSlotsByName(CharacterPicker);
    } // setupUi

    void retranslateUi(QDialog *CharacterPicker)
    {
        CharacterPicker->setWindowTitle(QApplication::translate("CharacterPicker", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("CharacterPicker", "Character", 0));
    } // retranslateUi

};

namespace Ui {
    class CharacterPicker: public Ui_CharacterPicker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARACTER_PICKER_UI_H

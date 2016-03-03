/********************************************************************************
** Form generated from reading UI file 'new_character_ui.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_CHARACTER_UI_H
#define UI_NEW_CHARACTER_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NewCharacter
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLineEdit *name_edit;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QCheckBox *player_checkBox;
    QCheckBox *checkBox;
    QCheckBox *legendary_size_checkBox;
    QLabel *label_3;
    QSpinBox *Join_battle_box;
    QLabel *label_2;
    QLabel *label_4;
    QSpinBox *current_init_spinbox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NewCharacter)
    {
        if (NewCharacter->objectName().isEmpty())
            NewCharacter->setObjectName(QStringLiteral("NewCharacter"));
        NewCharacter->resize(404, 299);
        horizontalLayout = new QHBoxLayout(NewCharacter);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(NewCharacter);
        label->setObjectName(QStringLiteral("label"));
        label->setScaledContents(false);

        verticalLayout_3->addWidget(label);

        name_edit = new QLineEdit(NewCharacter);
        name_edit->setObjectName(QStringLiteral("name_edit"));

        verticalLayout_3->addWidget(name_edit);

        groupBox_3 = new QGroupBox(NewCharacter);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        player_checkBox = new QCheckBox(groupBox_3);
        player_checkBox->setObjectName(QStringLiteral("player_checkBox"));

        gridLayout->addWidget(player_checkBox, 0, 0, 1, 1);

        checkBox = new QCheckBox(groupBox_3);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout->addWidget(checkBox, 1, 0, 1, 1);

        legendary_size_checkBox = new QCheckBox(groupBox_3);
        legendary_size_checkBox->setObjectName(QStringLiteral("legendary_size_checkBox"));

        gridLayout->addWidget(legendary_size_checkBox, 1, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        Join_battle_box = new QSpinBox(groupBox_3);
        Join_battle_box->setObjectName(QStringLiteral("Join_battle_box"));
        Join_battle_box->setMinimum(-99);

        verticalLayout_2->addWidget(Join_battle_box);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        current_init_spinbox = new QSpinBox(groupBox_3);
        current_init_spinbox->setObjectName(QStringLiteral("current_init_spinbox"));

        verticalLayout_2->addWidget(current_init_spinbox);


        verticalLayout_3->addWidget(groupBox_3);


        horizontalLayout->addLayout(verticalLayout_3);

        buttonBox = new QDialogButtonBox(NewCharacter);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        retranslateUi(NewCharacter);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewCharacter, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewCharacter, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewCharacter);
    } // setupUi

    void retranslateUi(QDialog *NewCharacter)
    {
        NewCharacter->setWindowTitle(QApplication::translate("NewCharacter", "Add New Character", 0));
        label->setText(QApplication::translate("NewCharacter", "Name", 0));
        groupBox_3->setTitle(QString());
        player_checkBox->setText(QApplication::translate("NewCharacter", "Player", 0));
        checkBox->setText(QApplication::translate("NewCharacter", "Inert Initiative", 0));
        legendary_size_checkBox->setText(QApplication::translate("NewCharacter", "Legendary Size", 0));
        label_3->setText(QApplication::translate("NewCharacter", "Join Battle Pool", 0));
        label_2->setText(QApplication::translate("NewCharacter", "Used for automatically rolling for NPCs", 0));
        label_4->setText(QApplication::translate("NewCharacter", "Current Initiative", 0));
    } // retranslateUi

};

namespace Ui {
    class NewCharacter: public Ui_NewCharacter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_CHARACTER_UI_H

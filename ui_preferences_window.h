/********************************************************************************
** Form generated from reading UI file 'preferences_window.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCES_WINDOW_H
#define UI_PREFERENCES_WINDOW_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PrefWindow
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *auto_save_comboBox;
    QLabel *label_2;
    QComboBox *style_comboBox;
    QCheckBox *reset_checkBox;
    QCheckBox *jb_checkBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *Reset_Button_btn;
    QPushButton *choose_font_btn;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PrefWindow)
    {
        if (PrefWindow->objectName().isEmpty())
            PrefWindow->setObjectName(QStringLiteral("PrefWindow"));
        PrefWindow->resize(436, 173);
        horizontalLayout_2 = new QHBoxLayout(PrefWindow);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(PrefWindow);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        auto_save_comboBox = new QComboBox(PrefWindow);
        auto_save_comboBox->setObjectName(QStringLiteral("auto_save_comboBox"));
        sizePolicy.setHeightForWidth(auto_save_comboBox->sizePolicy().hasHeightForWidth());
        auto_save_comboBox->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::FieldRole, auto_save_comboBox);

        label_2 = new QLabel(PrefWindow);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        style_comboBox = new QComboBox(PrefWindow);
        style_comboBox->setObjectName(QStringLiteral("style_comboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, style_comboBox);


        verticalLayout_2->addLayout(formLayout);

        reset_checkBox = new QCheckBox(PrefWindow);
        reset_checkBox->setObjectName(QStringLiteral("reset_checkBox"));
        sizePolicy.setHeightForWidth(reset_checkBox->sizePolicy().hasHeightForWidth());
        reset_checkBox->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(reset_checkBox);

        jb_checkBox = new QCheckBox(PrefWindow);
        jb_checkBox->setObjectName(QStringLiteral("jb_checkBox"));
        sizePolicy.setHeightForWidth(jb_checkBox->sizePolicy().hasHeightForWidth());
        jb_checkBox->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(jb_checkBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Reset_Button_btn = new QPushButton(PrefWindow);
        Reset_Button_btn->setObjectName(QStringLiteral("Reset_Button_btn"));
        sizePolicy.setHeightForWidth(Reset_Button_btn->sizePolicy().hasHeightForWidth());
        Reset_Button_btn->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(Reset_Button_btn);

        choose_font_btn = new QPushButton(PrefWindow);
        choose_font_btn->setObjectName(QStringLiteral("choose_font_btn"));
        sizePolicy.setHeightForWidth(choose_font_btn->sizePolicy().hasHeightForWidth());
        choose_font_btn->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(choose_font_btn);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_2);

        buttonBox = new QDialogButtonBox(PrefWindow);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        retranslateUi(PrefWindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), PrefWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PrefWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(PrefWindow);
    } // setupUi

    void retranslateUi(QDialog *PrefWindow)
    {
        PrefWindow->setWindowTitle(QApplication::translate("PrefWindow", "Dialog", 0));
        label->setText(QApplication::translate("PrefWindow", "Auto-save frequency", 0));
        auto_save_comboBox->clear();
        auto_save_comboBox->insertItems(0, QStringList()
         << QApplication::translate("PrefWindow", "Every Turn", 0)
         << QApplication::translate("PrefWindow", "Every Round", 0)
         << QApplication::translate("PrefWindow", "Off", 0)
        );
        label_2->setText(QApplication::translate("PrefWindow", "Style", 0));
        style_comboBox->clear();
        style_comboBox->insertItems(0, QStringList()
         << QApplication::translate("PrefWindow", "Default", 0)
         << QApplication::translate("PrefWindow", "Fusion", 0)
        );
        reset_checkBox->setText(QApplication::translate("PrefWindow", "Reset includes Players", 0));
        jb_checkBox->setText(QApplication::translate("PrefWindow", "Join Battle automatically adds 3", 0));
        Reset_Button_btn->setText(QApplication::translate("PrefWindow", "Reset Fonts", 0));
        choose_font_btn->setText(QApplication::translate("PrefWindow", "Choose App Font", 0));
    } // retranslateUi

};

namespace Ui {
    class PrefWindow: public Ui_PrefWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCES_WINDOW_H

/********************************************************************************
** Form generated from reading UI file 'custom_gambit.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOM_GAMBIT_H
#define UI_CUSTOM_GAMBIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_CustomGambits
{
public:
    QHBoxLayout *horizontalLayout;
    QTextEdit *Gambits;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CustomGambits)
    {
        if (CustomGambits->objectName().isEmpty())
            CustomGambits->setObjectName(QStringLiteral("CustomGambits"));
        CustomGambits->resize(400, 300);
        horizontalLayout = new QHBoxLayout(CustomGambits);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Gambits = new QTextEdit(CustomGambits);
        Gambits->setObjectName(QStringLiteral("Gambits"));

        horizontalLayout->addWidget(Gambits);

        buttonBox = new QDialogButtonBox(CustomGambits);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        retranslateUi(CustomGambits);
        QObject::connect(buttonBox, SIGNAL(accepted()), CustomGambits, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CustomGambits, SLOT(reject()));

        QMetaObject::connectSlotsByName(CustomGambits);
    } // setupUi

    void retranslateUi(QDialog *CustomGambits)
    {
        CustomGambits->setWindowTitle(QApplication::translate("CustomGambits", "Gambits", 0));
    } // retranslateUi

};

namespace Ui {
    class CustomGambits: public Ui_CustomGambits {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOM_GAMBIT_H

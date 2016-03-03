/********************************************************************************
** Form generated from reading UI file 'About_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_GUI_H
#define UI_ABOUT_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_About_window
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *version_label;
    QLabel *label;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *About_window)
    {
        if (About_window->objectName().isEmpty())
            About_window->setObjectName(QStringLiteral("About_window"));
        About_window->resize(366, 452);
        verticalLayout = new QVBoxLayout(About_window);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        version_label = new QLabel(About_window);
        version_label->setObjectName(QStringLiteral("version_label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(version_label->sizePolicy().hasHeightForWidth());
        version_label->setSizePolicy(sizePolicy);
        version_label->setMaximumSize(QSize(16777215, 20));
        version_label->setTextFormat(Qt::AutoText);
        version_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(version_label);

        label = new QLabel(About_window);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setTextFormat(Qt::RichText);
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        buttonBox = new QDialogButtonBox(About_window);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(About_window);
        QObject::connect(buttonBox, SIGNAL(accepted()), About_window, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), About_window, SLOT(reject()));

        QMetaObject::connectSlotsByName(About_window);
    } // setupUi

    void retranslateUi(QDialog *About_window)
    {
        About_window->setWindowTitle(QApplication::translate("About_window", "About", 0));
        version_label->setText(QApplication::translate("About_window", "TextLabel", 0));
        label->setText(QApplication::translate("About_window", "<html><head/><body><p>Created by Erik Seguinte (ErikSeguinte@gmail.com)</p><p>Using Python 3.5.1, PyQT 5.5.1, and QT designer 5.5.1 </p><p><a href=\"https://bitbucket.org/primefactorx01/ex-3e-init-tracker/\"><span style=\" text-decoration: underline; color:#0000ff;\">Bitbucket Site</span></a></p><p>This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or any later version.</p><p>This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.</p><p>You should have received a copy of the GNU General Public License along with this program. If not, see <a href=\"http://www.gnu.org/licenses\"><span style=\" text-decoration: underline; color:#0000ff;\">http://www.gnu.org/licenses</span></a></p></body></htm"
                        "l>", 0));
    } // retranslateUi

};

namespace Ui {
    class About_window: public Ui_About_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_GUI_H

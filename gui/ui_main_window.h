/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionAbout;
    QAction *actionLoad_Players;
    QAction *actionLoad_NPCs;
    QAction *actionReadme;
    QAction *actionSave_Combat;
    QAction *actionLoad_Combat;
    QAction *actionPreferences;
    QAction *actionResume_Combat;
    QAction *actionSave_to_Text_File;
    QAction *actionCustom_Gambits;
    QAction *actionChoose_Font;
    QAction *actionCheck_for_Updates;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QTableView *tableView;
    QFormLayout *formLayout;
    QProgressBar *progressBar;
    QLabel *progress_bar_lbl;
    QVBoxLayout *verticalLayout;
    QPushButton *Withering_btn;
    QPushButton *Decisive_btn;
    QPushButton *other_action_btn;
    QPushButton *add_npc_btn;
    QPushButton *join_battle_btn;
    QPushButton *modify_init_btn;
    QPushButton *remove_from_combat_btn;
    QPushButton *skip_btn;
    QSpacerItem *verticalSpacer;
    QPushButton *reset_btn;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuHelp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(778, 404);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionLoad_Players = new QAction(MainWindow);
        actionLoad_Players->setObjectName(QStringLiteral("actionLoad_Players"));
        actionLoad_NPCs = new QAction(MainWindow);
        actionLoad_NPCs->setObjectName(QStringLiteral("actionLoad_NPCs"));
        actionReadme = new QAction(MainWindow);
        actionReadme->setObjectName(QStringLiteral("actionReadme"));
        actionSave_Combat = new QAction(MainWindow);
        actionSave_Combat->setObjectName(QStringLiteral("actionSave_Combat"));
        actionLoad_Combat = new QAction(MainWindow);
        actionLoad_Combat->setObjectName(QStringLiteral("actionLoad_Combat"));
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QStringLiteral("actionPreferences"));
        actionResume_Combat = new QAction(MainWindow);
        actionResume_Combat->setObjectName(QStringLiteral("actionResume_Combat"));
        actionSave_to_Text_File = new QAction(MainWindow);
        actionSave_to_Text_File->setObjectName(QStringLiteral("actionSave_to_Text_File"));
        actionCustom_Gambits = new QAction(MainWindow);
        actionCustom_Gambits->setObjectName(QStringLiteral("actionCustom_Gambits"));
        actionChoose_Font = new QAction(MainWindow);
        actionChoose_Font->setObjectName(QStringLiteral("actionChoose_Font"));
        actionCheck_for_Updates = new QAction(MainWindow);
        actionCheck_for_Updates->setObjectName(QStringLiteral("actionCheck_for_Updates"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);
        tableView->setMinimumSize(QSize(378, 328));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::NoSelection);
        tableView->setCornerButtonEnabled(false);

        verticalLayout_2->addWidget(tableView);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        formLayout->setWidget(0, QFormLayout::FieldRole, progressBar);

        progress_bar_lbl = new QLabel(centralwidget);
        progress_bar_lbl->setObjectName(QStringLiteral("progress_bar_lbl"));

        formLayout->setWidget(0, QFormLayout::LabelRole, progress_bar_lbl);


        verticalLayout_2->addLayout(formLayout);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        Withering_btn = new QPushButton(centralwidget);
        Withering_btn->setObjectName(QStringLiteral("Withering_btn"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Withering_btn->sizePolicy().hasHeightForWidth());
        Withering_btn->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(Withering_btn);

        Decisive_btn = new QPushButton(centralwidget);
        Decisive_btn->setObjectName(QStringLiteral("Decisive_btn"));
        sizePolicy1.setHeightForWidth(Decisive_btn->sizePolicy().hasHeightForWidth());
        Decisive_btn->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(Decisive_btn);

        other_action_btn = new QPushButton(centralwidget);
        other_action_btn->setObjectName(QStringLiteral("other_action_btn"));
        sizePolicy1.setHeightForWidth(other_action_btn->sizePolicy().hasHeightForWidth());
        other_action_btn->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(other_action_btn);

        add_npc_btn = new QPushButton(centralwidget);
        add_npc_btn->setObjectName(QStringLiteral("add_npc_btn"));
        sizePolicy1.setHeightForWidth(add_npc_btn->sizePolicy().hasHeightForWidth());
        add_npc_btn->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(add_npc_btn);

        join_battle_btn = new QPushButton(centralwidget);
        join_battle_btn->setObjectName(QStringLiteral("join_battle_btn"));
        sizePolicy1.setHeightForWidth(join_battle_btn->sizePolicy().hasHeightForWidth());
        join_battle_btn->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(join_battle_btn);

        modify_init_btn = new QPushButton(centralwidget);
        modify_init_btn->setObjectName(QStringLiteral("modify_init_btn"));
        sizePolicy1.setHeightForWidth(modify_init_btn->sizePolicy().hasHeightForWidth());
        modify_init_btn->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(modify_init_btn);

        remove_from_combat_btn = new QPushButton(centralwidget);
        remove_from_combat_btn->setObjectName(QStringLiteral("remove_from_combat_btn"));
        sizePolicy1.setHeightForWidth(remove_from_combat_btn->sizePolicy().hasHeightForWidth());
        remove_from_combat_btn->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(remove_from_combat_btn);

        skip_btn = new QPushButton(centralwidget);
        skip_btn->setObjectName(QStringLiteral("skip_btn"));
        sizePolicy1.setHeightForWidth(skip_btn->sizePolicy().hasHeightForWidth());
        skip_btn->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(skip_btn);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer);

        reset_btn = new QPushButton(centralwidget);
        reset_btn->setObjectName(QStringLiteral("reset_btn"));
        sizePolicy1.setHeightForWidth(reset_btn->sizePolicy().hasHeightForWidth());
        reset_btn->setSizePolicy(sizePolicy1);
        reset_btn->setDefault(false);
        reset_btn->setFlat(false);

        verticalLayout->addWidget(reset_btn);


        horizontalLayout->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 778, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionSave_Combat);
        menuFile->addAction(actionSave_to_Text_File);
        menuFile->addSeparator();
        menuFile->addAction(actionLoad_Combat);
        menuFile->addAction(actionResume_Combat);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuEdit->addAction(actionLoad_Players);
        menuEdit->addAction(actionLoad_NPCs);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCustom_Gambits);
        menuEdit->addSeparator();
        menuEdit->addAction(actionChoose_Font);
        menuEdit->addAction(actionPreferences);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionReadme);
        menuHelp->addSeparator();
        menuHelp->addAction(actionCheck_for_Updates);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Exalted Initiative", 0));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        actionLoad_Players->setText(QApplication::translate("MainWindow", "Load Players", 0));
        actionLoad_NPCs->setText(QApplication::translate("MainWindow", "Load NPCs", 0));
        actionReadme->setText(QApplication::translate("MainWindow", "Readme", 0));
        actionSave_Combat->setText(QApplication::translate("MainWindow", "Save Combat", 0));
        actionLoad_Combat->setText(QApplication::translate("MainWindow", "Load Combat", 0));
        actionPreferences->setText(QApplication::translate("MainWindow", "Preferences", 0));
        actionResume_Combat->setText(QApplication::translate("MainWindow", "Resume Combat", 0));
        actionSave_to_Text_File->setText(QApplication::translate("MainWindow", "Save to Text File", 0));
        actionCustom_Gambits->setText(QApplication::translate("MainWindow", "Custom Gambits", 0));
        actionChoose_Font->setText(QApplication::translate("MainWindow", "Change Table Font", 0));
        actionCheck_for_Updates->setText(QApplication::translate("MainWindow", "Check for Updates", 0));
        progress_bar_lbl->setText(QApplication::translate("MainWindow", "Round Progress", 0));
        Withering_btn->setText(QApplication::translate("MainWindow", "&Withering Attack", 0));
        Decisive_btn->setText(QApplication::translate("MainWindow", "&Decisive && Gambits", 0));
        other_action_btn->setText(QApplication::translate("MainWindow", "&Other Actions", 0));
        add_npc_btn->setText(QApplication::translate("MainWindow", "&Add Character", 0));
        join_battle_btn->setText(QApplication::translate("MainWindow", "&Join Battle!", 0));
        modify_init_btn->setText(QApplication::translate("MainWindow", "&Modify Character", 0));
        remove_from_combat_btn->setText(QApplication::translate("MainWindow", "&Remove from Combat", 0));
#ifndef QT_NO_TOOLTIP
        skip_btn->setToolTip(QApplication::translate("MainWindow", "Skip character currently at the top of the initiative.", 0));
#endif // QT_NO_TOOLTIP
        skip_btn->setText(QApplication::translate("MainWindow", "Skip", 0));
#ifndef QT_NO_TOOLTIP
        reset_btn->setToolTip(QApplication::translate("MainWindow", "Resets tracker, removing all characters", 0));
#endif // QT_NO_TOOLTIP
        reset_btn->setText(QApplication::translate("MainWindow", "Reset", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H

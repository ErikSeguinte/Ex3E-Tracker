#include <QWidget>
#include"ui_About_gui.h"
#include"ui_attack_gui.h"
#include"ui_character_picker_ui.h"
#include"ui_custom_gambit.h"
#include"ui_decisive_gui.h"
#include"ui_join_battle_gui.h"
#include"ui_main_window.h"
#include"ui_Modification_Window.h"
#include"ui_new_character_ui.h"
#include"ui_other_action_gui.h"
#include"ui_preferences_window.h"

class Main_Window : public QMainWindow, private Ui::MainWindow
{
    Q_OBJECT

public:
	Main_Window(QMainWindow *parent = 0);
	virtual ~Main_Window();

};

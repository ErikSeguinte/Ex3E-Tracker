#include <QApplication>
#include <QWidget>
#include "gui.h"
#include <QTextStream>
#include <string>
#include <iostream>
#include <iomanip>
int main(int argc, char *argv[]) {
		std::cout << "Hello" << std::endl;
        QApplication app(argc, argv);
	Main_Window *w = new Main_Window;
	w->show();
	return app.exec();
}

Main_Window::Main_Window(QMainWindow *parent)
    :QMainWindow(parent)
{
    setupUi(this);
	QMetaObject::connectSlotsByName(this);
}

Main_Window::~Main_Window(){}

void Main_Window::on_Withering_btn_clicked()
{
		Withering_Attack *dialog = new Withering_Attack;
		dialog->exec();
}

Withering_Attack::Withering_Attack(QDialog *parent)
	:QDialog(parent)
{
	setupUi(this);
}

//Withering_Attack::~Withering_Attack(){}

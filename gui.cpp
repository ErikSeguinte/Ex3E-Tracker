#include <QApplication>
#include <QWidget>
#include "gui.h"

int main(int argc, char *argv[]) {
        
        QApplication app(argc, argv);
	Main_Window *w = new Main_Window;
	w->show();
	return app.exec();
}

Main_Window::Main_Window(QMainWindow *parent)
    :QMainWindow(parent)
{
    setupUi(this);
}

Main_Window::~Main_Window(){};

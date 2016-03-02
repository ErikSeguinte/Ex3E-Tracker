#include <QApplication>
#include <QWidget>
#include"ui_main_window.h"
int main(int argc, char *argv[]) {
        
        QApplication app(argc, argv);

	QMainWindow window;
	Ui_MainWindow mainwindow();	
	window = mainwindow;
	return app.exec();
}

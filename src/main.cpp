#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QDebug>


#include "MainWindow.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	QString locale = QLocale::system().name();

	QTranslator translator;
	translator.load(QString(":/translations/") + locale);
	a.installTranslator(&translator);

	MainWindow w;
	w.show();
	return a.exec();
}

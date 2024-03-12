#include "matrix.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QLineEdit>
#include <QString>
#include <QTextEdit>
#include <qdebug.h>
#include <QtMath>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    matrix w;
    w.show();
    return a.exec();
}

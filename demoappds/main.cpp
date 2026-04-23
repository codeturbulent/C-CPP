#include <QCoreApplication>
#include <QTextStream>
#include <QString>
#include <QDebug>
#include <QTimer>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTimer::singleShot(1000 ,&a , &QCoreApplication::quit );
    QTextStream inputStream(stdin);
    QTextStream outputStream(stdout);

    qInfo() << "who are you ";

    outputStream << "enter the username ";
    outputStream.flush();

    QString user = inputStream.readLine();

    outputStream << "hello "<< user;
    outputStream.flush();

    return a.exec();
}

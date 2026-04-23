#include <QCoreApplication>
#include <QString>
#include <QTextStream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTextStream inputStream(stdin);
    QTextStream outputStream(stdout);
    outputStream << "Enter Your user name ";
    QString username = inputStream.readLine();
    outputStream << "Hello User " << username;

    // QTranslator translator;
    // const QStringList uiLanguages = QLocale::system().uiLanguages();
    // for (const QString &locale : uiLanguages) {
    //     const QString baseName = "demoapp_" + QLocale(locale).name();
    //     if (translator.load(":/i18n/" + baseName)) {
    //         a.installTranslator(&translator);
    //         break;
    //     }
    // }

    return a.exec();
}

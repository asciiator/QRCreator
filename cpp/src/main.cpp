#include "qrcodegenerator.h"
#include<QMessageBox>
#include<QTranslator>
#include<QInputDialog>

#include <QApplication>

int main(int argc, char *argv[])
{try {
        QApplication a(argc, argv);
        QTranslator t;
         QStringList languages;
         languages << "English" << "Deutsch";
         QString lang= QInputDialog::getItem(NULL, "Select Language", "Language", languages);

         if (lang == "English")
         {
           t.load(":/english.qm");
         }
    if (lang != "Deutsch")
    {
        a.installTranslator(&t);
    }

        QRCodeGenerator w;
        w.show();
        return a.exec();
}  catch (std::exception const & ex) {
}
    QMessageBox exception;
    exception.setText("Error.");
    exception.exec();

}

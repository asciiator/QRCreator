/********************************************************************************
** Form generated from reading UI file 'qrcodegenerator.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QRCODEGENERATOR_H
#define UI_QRCODEGENERATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QRCodeGenerator
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QTextEdit *input;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *QRCodeGenerator)
    {
        if (QRCodeGenerator->objectName().isEmpty())
            QRCodeGenerator->setObjectName(QString::fromUtf8("QRCodeGenerator"));
        QRCodeGenerator->resize(800, 600);
        centralwidget = new QWidget(QRCodeGenerator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 30, 241, 18));
        input = new QTextEdit(centralwidget);
        input->setObjectName(QString::fromUtf8("input"));
        input->setGeometry(QRect(23, 60, 531, 31));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(429, 110, 131, 26));
        QRCodeGenerator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(QRCodeGenerator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        QRCodeGenerator->setMenuBar(menubar);
        statusbar = new QStatusBar(QRCodeGenerator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        QRCodeGenerator->setStatusBar(statusbar);

        retranslateUi(QRCodeGenerator);

        QMetaObject::connectSlotsByName(QRCodeGenerator);
    } // setupUi

    void retranslateUi(QMainWindow *QRCodeGenerator)
    {
        QRCodeGenerator->setWindowTitle(QCoreApplication::translate("QRCodeGenerator", "QRCodeGenerator", nullptr));
        label->setText(QCoreApplication::translate("QRCodeGenerator", "Hier kannst Du deinen Text eintippen:", nullptr));
        input->setHtml(QCoreApplication::translate("QRCodeGenerator", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans, '; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Amalgam 1234 MHD: 02/42</p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("QRCodeGenerator", "QR-Code erzeugen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QRCodeGenerator: public Ui_QRCodeGenerator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QRCODEGENERATOR_H

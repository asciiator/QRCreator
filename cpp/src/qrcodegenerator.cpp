#include "qrcodegenerator.h"
#include "ui_qrcodegenerator.h"
#include<QFile>
#include<QInputDialog>
#include<QMessageBox>
#include <QTranslator>
#include<QTextStream>
#include <iostream>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include "QrCode.hpp"
#include <fstream>
    using std::ofstream;
#include <QFileDialog>
using std::uint8_t;
using qrcodegen::QrCode;
using qrcodegen::QrSegment;


// Function prototypes
QRCodeGenerator::QRCodeGenerator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QRCodeGenerator)
{
    ui->setupUi(this);
    ui->input->setText(QObject::tr("Lorem ipsum"));
}

QRCodeGenerator::~QRCodeGenerator()
{
    delete ui;
}

void doBasicDemo(const char *text) {
    const QrCode::Ecc errCorLvl = QrCode::Ecc::LOW;  // Error correction level

    // Make and print the QR Code symbol
    const QrCode qr = QrCode::encodeText(text, errCorLvl);
    std::cout << qr.toSvgString(4) << std::endl;
    ofstream stream;
    QString fileName = QFileDialog::getSaveFileName(nullptr, "test save name", ".", "Images (*.svg)" );
    stream.open(fileName.toUtf8().constData());
    stream << qr.toSvgString(4) << std::endl;
    QMessageBox msgBox;
    if(!fileName.isEmpty()&& !fileName.isNull()){
        msgBox.setText(QObject::tr("QR Code erstellt."));
   }
    else{
        msgBox.setText(QObject::tr("QR-Code-Generierung abgebrochen!"));
    }
    msgBox.exec();
}


void QRCodeGenerator::on_pushButton_clicked()
{
    QString text= ui->input->toPlainText();
    try {
        doBasicDemo(text.toUtf8().constData());
    }  catch (qrcodegen::data_too_long& e) {
        QMessageBox tooLong;
        tooLong.setText(tr("QR Code hat eine maximale Kapazität von 23648 bits"));
        tooLong.exec();
    }

}

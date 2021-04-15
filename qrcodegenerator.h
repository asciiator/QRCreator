#ifndef QRCODEGENERATOR_H
#define QRCODEGENERATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class QRCodeGenerator; }
QT_END_NAMESPACE
class QRCodeGenerator : public QMainWindow
{
    Q_OBJECT

public:
    QRCodeGenerator(QWidget *parent = nullptr);
    ~QRCodeGenerator();

private slots:
    void on_pushButton_clicked();

private:
    Ui::QRCodeGenerator *ui;
};
#endif // QRCODEGENERATOR_H

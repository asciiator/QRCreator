# QRCodeGenerator

QRCodeGenerator is a simple GUI based on https://www.nayuki.io/page/qr-code-generator-library. It is created with QTCreator. It allows you to convert any text into a QR code. The QR codes are saved as .svg.

## Deployment with QMake

Using the makefile:
```
cd cpp
qmake src/QR-Code.pro 
make
./QRCode
```

## Pre- compiled deployment on Windows (preliminary)

A cross-compiled version of QRCodeGenerator with needed dll files using https://github.com/mdimura/docker-mingw-arch.
Copy the windows folder to your preferred direcotry (e.g. C://Programms) and exectute the QRCode.exe file. You might want to create shortcut on the Desktop.

## Features

- GUI
- Languages: English, German
- output format: svg

## Disclaimer

This is a private project. I share the files to help others who want to do something similar. Although I have done this project to the best of my ability, I cannot guarantee that the software will work. Downloading and using is at your own risk.

## Feedback

I am grateful for feedback, bugs and feature requests. I will incorporate them into the project if necessary. If you want to extend the functionality or don't want to wait for me, feel free to fork this project.

## Contribution

The usage and implementation of the Photoelectric sensor is inspired by https://tutorials-raspberrypi.de/infrarot-lichtschranke-bauen-und-geschwindigkeit-messen/.

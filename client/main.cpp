//#include "MainWindow.hpp"

#include "Reciever.hpp"
#include <QApplication>

int main(int argc, char* argv[])
{
    /*QApplication app(argc, argv);

    MainWindow window;

    window.resize(600, 900);
    window.setWindowTitle("CryptoMonitor");

    window.show();

    return app.exec();*/

    TReciever recv;
    recv.Update();

    return 0;
}


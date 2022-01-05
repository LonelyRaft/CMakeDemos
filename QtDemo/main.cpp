
#include <qmainwindow.h>
#include <qapplication.h>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QMainWindow view;
    view.show();
    return app.exec();
}


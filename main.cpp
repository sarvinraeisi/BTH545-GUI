/* workshop1
 * name: Sarvin Raeisi
 * ID: 163927197
 * email: sraeisi2@myseneca.ca
 * course: BTH545NAA
 * test
**/
#include <QApplication>
#include <QPushButton>
//#include <QPalette>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QPushButton button("Hello BTH545");
    button.resize(150,35);

    //setting background color to the button
    button.setStyleSheet("background-color : orange");

    //setting color to button's borders
    /*QPalette pal = button.palette();
    pal.setColor(QPalette::Button, QColor(Qt::magenta));
    button.setAutoFillBackground(true);
    button.setPalette(pal);
    button.update();*/



    button.show();
    return a.exec();
}

#include <QApplication>
#include <QPushButton>
 
int main(int argc, char *argv[ ]) 
{
QApplication app(argc, argv);
 
QPushButton button("Hello, World!");
button.resize(200, 60);
button.show( );
 //1
//2
//3
<<<<<<< Updated upstream
=======
//4
>>>>>>> Stashed changes
return app.exec( );
}

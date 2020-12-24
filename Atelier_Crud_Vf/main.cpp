#include "mainwindow.h"
#include <QApplication> //Cette ligne inclut la définition de la classe QApplication.
//Il doit y avoir une instance de QApplication dans toute application qui possède une IHM avec Qt.
//QApplication gère différentes ressources au niveau de l'application, comme la police de caractères par défaut ou le curseur.
#include <QMessageBox>
#include <QDebug>
#include "connexion.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   Connexion c;
   bool test= c.ouvrirConnexion();
   MainWindow w;
              if(test)
{
        w.show();


    }
          else
               QMessageBox::information(nullptr, QObject::tr("database is not open"),
                           QObject::tr("Echec de la connexion.\n""Click Cancel to exit."), QMessageBox::Cancel);



    return a.exec();
}

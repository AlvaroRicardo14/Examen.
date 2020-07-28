#include "principal.h"
#include "ui_principal.h"

Principal::Principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Principal)
{
    ui->setupUi(this);
}

Principal::~Principal()
{
    delete ui;

    // Colocar cabecera en la tabla
    QStringList cabecera = {"Nombre", "Tipo", "Fecha"};
    ui->outResultado->setColumnCount(3);
    ui->outResultado->setHorizontalHeaderLabels(cabecera);






}






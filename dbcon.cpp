#include "dbcon.h"

dbcon::dbcon()
{
}
bool dbcon::createConnection()
{
    QSqlDatabase db1= QSqlDatabase::addDatabase("QSQLITE");
    db1.setDatabaseName("diary.db");

    if (!db1.open())
    {
        QMessageBox::critical(0,"Database Connection Failed","Unable to establish a database connection.\nClick Cancel to exit.", QMessageBox::Cancel);
      return false;
    }
    else
    {
      return true;
    }
}

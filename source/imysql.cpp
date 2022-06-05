#include "header/imysql.h"

bool connect_sql(QSqlDatabase& db)
{
    if(!db.isOpen()){
        db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("localhost");
        db.setPort(3306);
        db.setUserName("root");
        db.setPassword("1225");
        db.setDatabaseName("login");
        if(!db.open())
            return false;
        else
            return true;
    }
    return db.isOpen();
}

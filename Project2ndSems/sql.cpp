#include "sql.h"

Sql::Sql()
{

}

//Important Notice! Make same tables and same names in sql database as written following. Otherwise you have to change the code.
//Table No.1 Name: Service
// COLUMNS : NAME VARCHAR (30), EMAIL VARCHAR (50) PRIMARY KEY, PHONE VARCHAR (15), ADDRESS VARCHAR (250), EXPERIENCE VARCHAR (5), PRICE VARCHAR (7), CNIC VARCHAR (15), PASSWORD VARCHAR (50), PROFESSION VARCHAR (25), TASK1 VARCHAR (300), TASK2 VARCHAR (300), Accepted1 INTEGER, Accepted2 INTEGER, EMAILT1 VARCHAR (50), EMAILT2 VARCHAR (50), RATINGS INTEGER
//Table No.2 Name: User1
//COLUMNS: NAME VARCHAR (50), EMAIL VARCHAR (50), PHONE VARCHAR (15), ADDRESS VARCHAR (150), PASSWORD VARCHAR (50), CNIC VARCHAR (15), CURRENTADD VARCHAR (50), STATUS INTEGER, STATUS2 INTEGER, DATE VARCHAR (10), DATE2 VARCHAR (10)
//Table No.3 Name: Record
//COLUMNS : TASKS VARCHAR (500), USERS VACHAR (50), SERVIGO VARCHAR (50), DATE VARCHAR (20)

bool Sql::SqlSet()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");

    // Set the connection parameters
    db.setDatabaseName("DRIVER={SQL Server Native Client 11.0};"
                       "Server=YourServerIPAddress,PortNumber;"
                       "Database=YourDatabaseName;"
                       "Uid=YourUsername;"
                       "Pwd=YourPassword;");

    // Add server of your ip address, Port number, Database name , username , password

    db.open();
    if(db.isOpen())
    {
        return false;
    }
    else
    {
        return true;
    }
}


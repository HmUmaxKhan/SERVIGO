#ifndef SQL_H
#define SQL_H
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>

class Sql
{
public:
    Sql();

    bool SqlSet();

    template <typename table, typename column, typename condition, typename password, typename cnic>
    bool SqlUpdate(table a, column b, condition c, password d, cnic e)
    {
        QSqlQuery qry;
        QString Uset = "UPDATE " + a + " SET " + b + " = :password WHERE " + c + " = :cnic";
        qry.prepare(Uset);

        qry.bindValue(":password", d);
        qry.bindValue(":cnic", e);

        if(qry.exec())
        {
            return true;
        }else
        {
            return false;
        }

    }

    template <typename table, typename condition,typename value>
    bool SetCheck(table a , condition b, value c)
    {
        QSqlQuery qry;
        QString str ="SELECT * FROM "+ a +" WHERE " + b +" = :condition";
        qry.prepare(str);
        qry.bindValue(":condition", c);

        if(qry.exec() && qry.next())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    template <typename col1, typename col2, typename col3, typename table, typename condition,typename value>
    bool showHistory(col1 c1, col2 c2,col3 c3,table tab,condition con,value val)
    {
        QSqlQuery qry;
        QString str="SELECT ,"+c1+"," +c2+ ","+c3+ "FROM "+tab+" WHERE "+con+"=:email ";
        qry.prepare(str);
        qry.bindValue(":email",val);
        if(qry.exec())
        {
            return true;
        }else
        {
            return false;
        }
    }

    template < typename table, typename col1,typename value1, typename condition, typename value2>
    void setUpdate(table tab, col1 c1, value1 val1, condition con, value2 val2)
    {
        QSqlQuery qry;
        QString  str = "UPDATE "+tab+" SET "+c1+ "= :set" "WHERE "+ con+ "= :email";
        qry.prepare(str);
        qry.bindValue(":email",val2);
        qry.bindValue(":set",val1);
        qry.exec();
    }
};

#endif // SQL_H

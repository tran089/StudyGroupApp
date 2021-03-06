#ifndef ALLGROUPS_H
#define ALLGROUPS_H

#include <QMainWindow>
#include"AllGroups.h"
#include <QString>
#include <QDate>
#include "User.h"
#include <GroupInfo.h>
#include "HTTPInterface.h"
#include "LoginWindow.h"
#include <QDebug>


namespace Ui {
class AllGroups;
}

class HTTPInterface;
class LoginWindow;
class User;
class GroupInfo;

class AllGroups : public QWidget
{
    Q_OBJECT

public:
    explicit AllGroups(QWidget *parent = 0);
    ~AllGroups();
    void User_Profile();
    void Study_Group_Info();    
    void setColumnsOfTable();

private slots:

    void on_leaveButton_clicked();

    void on_Usergroup_cellClicked(int row);

    void on_showGroupButton_clicked();

private:
    Ui::AllGroups *ui;

protected:
    GroupInfo *profile_group_info_window;
    HTTPInterface *web_interface;

signals:
    void sendProfileGroupID(QString newID);
};

#endif // ALLGROUPS_H

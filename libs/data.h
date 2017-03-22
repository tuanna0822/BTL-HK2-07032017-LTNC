#ifndef DATA_H
#define DATA_H
#include<string>
//define data
using std::string;
typedef struct Session{
    int permission;
    string ID;
}Session;
typedef struct Borrow
{
    string borrowID;
    string employeeID;
    unsigned int startDate;
    unsigned int dueDate;
    unsigned realDate;
    string borrowstatus;
}Borrow;
typedef struct book
{
    string bookID;
    string ISBN;
    string Title;
    int numOfcopies;
    string author;
    string publisher;
    string nextbook;
    string status;
}book;
//employee
#define  male
#define female 0
typedef struct Employee
{
    string employeeID;
    string Name;
    string address;
    string phoneNum;
    string Department;
    string dateofbirth;
    string email;
    int gender;
}employee;
typedef struct user
{
    string ID;
    string name;
    string password;
    string email;
    string dateofbirth;
    string phoneNum;
}user;
typedef struct BorrowDetail
{
    Borrow borrow;
    book bookID;
}BorrowDetail;
//data processing
#define bookdir "data/book/"
#define userdir "data/user/"
#define employeedir "data/employee/"
#define logindir "data/etc/login/"
//bool savedata();
//book getbook(string bookID);
//user getuser(string userID);
//Employee getemployee(string employeeID);
//bool removedata(string mode,string ID);
void bookprocess(string mode);
void userprocess(string mode);
void employeeprocess(string mode);

#endif // DATA_H

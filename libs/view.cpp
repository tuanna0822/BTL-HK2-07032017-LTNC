#include"control.h"
#include"view.h"
#include"data.h"
#include<iostream>
#include<windows.h>

using std::string;
using namespace std;

void notifi(string messenge)
{
    cout<<"           "+messenge+"             \n                   ";
}
void greet()
{
    system("cls");
    cout<<"-------------------------------------------------"<<endl;
    cout<<"----------chuong trinh quan ly thu vien----------"<<endl;
    cout<<"-------------------------------------------------"<<endl;
}
Session loginscreen()
{
    greet();
    string username,password;
    cout<<"           moi nhap ten tai khoan:            \n                   ";
    cin>>username;
    cout<<"            moi nhap mat khau:                \n                   ";
    cin>>password;
    return checkuser(username,password);
}
void adminscreen()
{
    //hiện thị ID chức danh
    //giao diện cho admin,cho tùy chọn thêm/xóa/sửa/tìm sách user employee
    system("cls");
    greet();
    cout<<"TODO"<<endl;
    system("pause");
}
void userscreen()
{
    string mode;
    //hiện thị ID chức danh
    //giao diện cho admin,cho tùy chọn tìm sách
    system("cls");
    greet();
    cout << "WELCOME USER" << endl;
    cout << "=============" << endl;
    cout << "Moi ban lua chon tinh nang can xu ly: ";
    cin >> mode;
    return userprocess(mode);
}
void employeescreen()
{
    //hiện thị ID chức danh
    //giao diện cho admin,cho tùy chọn thêm/xóa/sửa/tìm sách user
    system("cls");
    greet();
    cout<<"TODO"<<endl;
    system("pause");
}

#include <iostream>
#include"libs\view.h"
#include"libs\control.h"
#include"libs\data.h"
#include<windows.h>

#define ad 1
#define usr 2
#define emlye 3



using namespace std;

Session session;


int main()
{
    session.permission=0;
    session.ID="";
    while(1)
    {
        greet();
        if(session.permission==0)
        {
            session=loginscreen();
            notifi("xin loi,tai khoan hoac mat khau ban vua nhap khong dung!");
        }
        else
            notifi("dang nhap thanh cong");
        switch(session.permission)
            {
                case ad: adminscreen();break;
                case usr: userscreen();break;
                case emlye: employeescreen();break;
            };
    }
return 0;
}

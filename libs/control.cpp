#include<iostream>
#include<string>
#include<fstream>
#include"hash.h"
#include"control.h"
#include"data.h"
using std::string;
using namespace std;
Session checkuser(string username,string password)
{
    ifstream file;
    file.open((logindir+hashing(username)+".csv").c_str(),ios::in);
    string hashedpass;
    Session session;
    file>>hashedpass>>session.permission;
    if(hashing(password)==hashedpass)
    {
        session.ID=username;
        return session;
    }
    else
    {
        session.permission=0;
        return session;
    }

};
void logout(int* permission)
{
    *permission=0;
};


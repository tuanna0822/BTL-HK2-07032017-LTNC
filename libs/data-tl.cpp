#include<iostream>
#include<fstream>
#include<string>
#include<windows.h>
#include"data.h"
#include"control.h"
#include"view.h"
#include<cstdio>
using std::string;
using namespace std;

void userprocess(string mode)
{
	user tempUser;
	greet();
	if (mode == "add" || mode == "edit")
	{
	    getline(std::cin,tempUser.ID);//xóa buffer của std::in
		notifi("moi nhap ID nguoi dung:");
		getline(std::cin,tempUser.ID);
		notifi("moi nhap ten nguoi dung:");
		getline(std::cin,tempUser.name);
		notifi("moi nhap mat khau nguoi dung:");
		getline(std::cin,tempUser.password);
		notifi("moi nhap email nguoi dung:");
		getline(std::cin,tempUser.email);
		notifi("moi nhap ngay sinh nguoi dung:");
		getline(std::cin,tempUser.dateofbirth);
		notifi("moi nhap so dien thoai nguoi dung:");
		cin >> tempUser.phoneNum;

		ofstream file;
		file.open((userdir + tempUser.ID + ".csv").c_str());
		file << tempUser.ID << "," << tempUser.name << "," << tempUser.password << "," << tempUser.email << "," << tempUser.dateofbirth << "," << tempUser.phoneNum;
		file.close();
		notifi("da thao tac thanh cong!");
	}
	if (mode == "delete")
	{
		string userID;
		notifi("moi nhap ID nguoi dung can xoa:");
		cin >> userID;
		if (remove((userdir + userID + ".csv").c_str()) == 0)
			notifi("da xoa thanh cong sach");
		else
			notifi("khong the xoa sach,xin vui long thu lai!");
	}
	if (mode == "view")
	{
		string userID;
		notifi("moi nhap ma sach can xem!");
		cin >> userID;
		ifstream file;
		file.open((userdir + userID + ".csv").c_str(),ios::in);
		string data, messenges[] = { "ID nguoi dung:","ten nguoi dung:","mat khau nguoi dung:","email nguoi dung:","ngay sinh nguoi dung:","so dien thoai nguoi dung:" };
		for (int i = 0;i < 6;i++)
		{
			getline(file, data, ',');
			notifi(messenges[i]);
			cout << data<<endl;
		}
		system("pause");
	}
}

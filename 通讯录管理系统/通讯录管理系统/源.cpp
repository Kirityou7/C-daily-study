#include<iostream>
#include<string>
#include<stdlib.h>
#include<conio.h>
using namespace std;
#define M 1000
int key;
struct person 
{
	string phone;
	string age;
	string name;
	string addr;
	string sex;
	
}personn;
struct Addressbook
{
	struct person personn[M];
	int size;
};


void show(Addressbook abs)
{
	if (abs.size == 0)
	{
		cout << "目前通讯录中未储存联系人" << endl;
		cout << "请按任意键继续...";
		if (key = _getch())
			system("cls");
	}
	else
	{
		for (int i = 0; i < abs.size; i++)
		{
			cout << i + 1 << ".";
			cout << "姓名 ：" << abs.personn[i].name << " ";
			cout << "性别 ：" << abs.personn[i].sex << " ";
			cout << "年龄 ：" << abs.personn[i].age << " ";
			cout << "手机 ：" << abs.personn[i].phone << " ";
			cout << "地址 ：" << abs.personn[i].addr << " ";
			cout << endl;
		}
	}
}



void add(Addressbook *p)
{
	if (p->size == M)
	{
		cout << "通讯录人数已满" << endl;
		return;
	}
	else
	{
		string name;
		cout << "请输入名字：";
		cin >> name;
		p->personn[p->size].name = name;
		cout << "请输入性别：";
		string sex;
		cin >> sex;
		p->personn[p->size].sex = sex;
		cout << "请输入年龄：";
		string age;
		cin >> age;
		p->personn[p->size].age = age;
		cout << "请输入手机号：";
		string phone;
		cin >> phone;
		p->personn[p->size].phone = phone;
		cout << "请输入地址：";
		string address;
		cin >> address;
		p->personn[p->size].addr = address;
		p->size++;
		cout << "添加成功"<<endl;
	}
	cout << "请按任意键继续...";
	if (key = _getch())
		system("cls");
}


int exist(Addressbook* abs, string name)
{

	for(int i=0;i<abs->size;i++)
		if (abs->personn[i].name == name)
		{
			return i;
		}
	return -1;
}


void search(Addressbook* abs)
{
	if (abs->size == 0)
	{
		cout << "目前通讯录中未储存联系人" << endl;
		cout << "请按任意键继续...";
		if (key = _getch())
			system("cls");
	}
	else
	{
		cout << "请输入需查找人的姓名:";
		string name;
		cin >> name;
		int ret = exist(abs, name);
		if (ret == -1)
			cout << "查无此人" << endl;
		else
		{
			for (int i = 0; i < abs->size; i++)
			{
				if (abs->personn[i].name == name)
				{
					cout << "姓名:" << abs->personn[i].name << " " << "性别:" << abs->personn[i].sex << " " << "年龄:" << abs->personn[i].age << " " << "手机号:" << abs->personn[i].phone << " " << "住址:" << abs->personn[i].addr;
					cout << endl;
				}
			}
		}
		cout << "请按任意键继续...";
		if (key = _getch())
			system("cls");
	}
}


void change(Addressbook* abs)
{
	if(abs->size==0)	
		show(*abs);
	else
	{
		show(*abs);
		cout << "请输入需更改联系人序号:";
		string choice;
		int num;
		cin >> num;
		if (num > abs->size || num < 0)
			cout << "输入错误" << endl;
		else
		{
			cout << "是否更改姓名(Y/N)" << endl;
			cin >> choice;
			if (choice == "Y" || choice == "y")
			{
				cout << "请输入修改后的姓名:";
				cin >> abs->personn[num - 1].name;
				cout << "修改成功" << endl;
			}
			cout << "是否更改性别(Y/N)" << endl;
			cin >> choice;
			if (choice == "Y" || choice == "y")
			{
				cout << "请输入修改后的性别:";
				cin >> abs->personn[num - 1].sex;
				cout << "修改成功" << endl;
			}
			cout << "是否更改年龄(Y/N)" << endl;
			cin >> choice;
			if (choice == "Y" || choice == "y")
			{
				cout << "请输入修改后的年龄:";
				cin >> abs->personn[num - 1].age;
				cout << "修改成功" << endl;
			}
			cout << "是否更改手机号(Y/N)" << endl;
			cin >> choice;
			if (choice == "Y" || choice == "y")
			{
				cout << "请输入修改后的手机号:";
				cin >> abs->personn[num - 1].phone;
				cout << "修改成功" << endl;
			}
			cout << "是否更改住址(Y/N)" << endl;
			cin >> choice;
			if (choice == "Y" || choice == "y")
			{
				cout << "请输入修改后的住址:";
				cin >> abs->personn[num - 1].addr;
				cout << "修改成功" << endl;
			}
		}
		cout << "请按任意键继续...";
		if (key = _getch())
			system("cls");
	}
}


void clearr(Addressbook* abs)
{
	abs->size = 0;
	cout << "清除联系人成功"<<endl;
	cout << "请按任意键继续...";
	if (key = _getch())
		system("cls");

}


void deletee(Addressbook* abs)
{
	if (abs->size == 0)
	{
		cout << "目前通讯录中未储存联系人" << endl;
		cout << "请按任意键继续...";
		if (key = _getch())
			system("cls");
	}
	else
	{
		cout << "请要输入删除的联系人:";
		string name;
		cin >> name;
		int ret = exist(abs, name);
		if (ret == -1)
		{
			cout << "查无此人" << endl;
		}
		else
		{
			if (ret == abs->size)
			{
				abs->size--;
				cout << "删除成功" << endl;
			}
			else
			{
				for (int i = ret; i < abs->size - 1; i++)
				{
					abs->personn[i] = abs->personn[i + 1];
				}
				abs->size--;
				cout << "删除成功" << endl;
			}
		}
		cout << "请按任意键继续...";
		if (key = _getch())
			system("cls");
	}
}


void menu()
{
	cout << "****************************" << endl;
	cout << "****    1.添加联系人    ****" << endl;
	cout << "****    2.显示联系人    ****" << endl;
	cout << "****    3.删除联系人    ****" << endl;
	cout << "****    4.查找联系人    ****" << endl;
	cout << "****    5.修改联系人    ****" << endl;
	cout << "****    6.清空联系人    ****" << endl;
	cout << "****    0.退出通讯录    ****" << endl;
	cout << "****************************" << endl;
}


int main()
{
	Addressbook abs;
	int select=0;
	abs.size = 0;
	while (1)
	{
		menu();
		cout << "请选择功能:";
		cin >> select;
		switch (select)
		{
		case 1:
			add(&abs);
			break;
		case 2:
			show(abs);
			break;
		case 3:
			deletee(&abs);
			break;
		case 4:	
			search(&abs);
			break;
		case 5:
			change(&abs);
			break;
		case 6:
			clearr(&abs);
			
			break;
		case 0:
		{
			cout << "欢迎下次使用";
			return 0;
		}
		default:
		{
			cout << "输入错误，请重新输入."<<endl;
			cout << "请按任意键继续...";
			if (key = _getch())
				system("cls");
			break;
		}
		}
	}
	return 0;
}
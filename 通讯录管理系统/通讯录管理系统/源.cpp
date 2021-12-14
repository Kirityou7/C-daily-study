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
		cout << "ĿǰͨѶ¼��δ������ϵ��" << endl;
		cout << "�밴���������...";
		if (key = _getch())
			system("cls");
	}
	else
	{
		for (int i = 0; i < abs.size; i++)
		{
			cout << i + 1 << ".";
			cout << "���� ��" << abs.personn[i].name << " ";
			cout << "�Ա� ��" << abs.personn[i].sex << " ";
			cout << "���� ��" << abs.personn[i].age << " ";
			cout << "�ֻ� ��" << abs.personn[i].phone << " ";
			cout << "��ַ ��" << abs.personn[i].addr << " ";
			cout << endl;
		}
	}
}



void add(Addressbook *p)
{
	if (p->size == M)
	{
		cout << "ͨѶ¼��������" << endl;
		return;
	}
	else
	{
		string name;
		cout << "���������֣�";
		cin >> name;
		p->personn[p->size].name = name;
		cout << "�������Ա�";
		string sex;
		cin >> sex;
		p->personn[p->size].sex = sex;
		cout << "���������䣺";
		string age;
		cin >> age;
		p->personn[p->size].age = age;
		cout << "�������ֻ��ţ�";
		string phone;
		cin >> phone;
		p->personn[p->size].phone = phone;
		cout << "�������ַ��";
		string address;
		cin >> address;
		p->personn[p->size].addr = address;
		p->size++;
		cout << "��ӳɹ�"<<endl;
	}
	cout << "�밴���������...";
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
		cout << "ĿǰͨѶ¼��δ������ϵ��" << endl;
		cout << "�밴���������...";
		if (key = _getch())
			system("cls");
	}
	else
	{
		cout << "������������˵�����:";
		string name;
		cin >> name;
		int ret = exist(abs, name);
		if (ret == -1)
			cout << "���޴���" << endl;
		else
		{
			for (int i = 0; i < abs->size; i++)
			{
				if (abs->personn[i].name == name)
				{
					cout << "����:" << abs->personn[i].name << " " << "�Ա�:" << abs->personn[i].sex << " " << "����:" << abs->personn[i].age << " " << "�ֻ���:" << abs->personn[i].phone << " " << "סַ:" << abs->personn[i].addr;
					cout << endl;
				}
			}
		}
		cout << "�밴���������...";
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
		cout << "�������������ϵ�����:";
		string choice;
		int num;
		cin >> num;
		if (num > abs->size || num < 0)
			cout << "�������" << endl;
		else
		{
			cout << "�Ƿ��������(Y/N)" << endl;
			cin >> choice;
			if (choice == "Y" || choice == "y")
			{
				cout << "�������޸ĺ������:";
				cin >> abs->personn[num - 1].name;
				cout << "�޸ĳɹ�" << endl;
			}
			cout << "�Ƿ�����Ա�(Y/N)" << endl;
			cin >> choice;
			if (choice == "Y" || choice == "y")
			{
				cout << "�������޸ĺ���Ա�:";
				cin >> abs->personn[num - 1].sex;
				cout << "�޸ĳɹ�" << endl;
			}
			cout << "�Ƿ��������(Y/N)" << endl;
			cin >> choice;
			if (choice == "Y" || choice == "y")
			{
				cout << "�������޸ĺ������:";
				cin >> abs->personn[num - 1].age;
				cout << "�޸ĳɹ�" << endl;
			}
			cout << "�Ƿ�����ֻ���(Y/N)" << endl;
			cin >> choice;
			if (choice == "Y" || choice == "y")
			{
				cout << "�������޸ĺ���ֻ���:";
				cin >> abs->personn[num - 1].phone;
				cout << "�޸ĳɹ�" << endl;
			}
			cout << "�Ƿ����סַ(Y/N)" << endl;
			cin >> choice;
			if (choice == "Y" || choice == "y")
			{
				cout << "�������޸ĺ��סַ:";
				cin >> abs->personn[num - 1].addr;
				cout << "�޸ĳɹ�" << endl;
			}
		}
		cout << "�밴���������...";
		if (key = _getch())
			system("cls");
	}
}


void clearr(Addressbook* abs)
{
	abs->size = 0;
	cout << "�����ϵ�˳ɹ�"<<endl;
	cout << "�밴���������...";
	if (key = _getch())
		system("cls");

}


void deletee(Addressbook* abs)
{
	if (abs->size == 0)
	{
		cout << "ĿǰͨѶ¼��δ������ϵ��" << endl;
		cout << "�밴���������...";
		if (key = _getch())
			system("cls");
	}
	else
	{
		cout << "��Ҫ����ɾ������ϵ��:";
		string name;
		cin >> name;
		int ret = exist(abs, name);
		if (ret == -1)
		{
			cout << "���޴���" << endl;
		}
		else
		{
			if (ret == abs->size)
			{
				abs->size--;
				cout << "ɾ���ɹ�" << endl;
			}
			else
			{
				for (int i = ret; i < abs->size - 1; i++)
				{
					abs->personn[i] = abs->personn[i + 1];
				}
				abs->size--;
				cout << "ɾ���ɹ�" << endl;
			}
		}
		cout << "�밴���������...";
		if (key = _getch())
			system("cls");
	}
}


void menu()
{
	cout << "****************************" << endl;
	cout << "****    1.�����ϵ��    ****" << endl;
	cout << "****    2.��ʾ��ϵ��    ****" << endl;
	cout << "****    3.ɾ����ϵ��    ****" << endl;
	cout << "****    4.������ϵ��    ****" << endl;
	cout << "****    5.�޸���ϵ��    ****" << endl;
	cout << "****    6.�����ϵ��    ****" << endl;
	cout << "****    0.�˳�ͨѶ¼    ****" << endl;
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
		cout << "��ѡ����:";
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
			cout << "��ӭ�´�ʹ��";
			return 0;
		}
		default:
		{
			cout << "�����������������."<<endl;
			cout << "�밴���������...";
			if (key = _getch())
				system("cls");
			break;
		}
		}
	}
	return 0;
}
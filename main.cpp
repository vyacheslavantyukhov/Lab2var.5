#include <iostream>
#include <string>
#include "Product.h"

using namespace std;

int main()
{
setlocale(LC_ALL,"RUS");
Product q, qq;
cout <<"����������� ��� ���������� \n\n" << endl;
cout << qq ;

string name;
float price;
int weight;

cout << "\n\t\t��������� ����: name, price, weight\n " << endl;
cin >> q;
cout << "\n" << q << endl;

cout << "\t\t������ �������� ==" << endl;
if(qq== q)
{cout <<"�� ���������"<< endl;}
else {cout << "���������" <<endl;}


cout << "|\n\t������ �������� <" << endl;
if(qq<q)
{cout << "������"<<endl;}
else {cout << "������ ��� �����" << endl;}


cout << "\n\������ �������� >" << endl;
if(qq > q)
{cout << "������"<< endl;}
else {cout << "�� ������"<< endl;}


cout << "\n\t��������� �������� <=" << endl;
if(qq <= q)
{cout<<"������ ��� �����"<< endl;}
else {cout << "������" << endl;}


cout <<  "\n\t����� �������� >=" << endl;
if(qq >= q)
{cout << "������ ��� �����" << endl;}
else {cout <<"������" << endl;}


cout << "\n\t������ �������� !=" << endl;
if(qq!=q)
{cout << " �� ���������"<<endl;}
else {cout<<" ���������" << endl;}

cout << "=" << endl;
qq= q;
cout <<  q << endl;

return 0;
}

#include <iostream>
#include <string>
#include "Product.h"

using namespace std;

int main()
{
setlocale(LC_ALL,"RUS");
Product q, qq;
cout <<"Конструктор без параметров \n\n" << endl;
cout << qq ;

string name;
float price;
int weight;

cout << "\n\t\tЗаполните поля: name, price, weight\n " << endl;
cin >> q;
cout << "\n" << q << endl;

cout << "\t\tпервый оператор ==" << endl;
if(qq== q)
{cout <<"Не совпадает"<< endl;}
else {cout << "Совпадает" <<endl;}


cout << "|\n\tвторой оператор <" << endl;
if(qq<q)
{cout << "Меньше"<<endl;}
else {cout << "Больше или равно" << endl;}


cout << "\n\третий оператор >" << endl;
if(qq > q)
{cout << "Больше"<< endl;}
else {cout << "Не больше"<< endl;}


cout << "\n\tчетвертый оператор <=" << endl;
if(qq <= q)
{cout<<"Меньше или равно"<< endl;}
else {cout << "Больше" << endl;}


cout <<  "\n\tпятый оператор >=" << endl;
if(qq >= q)
{cout << "Больше или равно" << endl;}
else {cout <<"Меньше" << endl;}


cout << "\n\tшестой оператор !=" << endl;
if(qq!=q)
{cout << " Не совпадает"<<endl;}
else {cout<<" Совпадает" << endl;}

cout << "=" << endl;
qq= q;
cout <<  q << endl;

return 0;
}

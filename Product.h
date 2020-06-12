#ifndef PRODUCT_H_INCLUDED
#define PRODUCT_H_INCLUDED
#include <iostream>
#include <cstring>

using namespace std;

class Product
{
private:
string name;
float price;
int weight;

public:
Product ();

bool operator> (const Product &qq) const;
bool operator< (const Product &qq) const;
bool operator>= (const Product &qq) const;
bool operator<= (const Product &qq) const;
bool operator== (const Product &qq) const;
bool operator!= (const Product &qq) const;

friend ostream& operator << (ostream &out, const Product &qq);
friend istream& operator >> (istream &in, Product &qq);
Product& operator=(Product &qq);


Product& operator=(string &str);
Product& operator=(float &str);
Product& operator=(int &str);

};

#endif // PRODUCT_H_INCLUDED

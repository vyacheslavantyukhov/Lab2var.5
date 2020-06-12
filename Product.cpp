#include <iostream>
#include "Product.h"

using namespace std;

Product::Product()
{
this->name="potato";
this->price=25;
this->weight=500;
}

bool Product::operator> (const Product &qq) const
{
if (name>qq.name)
{return 1;}
return 0;
}

bool Product::operator< (const Product &qq) const
{
if (name<qq.name)
{return 1;}
return 0;
}
bool Product::operator>= (const Product &qq) const
{
if (name>=qq.name)
{return 1;}
return 0;
}
bool Product::operator<= (const Product &qq) const
{
if (name<=qq.name)
{return 1;}
return 0;
}
bool Product::operator==(const Product &qq)const
{
if(name == qq.name &&
price == qq.price &&
weight == qq.weight)
return 1;
return 0;
}
bool Product::operator!= (const Product & qq) const
{
if (*(this) == qq)
return 0;
return 1;
}
ostream& operator << (ostream &out, const Product &qq)
{
out << "Name: " << qq.name << "\n Price: " << qq.price << "\n Weight: " << qq.weight << endl;
return out;
}

istream& operator >> (istream &in, Product &qq)
{
in >> qq.name;
in >> qq.price;
in >> qq.weight;
return in;
}
Product&Product::operator=(Product &qq)
{
this-> name = qq.name;
this-> price = qq.price;
this-> weight = qq.weight;
return *this;

}
Product&Product::operator=(string &str)
{
this-> name = str;
return *this;
}
Product&Product::operator=(float &str)
{
this-> price = str;
return *this;
}
Product&Product::operator=(int &str)
{
this-> weight = str;
return *this;
}



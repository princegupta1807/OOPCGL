#include <iostream>
using namespace std;
class complex
{
private :
int x,y;
public:
 complex()
 {
 x=0;
 y=0;
 }
 
complex(int real, int imag)
{
x=real;
y=imag;
}

complex operator+(complex c)
{
complex temp;

temp.x=x+c.x;
temp.y=y+c.y;
return temp;
}

complex operator*(complex c)
{
complex temp;

temp.x=(x*c.x)-(y*c.y);
temp.y=(y*c.x)+(x*c.y);
return temp;
}
friend istream&operator>>(istream&, complex&);
friend ostream&operator<<(ostream&, complex&);
};

istream& operator>>(istream& a, complex& c)
{
a>>c.x>>c.y;
return a;
}
ostream&operator<<(ostream&k, complex&c)
{
k<<c.x<<"+"<<c.y<<"i";
return k;
}
int main()
{
complex c1;
cout<<c1<<endl;

complex c2 (2, 5);
cout<<c2<<endl;

complex c3;
cout<<"Enter first complex number:";
cin>>c3;

complex c4;
cout<<"Enter second complex number:";
cin>>c4;

complex c5;
c5=c3+c4;
cout<<"The addition of the complex numbers is:"<<c5;

complex c6;
c6=c3*c4;
cout<<"The multiplication of the complex numbers is:"<<c6; 
}

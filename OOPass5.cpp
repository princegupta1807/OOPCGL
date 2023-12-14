#include<iostream>
using namespace std;
#define size 10
int n;
template<class T>
void selection (T a[size])
{
int min,i,j;
T temp;
for(i=0;i<n;i++)
{
min=i;
for(j=j+1;j<n;j++)
{
if(a[j]<a[min])
min=1;
}
temp=a[i];
a[i]=a[min];
a[min]=temp;
}
cout<<"the shorted list is:";
for(i=0;i<n;i++)
cout<<"\t"<<a[i];
}
int main()
{
int i,a[size];
float b[size];
cout<<"integer alement";
cout<<"how many elenemts are ther";
cin>>n;
cout<<"enter the integer element";
for(i=0;i<n;i++)
cin>>a[i];
selection (a);
cout<<"float element";
cout<<"how many elements are there";
cin>>n;
cout<<"enter the float number";
cin>>b[i];
selection (b);
return 0;
}

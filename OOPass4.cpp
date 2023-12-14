#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
char name[20];
cout<<"Enter the name of the file: ";
cin>>name;
ofstream fout;
fout.open(name);
if (!fout)
{
cout<<"Error in opening the file.";
exit(1);
}
cout<<"Enter the contents of the file and end it with ^D";
string data;
while (getline (cin, data))
{
	if (data=="^D")
	break;
	fout<<data<<endl;
}
fout.close();
ifstream fin;
fin.open(name);
if (!fin)
{
	cout<<"Error in opening the file";
	exit(1);
}
cout<<"Reading from the file";
while(fin)
{
	getline (fin, data);
    cout<<data;
}
fin.close();
return 0;
}

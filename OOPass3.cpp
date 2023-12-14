#include<iostream>
#include<string>
#include<exception>
using namespace std;
class publication
{
 protected:
   string title;
   float price;
};
class book:public publication
{
 int pages;
 public:
   void getb();
   void showb();
};
class tape:public publication
{
 float time;
 public: 
   void gett();
   void showt();
};
void book::getb()
{
 cout<<"Enter details of the book"<<endl;
 cout<<"Enter title of the book="<<endl;
 cin.ignore(1,'\n');
 getline(cin,title);
 cout<<"Enter price of the book=";
 cin>>price;
 cout<<"Enter number of pages of book=";
 cin>>pages;
 try
 {
   if(pages<100||pages>5000)
   {
     throw(pages);
   } 
   else
     showb();     
 }
 catch(int i)
 {
 cout<<"You enter invalid data"<<endl;
 title="";
 price=0.0;
 pages=0;
 showb();
 }
}   
void book::showb()
{
 cout<<"Title of book is ="<<title<<endl;
 cout<<"Price of  book is ="<<price<<endl;
 cout<<"Number of pages in book are="<<pages<<endl;
}        
void tape::gett()
{
 cout<<"Enter details of the Tape"<<endl;
 cout<<"Enter title of the tape="<<endl;
 cin.ignore(1,'\n');
 getline(cin,title);
 cout<<"Enter price of the tape=";
 cin>>price;
 cout<<"Enter time of tape=";
 cin>>time;
 try
 {
   if(time<1.0||time>19.0)
   {
     throw(time);
   } 
   else
     showt();     
 }
 catch(float i)
 {
 cout<<"You enter invalid data"<<endl;
 title="";
 price=0.0;
 time=0.0;
 showt();
 }
} 
void tape::showt()
{
 cout<<"Title of tape is ="<<title<<endl;
 cout<<"Price of  tape is ="<<price<<endl;
 cout<<"Time of tape is="<<time<<endl;
}     
int main()
{
book b;
tape t;
b.getb();
b.showb();
t.gett();
t.showt();
return 0;
}

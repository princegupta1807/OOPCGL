#include<iostream>
#include<stdlib.h>
#include<cstring>
using namespace std;
class student
{
 char *name, *clas, *dob, *blood_group, *div, *add;
 int roll_no, phone_no;
 static int counter;
 public:
student();
~student();
inline void getdetails();
inline void showdetails();
static void count();
student(char*,int,char*,int,char*,char*,char*,char*);
};

int student::counter=0;
student::student()

{
   name=new char[1];
   clas=new char[2];
   dob=new char[3];
   blood_group=new char[4];
   div=new char[5];
   add=new char[6];
   roll_no=0;
   phone_no=0;
}



   student::~student()
   
   {
      delete name,clas,dob,blood_group,div,add,roll_no,phone_no;
   }
   student::student(char*name,int roll_no,char*add,int phone_no,char*clas,char*dob,char*blood_group,char*div)


{
   int len=strlen(name);
   this -> name=new char[len+1];
   strcpy(this -> name,name);
   len=strlen(add);
   this -> add=new char[len+1];
   strcpy(this -> add,add);
   len=strlen(clas);
   this -> clas=new char[len+1];
   strcpy(this -> clas,clas);
   len=strlen(dob);
   this -> dob=new char[len+1];
   strcpy(this -> dob,dob);
   len=strlen(blood_group);
   this -> blood_group=new char[len+1];
   strcpy(this -> blood_group,blood_group);
   len=strlen(div);
   this -> div=new char[len+1];
   strcpy(this -> div,div);
   this -> roll_no=roll_no;
   this -> phone_no=phone_no;
}

   void student::getdetails()
   {
   cout<<"enter details of a student";
   cout<<"enter name";
   cin>>name;
   cout<<"enter your class";
   cin>>clas;
   cout<<"enter your dob";
   cin>>dob;
   cout<<"enter blood_group";
   cin>>blood_group;
   cout<<"enter div";
   cin>>div;
   cout<<"enter add";
   cin>>add;
   cout<<"enter roll_no";
   cin>>roll_no;
   cout<<"enter phone_no";
   cin>>phone_no;
   }
   void student::showdetails()
   {
   count();
   cout<<"name is"<<name;
   cout<<"class is"<<clas;
   cout<<"dob is"<<dob;
   cout<<"blood_group is"<<blood_group;
   cout<<"div is"<<div;
   cout<<"add is"<<add;
   cout<<"roll_no is"<<roll_no;
   cout<<"phone_no is"<<phone_no;
   }
   void student::count()
   {
   counter++;
   cout<<"details of student no"<<counter;
   }
   int main()
   {
   int num;
   cout<<"****STUDENT INFORMATION SYSTEM****";
   cout<<"how many students you have";
   cin>>num;
   student s[num];
   for (int i=0; i<num; i++)
   {
      s[i].getdetails();
   }
   system ("clear");
   for (int i=0; i<num; i++)
   {
      s[i].showdetails();
   }
   {
   student s1("abc",22,"poi",12345,"SE","30sept","A","B");
   s1.showdetails();
   }
   return 0;
   }

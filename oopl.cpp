
#include<iostream>

#include<string>
using namespace std;

class publication
{
private:
string title;
float prices;
public:
publication()
 {
title="";
prices=0.0;
}
void get_data()
{
cout<<"\nEnter Title :";
cin.ignore();
getline(cin,title);
cout<<"\nEnter Price of book : ";
cin>>prices;
}
void put_data()
{
cout<<"\n ____________ \n";
cout<<"\n Information : " <<endl;
cout<<"\n Title :"<<title;
cout<<"\n Price of book :"<<prices;
}
};
class book: public publication
{
private:
int pages;
public:
book(){
pages=0;
}
void get_data()
{
publication::get_data();
cout<<endl;
cout<<"Enter Page Count : \n";
cin>>pages;
}
void put_data()
{
publication::put_data();

 
cout<<"\n Pages Are:"<<pages;
}
};
class tape: public publication
{
private:
float playtime;
public:
tape()
{
playtime=0.0;
}
void get_data()
{
publication::get_data();
cout<<"Enter Play Time Of Cassette \n";
cin>>playtime;
}
void put_data()
{
publication::put_data();


cout<<"\n Playtime is : "<<playtime;
}
};
int main()
{
book ob[1];
tape ob1[1];
int ch=0,bookCount=0,tapeCount=0;
cout<<"-----------";

do
{
cout<<"\n 1.Enter Title ";
cout<<"\n 2.Enter playtime: ";
cout<<"\n 3.Display Title ";
cout<<"\n 4.Display playtime";
cout<<"\n 5.Exit:"<<endl;
cout<<"\n Enter Ch : ";
cin>>ch;
switch(ch)
{
case 1:
 {
 cout<<"\n--------------\n";
 cout<<"Enter Title : \n";
 ob[bookCount].get_data();
 bookCount++;
 break;
 }
case 2:
 {
 cout<<"\n--------------\n";
 cout<<"Enter page_count: \n";
 ob1[tapeCount].get_data();
 tapeCount++;
 break;
 }
case 3:
 {
 cout<<"\n Display Title and page_count";
 for(int j=0;j<bookCount;j++)
 {
 ob[j].put_data();
 }
 break;
 }
case 4:
 {
 cout<<"\n Display playtime";
 for(int j=0;j<tapeCount;j++)
 {
 ob1[j].put_data();
 }
 break;
 }
case 5:
 {
 cout<<"***********Program Exited Successfully**********"<<endl;
 exit(0);
 }
 default:
 {
 cout<<"\n Invalid";
 	
 }
 }
 }

 while(ch!=5);
 return 0;
}

 

 

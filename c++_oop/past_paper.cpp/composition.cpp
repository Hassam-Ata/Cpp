#include<iostream>
using namespace std;
class PersonType
{
  public:
 string Gender;
 
};
class DateType
{
  public:
  string date;
};
class Personinfo
{
  string name;
  int id;
  PersonType pt;
  DateType dt;
  public:
  void set()
  {
    cout<<"\nEnter name,id,gender,DOB: ";
    cin>>name>>id>>pt.Gender>>dt.date;
  }
  void Display()
  {
    cout<<"\nName is: "<<name;
    cout<<"\nID is: "<<id;
    cout<<"\nGender is: "<<pt.Gender;
    cout<<"\nDate of Birth is: "<<dt.date;


  }
};



int main()
{
    Personinfo Human;
    Human.set();
    Human.Display();
    return 0;
}
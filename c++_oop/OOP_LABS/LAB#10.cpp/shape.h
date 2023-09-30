#pragma
#include<iostream>
using namespace std;
class shape
{
  protected:
    double height,width;
  public:

  void get_data()
  {
    cout<<"Enter height: ";
    cin>>height;
    cout<<"\nEnter width: ";
    cin>>width;
  }
  virtual void  display_area()
  {
   cout<<height*width;
  }
};
class rectangle:public shape
{
  public:
  void display_area()
  {
    double area=height*width;
    cout<<"\nArea of rectangle is: "<<area<<"sq.units";
  }
};
class triangle:public shape
{
   public:
  void display_area()
  {
    double area=(0.5)*(height*width);
    cout<<"\nArea of triangle is: "<<area<<"sq.units";
  }

};







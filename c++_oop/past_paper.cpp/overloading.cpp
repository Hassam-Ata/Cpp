#include<iostream>
using namespace std;
class complex
{
  int real,imaginary;
  public:
  complex()
  {
    real=0;
    imaginary=0;
  }
  void set()
  {
    cout<<"\nEnter real part: ";
    cin>>real;
    cout<<"\nEnter imaginary part: ";
    cin>>imaginary;
  }
  bool operator==(complex obj)
  {
    if (real==obj.real && imaginary==obj.imaginary)
    {
      return 1;
    }
    else
    {
      return 0;
    }
    

  }

  friend  void operator+(complex a,complex b);

};
void operator+(complex a,complex b)
{
  complex c;
  c.real=a.real+b.real;
  c.imaginary=a.imaginary+b.imaginary;
  cout<<"\n The sum is: "<<c.real<<" + "<<c.imaginary<<"i";

}
int main()
{
    complex obj1;
    complex obj2;
    cout<<"\nEnter first complex number: ";
    obj1.set();
    cout<<"\nEnter second complex number: ";
    obj2.set();
    obj1+obj2;
    if (obj1==obj2)
    {
      cout<<"\nBoth the numbers are same";
    }
    else
    {
      cout<<"\nNumbers are different ";
    }
    
    
    return 0;
}
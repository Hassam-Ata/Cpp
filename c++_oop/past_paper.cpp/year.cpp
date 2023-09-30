#include<iostream>
using namespace std;
int main()
{
  int num;
  cout<<"Enter number between 1-40:";
  cin>>num;
  try
  {
    if (num<1 || num>40)
    {
      throw num;
    }
    else if (num<10)
    {
      
    cout<<"\nYou have worked for "<<num<<" year";
      
    }
    else
    {
    cout<<"\nYou have worked for "<<num<<" years";

      
    }
    
    

    
  }
  catch(int num)
  {
    cout<<num<<" Is out of range";
  }
  
    return 0;
}
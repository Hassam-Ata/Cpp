#include<iostream>
using namespace std;
class Mystring
{
 string s;
 public:
 void setdata()
 { cout<<"enter string: ";
    cin>>s;
 }
 Mystring operator+(Mystring obj)
 {
    Mystring temp;
    temp.s=s+obj.s;
    return temp;
 } 
 void display()
 {
    cout<<"concatenated string is: "<<s;
 }
};
int main()
{
    Mystring s1,s2,s3;
    s1.setdata();
    s2.setdata();
    s3=s1+s2;
    s3.display();
    return 0;
}









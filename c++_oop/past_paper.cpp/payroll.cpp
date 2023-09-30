#include<iostream>
using namespace std;
void computepaycheck(float payrate,int time,float &gross,float & net)
{
  gross=payrate*time;
  float per=gross*0.10;
  net=gross-per;
}
int main()
{
  float grosspay;
  float netpay;
  float payrate;
  int hours;
  cout<<"Enter payrate and hours: ";
  cin>>payrate>>hours;
  computepaycheck(payrate,hours,grosspay,netpay);
  cout<<"The grosspay is: "<<grosspay;
  cout<<"\nThe netpay is: "<<netpay;
    return 0;
}
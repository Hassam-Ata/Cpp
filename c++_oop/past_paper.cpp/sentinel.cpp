#include<iostream>
using namespace std;
int main()
{
    float rainfall=0;
    float amount;
   
    while (true)
    {
      cout<<"Enter rainfall amount: ";
      cin>>amount;
       if (amount==-1)
      {
        cout<<"Total amount is: "<<rainfall;
        break;
      }
      else
      {
        /* code */
         
      rainfall=rainfall+amount;
      }
     

     
      
      
    }
    
    

    return 0;
}
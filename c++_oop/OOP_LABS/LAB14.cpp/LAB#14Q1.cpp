#include<iostream>
#include <fstream>
using namespace std;
class login
{
    string name,password;
    public:
    void setinfo()
    {
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"\nEnter password: ";
        cin>>password;

    }
     void validate()
     {
        if (password.length() < 6 || password.find_first_of("0123456789") == string::npos) 
        {
            throw password;
        }
        else
        {
            cout<<"Login success!"<<endl;
        }
    }


};

int main()
{
   login obj;
   obj.setinfo();
   try
   {  
   obj.validate();
   }
   catch(const char* text)
   {
    cout<< text << '\n';
   }
    return 0;
}






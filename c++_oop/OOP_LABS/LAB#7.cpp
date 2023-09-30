#include<iostream>
using namespace std;
class publication
{
    string title;
    float price;
    public:
    void getdata()
    {
        cout<<"Enter book title: ";
        cin>>title;
        cout<<"Enter book price: ";
        cin>>price;
    }
    void putdata()
    {
        cout <<"Book title is: "<<title<<endl;
        cout<<"Price is: "<<price<<endl;
    }

};
class book:public publication

{
    int page_count;
    public:
    void getdata()
    {
      cout<<"Enter page count: ";
      cin>>page_count;  
    }
    void putdata()
    {
        cout<<"Page count is: "<<page_count;
    }

};
class tape :public publication
{
    float minutes;
    public:
    void getdata()
    {
        cout<<"Enter playing time in minutes: ";
        cin>>minutes;
    }
    void putdata()
    {
        cout<<"Playing time is: "<<minutes<<" minutes";
    }
};
int main()
{
    book obj1;
    tape obj2;
    obj1.getdata();
    obj2.getdata();
    cout<<"\n";
    obj1.putdata();
    cout<<"\n";
    obj2.putdata();
    return 0;
}


#include<iostream>
#include<fstream>
using namespace std;

int main ()
{
    ofstream fout;
    string name, rollno, fees;
    fout.open("C:\\student.doc");
    cout<<"INPUT:"<<endl;
    for(int i=0; i<2 ; i++)
    {
        cout<<"Enter Name: ";
        getline(cin, name);
        cout<<"Enter Roll no: ";
        getline(cin, rollno);
        cout<<"Enter Fees: ";
        getline(cin, fees);
        fout<<"NAME IS: "<<name<<endl;
        fout<<"ROLL NO IS: "<<rollno<<endl;
        fout<<"FEES IS: " <<fees<<endl; 
    }
    fout.close();

    // ifstream read;
    // read.open("C:\\student.docx");
    // string r;
    // cout<<"\nOUTPUT:"<<endl;
    // while (read.eof()==0)
    // {
    //     getline(read,r);
    //     cout<<r<<endl;
    // }
    // read.close();
    return 0;
}

#include<iostream>
using namespace std;
class Room
{
    int num_walls,num_windows,num_doors;
    char type;
    public:
    
    void input()
    {
        cout<<"\nEnter number of walls,windows and doors: ";
        cin>>num_walls>>num_windows>>num_doors;

    }
    char room_type()
    { cout<<"\nEnter room type 'L' or 'B': ";
      cin>>type;
      return type;
    }
};
class Bedroom:public Room
{
    int bed_size,num_wardrobe;
    public:
    void input()
    {
        cout<<"\nEnter number of beds: ";
        cin>>bed_size>>num_wardrobe;
    }
     void set_wardrobe(int wardrobe)
     {
       num_wardrobe=wardrobe;
     }
    int retreive_wardrobe()
    {
        return num_wardrobe;
    }
     
   
};
class LivingRoom:public Room
{
 int num_sofas;
 bool fireplace_present;
 public:
  void input()
    {
        cout<<"\nEnter number of sofas ";
        cin >>num_sofas;
        cout<<"\nFire place is present(1) not present(0)";
        cin>>fireplace_present;
    }
    
        
    
    int retreive_sofa()
    {
        return num_sofas;
    }
    


};
int main()
{
    Room obj1;
    obj1.input();
    char choice=obj1.room_type();
    if (choice=='B')
    {
        cout<<"\n This is bedroom ";
         Bedroom obj2;
         int wadrobe_count;
        obj2.input();
        cout<<"\nEnter the number of wadrobe: ";
        cin>>wadrobe_count;
        obj2.set_wardrobe(wadrobe_count);
        cout<<"\n The number of wardrobe is:"<<obj2.retreive_wardrobe();

    }
    else if(choice=='L')
    {
     cout<<"\nThis is Living room: ";
      LivingRoom obj3;
    obj3.input();
    cout<<"\n The number of sofa is:"<<obj3.retreive_sofa();   
    }
    else
    {
      cout<<"Invalid choice ";
    }
    


   

   



    return 0;
}
#include<iostream>
using namespace std;
class tollbooth
{
 int no_of_cars;
 double amount;
 public:
 tollbooth()
 {
    no_of_cars=0;
    amount=0.0;
 }
 void playingCar()
 { no_of_cars++;
    amount=amount+0.50;
 }
 void display()
 {
    cout<<"Number of cars "<<no_of_cars<<endl;
    cout<<"Amount of money "<<amount<<endl;
 }

};
int main()
{
    tollbooth car;
    car.playingCar();
    car.display();
    return 0;
}








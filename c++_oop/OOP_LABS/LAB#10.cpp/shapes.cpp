#include "shape.h"
int main()
{
  shape *ptr;
  int choice;
  cout<<"For triangle press 1 and for rectangle press 2: ";
  cin>>choice;
  if (choice==1)
  {
    triangle obj1;
    ptr=&obj1;
    ptr->get_data();
    ptr->display_area();
  }
  else if (choice==2)
  {
    rectangle obj2;
    ptr=&obj2;
    ptr->get_data();
    ptr->display_area();
  }
  else
  {
    cout<<"Invalid choice";
  }

   return 0;
}





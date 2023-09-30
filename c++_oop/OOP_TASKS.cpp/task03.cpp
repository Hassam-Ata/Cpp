// #include <iostream>
// using namespace std;

// class ShopItem
// {
//     int id;
//     float price;

// public:
//     void setData(int a, float b)
//     {
//         id = a;
//         price = b;
//     }
//     void getData(void)
//     {
//         cout << "Code of this item is " << id << endl;
//         cout << "Price of this item is " << price << endl;
//     }
// };
// int main()
// {
//     int size = 3;
//     ShopItem *ptr = new ShopItem[size];
//     ShopItem *ptrTemp = ptr;
//     int p, i;
//     float q;
//     for (i = 0; i < size; i++)
//     {
//         cout << "Enter Id and price of item " << i + 1 << endl;
//         cin >> p >> q;
//         // (*ptr).setData(p, q);
//         ptr->setData(p, q);
//         ptr++;
//     }

//     for (i = 0; i < size; i++)
//     {
//         cout << "Item number: " << i + 1 << endl;
//         ptrTemp->getData();
//         ptrTemp++;
//     }

//     return 0;
// }

#include <iostream>

using namespace std;

class ComplexNumbers
{

public:
    int real;
    int imaginary;
    ComplexNumbers(int real1, int imaginary1)
    {
        real = real1;
        imaginary = imaginary1;
    }
    void plus(ComplexNumbers obj)
    {
        int real_number = real + obj.real;
        int imaginary_number = imaginary + obj.imaginary;
        real = real_number;
        imaginary = imaginary_number;
    }

    void print()
    {
        cout << real << " "
             << "+"
             << " " << imaginary << "i" << endl;
    }
};

int main()
{

    int real1, imaginary1, real2, imaginary2;
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    c1.plus(c2);
    c1.print();

    return 0;
}

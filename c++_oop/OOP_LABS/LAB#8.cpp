#include <iostream>
using namespace std;
class Father {
protected:
int age;
public:
Father() {
}
Father(int x) {
age = x;
}
virtual void iam() {
cout << "I AM FATHER, MY AGE IS: " << age << endl;
}
};

class Son : public Father {
public:
Son(int x) {
age = x;
}
void iam() {
cout << "I AM SON, MY AGE IS: " << age << endl;
}
};
class Daughter : public Father {
public:
Daughter(int x) {
age = x;
}
void iam() {
cout << "I AM DAUGHTER, MY AGE IS: " << age << endl;
}
};
int main() {
Father f1(50);
Son s1(20);
Daughter d2(21);
Father* ptr;
ptr = &f1;
ptr ->iam();
ptr = &s1;
ptr ->iam();
ptr = &d2; 
ptr ->iam();
return 0;
}





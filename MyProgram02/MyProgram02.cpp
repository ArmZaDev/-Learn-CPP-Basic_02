#include <iostream>
using namespace std;

void sayHi(string name, int age); 

int main()
{
    string name;
    name = "Tommy";
    int age = 45;

    sayHi(name, age);
    sayHi("Jhon", 30);
     
}

void sayHi(string name, int age) {
    cout << "Hello " << name << " you are " << age;
}


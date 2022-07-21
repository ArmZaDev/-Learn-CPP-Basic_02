#include <iostream>
using namespace std;

int getMax(int num1, int num2, int num3) {
    int result;

    if (num1 >= num2 && num1 >= num3) { 
        result = num1;
    }
    else if(num2 >= num1 && num2 >= num3) 
    { 
        result = num2;
    }
    else {
        result = num3;
    }

    return result;
}

int main()
{
    int findMax;
    int num1, num2, num3;

    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;
    cout << "Enter num2: ";
    cin >> num3;

    findMax = getMax(num1, num2, num3);
    cout << findMax;

    //cout << getMax(5, 10, 15);;
     
}



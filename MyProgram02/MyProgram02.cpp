#include <iostream>
using namespace std;

double cube(double num) {
    double result = num * num * num;
    return result;
    // return num * num * num;
}

int main()
{
    double answer;

    cout << "Enter num: ";
    cin >> answer;  

    answer = cube(answer);
    cout << answer;

    //cout << cube(5.0);
     
}



#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << pow(2, 5) << endl; //หาค่ายกกำลัง = 2^5
    cout << sqrt(36) << endl; //หาค่ารูท
    cout << round(4.1) << endl; //ปัดเศษขึ้น > 5, ปัดเศษลง < 5
    cout << ceil(4.1) << endl; //ปัดเศษขึ้นเสมอ
    cout << floor(4.8) << endl; //ปัดเศษลงเสมอ
    cout << fmax(5, 10) << endl; //หาค่าสูงสุด;
    cout << fmin(5, 10) << endl; //หาค่าต่ำสุด;
     
}


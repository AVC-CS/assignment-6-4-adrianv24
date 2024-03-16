#include <iostream>
using namespace std;

void swapValues(int &, int &);
void swapValues(int &, int &, int &);
void swapValues(int &, int &, int &, int &);

int temp;

void swapValues(int &num1, int &num2) {
temp = num1;
num1=num2;
num2=temp;
}

void swapValues (int &num1, int &num2, int &num3) {
    swapValues(num1,num2);
    swapValues(num2,num3);


}

void SwapValues ( int &num1, int &num2, int &num3, int &num4) {
    swapValues(num1,num4);
    swapValues(num2,num3);
} 
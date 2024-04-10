
#include <iostream>
#include "Stack.h""
#include "Queue.h"
using namespace std;

int main()
{  
    Stack binaryStack;
    Queue binaryQueue;
    bool status = false;
    double input,decimalPart;
    int integerPart;
    const int decimalPlaces = 4;//used to set the number of decimal places of the binary.

    cout << "Decimal to Binary Converter" << endl;

    cout << "Enter a decimal number: ";
    cin >> input;

    //while (input < 0) {
    //    cout << "Please enter a decimal number: ";
    //    cin >> input;
    //}
    if (input < 0) {//checks if inputed decimal number to negative.
        input *= -1;
        status = true;
    }

    integerPart = static_cast<int>(input);
    decimalPart = input - integerPart;

    while (integerPart > 0) {
        binaryStack.push(integerPart % 2);
        integerPart /= 2;
    }

    for (int i = 0; i < decimalPlaces; i++) {
        decimalPart *= 2;
        binaryQueue.enqueue(static_cast<int>(decimalPart));
        decimalPart -= static_cast<int>(decimalPart);
    }

    if (status==true) {//Checks if the intial input was negative.
        cout << "This is your number in binary: -";
    }else{
        cout << "This is your number in binary: ";
    }
    
    //displays the binary number.
    binaryStack.displayStack();
    cout << ".";
    binaryQueue.displayQueue();
    return 0;
}

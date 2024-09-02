#include <cctype>
#include <iostream>
#include "functions.h"

using namespace std;

//function to find the shift value based of a letter
int getShift(char inputLetter) {
    int shiftVal = int(inputLetter)-64; //convert to ascii value and subtract to get positional value of letter
    return shiftVal;
}

//given a letter and a number to shift by, find the new resulting letter
char mapShift(char inputLetter, int shift) {
    int inputPos = getShift(inputLetter);
    int outputPos = (inputPos + shift) % 26;
    char outputLetter = char(outputPos + 64);
    return outputLetter;
}

//testing function
void testFunctions(){
    cout << "==TESTING FUNCTIONS OUTPUT==" << endl;
        int shift = getShift('A');
        cout << "Shift for A: " << shift << endl;

        int shift2 = getShift('B');
        cout << "Shift for B: " << shift2 << endl;

        cout << "Mapping A with shift 1: " << mapShift('A', 1) << endl;
        cout << "Mapping B with shift 2: " << mapShift('B', 2) << endl;
        cout << "Mapping Z with shift 1: " << mapShift('Z', 1) << endl;
        cout << "Mapping Z with shift 2: " << mapShift('Z', 2) << endl;
};

//the above are useful for caesar ciphers, but in the main function we will be using these for vigenere ciphers, which are a type of caesar cipher
#include <cctype>
#include <iostream>
#include "functions.h"

using namespace std;

//function to find the shift value based of a letter
int getShift(char inputLetter) {
    char input = tolower(inputLetter); //convert to lowercase

    int shiftVal = int(input)-'a'; //convert to ascii value and subtract to get positional value of letter
    return shiftVal;
}

//given a letter and a number to shift by, find the new resulting letter
char mapShift(char inputLetter, int shift) {
    char input = tolower(inputLetter);
    char lowerShift = tolower(shift);

    int inputPos = getShift(input);
    int outputPos = (inputPos + lowerShift) % 26;
    char outputLetter = char(outputPos + 97);
    return outputLetter;
}

//do reverse
char reverseShift(char inputLetter, int shift) {
    if (isupper(inputLetter)) {
        int inputPos = inputLetter - 'A'; //ascii of capital A is 65
        int outputPos = (inputPos - shift + 26) % 26; // +26 to handle negative values, which otherwise enter ascii range of capital letters
        return 'A' + outputPos;
    } else {
        int inputPos = inputLetter - 'a'; //67
        int outputPos = (inputPos - shift + 26) % 26;
        return 'a' + outputPos; //regardless of input case we will get output of lower
    }
}

//testing function
void testFunctions(){
    cout << "==TESTING FUNCTIONS OUTPUT==" << endl;
        int shift = getShift('A');
        cout << "ShiftVal for A: " << shift << endl;

        int shift2 = getShift('B');
        cout << "ShiftVal for B: " << shift2 << endl;

        cout << "Mapping A with shift of 1: " << mapShift('A', 1) << endl;
        cout << "Mapping B with shift of 2: " << mapShift('B', 2) << endl;
        cout << "Mapping Z with shift of 1: " << mapShift('Z', 1) << endl;
        cout << "Mapping Z with shift of 2: " << mapShift('Z', 2) << endl;
};

//the above are useful for caesar ciphers, but in the main function we will be using these for vigenere ciphers, which are a type of caesar cipher


//main vigenere function
string vigenereEncrypt(string inputMessage, string key) {
    int keyLength = key.length();
    string outputMessage = "";
    int keyPos = 0;

    for (char c : inputMessage) {
        if (isalpha(c)) {
        int shiftVal = getShift(key[keyPos % keyLength]); //modulo wraps around the key
        char shiftedChar = mapShift(c, shiftVal);

        cout << "KEY: Shift value for char " << key[keyPos % keyLength] << " is " << shiftVal << endl;
        cout << "TEXT: Shifting " << c << " by " << shiftVal << ". End result is: " << shiftedChar << endl;

        outputMessage += shiftedChar;
        keyPos += 1;
        }

        else {
            outputMessage += c; //nonalpha characters are preserved
        }
    }
    
    return outputMessage;
}

string vigenereDecrypt(string inputMessage, string key) {
    int keyLength = key.length();
    string outputMessage = "";
    int keyPos = 0;

    for (char c : inputMessage) {
        if (isalpha(c)) {
            int shiftVal = getShift(key[keyPos % keyLength]); //modulo wraps around the key
            char shiftedChar = reverseShift(c, shiftVal);

            cout << "KEY: Shift value for char " << key[keyPos % keyLength] << " is " << shiftVal << endl;
            cout << "TEXT: Shifting " << c << " by " << shiftVal << ". End result is: " << shiftedChar << endl;

            outputMessage += shiftedChar;
            keyPos += 1;
        }

        else {
            outputMessage += c; //nonalpha characters are preserved
        }
    }
    
    return outputMessage;
}
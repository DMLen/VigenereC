#include <iostream>
#include "functions.h"

using namespace std;

int main()
{

    testFunctions();

    string inputMessage; //message we want to encrypt/decrypt
    string key; //the "key" we will encrypt/decrypt with, based on the vigenere cipher
    int mode;

    cout << "Run Vigenere in encryption mode [1] or decryption mode [2]?: ";
    cin >> mode;

    cout << "Enter the MESSAGE text for encryption/decryption: ";
    cin >> inputMessage;

    cout << "Enter the KEY text: ";
    cin >> key;

    if (mode == 1)
    {
        string output = vigenereEncrypt(inputMessage, key);
        cout << "Encrypted text: " << output << endl;
    }
    else
    {
        string output = vigenereDecrypt(inputMessage, key);
        cout << "Decrypted text: " << output << endl;
    }
}
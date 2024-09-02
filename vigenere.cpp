#include <iostream>
#include "functions.h"

using namespace std;

int main()
{

    testFunctions();
    start:

    string inputMessage; //message we want to encrypt/decrypt
    string key; //the "key" we will encrypt/decrypt with, based on the vigenere cipher
    int mode;

    cout << "Run VigenereC in encryption mode [1] or decryption mode [2]?: ";
    cin >> mode;
    cin.ignore();

    cout << "Enter the MESSAGE text for encryption/decryption: ";
    getline(cin, inputMessage);

    cout << "Enter the KEY text: ";
    getline(cin, key);

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

    char response;
    cout << "Enter [R] to restart or any other key to exit: ";
    cin >> response;
    cin.ignore();

    if (response == 'R' || response == 'r')
    {
        goto start;
    } else {
        return 0;
    }
}
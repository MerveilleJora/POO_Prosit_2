#ifndef PCH_H
#define PCH_H
#include <iostream>
#include <string>
#include <fstream>
#endif
using namespace std;
#pragma once
#include "pch.h"
class Xor
{
public:
string Encrypt(string toEncrypt);
string Decrypt(string toDecrypt);
};
#include "pch.h"
#include "Xor.h"

string Xor::Encrypt(string toEncrypt)
{
    char keyE;

    cout << "Entrez la clee d'encryptage xOR : " << "\n";
    cin >> keyE; "\n";

    string output = toEncrypt;

    for (int i = 0; i < toEncrypt.size(); i++)
        output[i] = toEncrypt[i] ^ keyE;

    return output;
}

string Xor::Decrypt(string toDecrypt)
{
    char keyD;

    cout << "Entrez la clee de decryptage xOR : " << "\n";
    cin >> keyD; "\n";

    string output = toDecrypt;

    for (int i = 0; i < toEncrypt.size(); i++)
        output[i] = toEncrypt[i] ^ keyD;

    return output;
}
/**dans un main()*/
 char msg[50];
    cout << "Entrez votre message : " << "\n";
    cin >> msg;  "\n";

    string encrypted = Encrypt(msg);
    cout << "Message encrypte : " << encrypted << "\n";

    string decrypted = Decrypt(encrypted);
    cout << "Message decrypte : " << decrypted << "\n";

    return 0;

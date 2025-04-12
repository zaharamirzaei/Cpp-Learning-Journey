// section10
// challenge
#include <iostream>
using namespace std;
#include <vector>
#include <cctype>
#include <cstring>
#include <string>

int main(){
    string org_message{};
    string asli{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string ramz{"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    string ramz_message{};
    cout << "Enter your message to encrypt : ";
    getline(cin,org_message);
    //encrypting message
    size_t position{};
    for (char c: org_message){
        position=asli.find(c);
        if (position != string::npos)
            ramz_message += ramz[position];
        else
            ramz_message += c;       
        }
    cout << "encrypted message : " << ramz_message<< endl ;
    //decrypting message
    cout << "decrypting message ..." << endl;
    cout <<  org_message << endl;
    cout << endl;
    return 0;
    }

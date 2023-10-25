#include<iostream>
#include<string>

using namespace std;


int main(){
    
    string alphabet {"[ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {" [XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    //cout << alphabet.length() << endl;
    //cout << key.length() << endl;
    
    string message;
    string encrypted_message;
    string decrypted_message;
    
    cout << "Please enter your secret message: " << endl;
    
    //cin >> message;
    getline(cin,message);
    size_t index{};
    //ENCRYPTION
    //message : My name is Yatish
    for (auto c : message){
            index = alphabet.find(c);
            if (index != string::npos)
                encrypted_message += key.at(index);
            else
                encrypted_message += c;
    }
    
    cout << "\nEncrypting Message.......\n" << endl;    
    cout << encrypted_message << endl;    
    //DECRYPTION
    for (auto c : encrypted_message){
            index = key.find(c);
            if (index != string::npos)
                decrypted_message += alphabet.at(index);
            else
                decrypted_message += c;
    }
    
    cout << "\nDecrypting Message.......\n" << endl;
    cout << decrypted_message << endl; 
}
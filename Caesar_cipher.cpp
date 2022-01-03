#include<bits/stdc++.h>

using namespace std;
void encrypt(int, string);
void decrypt(int, string);

int main(){

// To read i/p and  o/p file

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif


    cout<<"----------------------------Caesar Cipher---------------------------"<<endl;
    cout<<"Select Option Boiiiiii"<<endl;
    cout<<"1. Encryption"<<endl;
    cout<<"2. Decryption"<<endl;
    cout<<"______________________________________________________________________"<<endl;
    int n;
    cin>>n;

    cout<<"______________________________________________________________________"<<endl;
    cout<<"Enter Key Value "<<endl;
    int k;
    cin>>k;
    cout<<"Enter String "<<endl;
    string txt="";
    cin>>txt;
    
    // Decision making
    if (n==1) encrypt(k, txt);
    else if (n==2) decrypt(k, txt);
    else cout<<endl<<"Andha hai kya LOVE day";

} 

void encrypt(int k, string txt){
    string res="";
    for(int i=0; i<txt.length(); i++){
        // For bada Letters
        if (isupper(txt[i])){
        res += char(int(txt[i] + k - 65) % 26 + 65);
        
            }
        else{   
            // For chota letters
            res += char(int(txt[i] + k - 97) %26 + 97);
            }
    }
    // Output dekho
    cout<<"Encrypted Text: "<<res<<endl;
}
        

void decrypt(int k, string txt){
    string res="";
    for(int i=0; i<txt.length(); i++){
            if (isupper(txt[i])){
            // For bada Letters
            res += char(int(txt[i] + 26 - k - 65) % 26 + 65);
            }
        else{
            // For chota Letters
            res += char(int(txt[i] + 26 - k - 97) %26 + 97);
            }
    }
    // Output dekho
    cout<<"Decrypted Text: "<<res<<endl;
}

// C++ program to check whether a character is alphabet, digit or special character.

#include<iostream>
using namespace std;


int main(){
    char ch;
    
    cout<<"Enter a Character:";
    cin>>ch;

    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        cout<<"You Entered a Alphabet";
    }
    else if(ch>='0' && ch<='9'){
        cout<<"You entered a digit";
    }
    else{
        cout<<"You entered a Special character";
    }
return 0;

}
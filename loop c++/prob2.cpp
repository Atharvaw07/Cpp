// Write C++ program to print ASCII value of all Uppercase Alphabet

#include<iostream>
using namespace std;


int main(){

    char ch='A';

    for(ch='A';ch<='Z';ch++){
        cout<<"The ASCII value of "<<ch<<" is "<< int(ch)<<endl;
    }
return 0;

}
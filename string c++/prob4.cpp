// Write C++ program to convert a string to Upper case

#include<iostream>
#include<string.h>
using namespace std;


int main(){

 char string[10];

         cout<<"Enter a string to convert uppercase:";
         cin.getline(string,10);

         cout<<"Character in uppercase:"<< strupr(string);
return 0;

}
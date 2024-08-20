// Write C++ program to convert a string to Lower case


#include<iostream>
#include<string.h>

using namespace std;

       

int main(){
         
         char string[10];

         cout<<"Enter a string to convert lowercase:";
         cin.getline(string,10);

         cout<<"Character in lowercase:"<< strlwr(string);
   // strlwr is use to convert upper case character to lower case
return 0;

}           
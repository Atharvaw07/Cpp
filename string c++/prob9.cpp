// Write C++ program to compare two strings using strcmp

#include<iostream>
#include <string.h>
 
#define MAX_SIZE 100 //Maximum size of the string
using namespace std;


int main(){

        char str1[1000],str2[1000];

        cout<<"Enter first string:";
        cin>>str1;

        cout<<"Enter second string:";
        cin>>str2;

        if (strcmp(str1,str2)!=0 )
        {
           cout<<"Not Equal";
        }
        else{
           cout<< "Equal";
        }
        

return 0;

}           
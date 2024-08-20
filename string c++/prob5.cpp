// Write C++ program to change string to upper case without strupr


#include <iostream>
#include<string.h>


using namespace std;

void func_upper(char[]);

int main()
{

    char string[100];

    cout << "Enter a string to convert to uppercase:";
    cin.getline(string,100) ;

    func_upper(string);
      cout<<"Entered string in upper case is: "<< string;

    return 0;
}

void func_upper(char s[]){
    int c=0;

    while(s[c]=='\0'){
        if (s[c]>='a' && s[c]<='z'){
            s[c]=s[c]-32;
        }
        c++;
    }
}

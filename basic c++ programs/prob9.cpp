// C++ Program to find the Size of data types.

#include<iostream>
using namespace std;


int main(){
        int integer;
        float floatval;
        double doubleval;
        char charval;
        bool bollean;
        short shortvalue;

        cout<<"The size of int datatype is "<<sizeof(integer)<<" bytes"<<endl;
        cout<<"The size of float datatype is "<<sizeof(floatval)<<" bytes"<<endl;
        cout<<"The size of double datatype is "<<sizeof(doubleval)<<" bytes"<<endl;
        cout<<"The size of char datatype is "<<sizeof(charval)<<" bytes"<<endl;
        cout<<"The size of short datatype is "<<sizeof(shortvalue)<<" bytes"<<endl;
        cout<<"The size of bool datatype is "<<sizeof(bollean)<<" bytes"<<endl;



return 0;
}
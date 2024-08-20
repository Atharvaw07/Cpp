// C++ Program to convert days to years, weeks and days.

#include<iostream>
using namespace std;


int main(){
    
    int days,week,year;
    cout<<"Enter no. of days:";
    cin>>days;

    week=days/7;
    year=days/365;

    cout<<"Week:"<<week<<endl;
    cout<<"Years:"<<year<<endl;

    
return 0;

}
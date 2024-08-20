// C++ program to find the eligibility of admission for an engineering course based on the criteria.
/*criteria:
Marks in Maths >=65
Marks in Phy >=55
Marks in Chem>=50
Total in all three subject >=180
or
Total in Math and Subjects >=140

*/


#include<iostream>
using namespace std;


int main(){
    int mathMarks,phyMarks,chemMarks,total;

    cout<<"Enter you Maths marks:";
    cin>>mathMarks;

    cout<<"Enter you Physics marks:";
    cin>>phyMarks;
    
    cout<<"Enter you Chemistry marks:";
    cin>>chemMarks;

    total=mathMarks+phyMarks+chemMarks;
    cout<<"Total is "<<total<<endl;

    if((mathMarks>=65) && (phyMarks>=50)&&(chemMarks>=50) &&(total>=180)){
        cout<<"You are Eligible";
    }
    else if (mathMarks+phyMarks>=140)
    {
        /* code */
        cout<<"You are Eligible";

    }
    else{
        cout<<"You are not Eligible";

    }
    

return 0;

}

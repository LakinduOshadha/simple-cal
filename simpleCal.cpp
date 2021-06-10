// @author Lakindu Oshadha (lakinduoshadha98@gmail.com)
#include<iostream>
using namespace std;

int main(){
    //Initializing of the variables
    float num1,num2,ans;
    char op;

    //Getting user inoput
    cout<<"Enter number 1: "; cin>>num1;
    cout<<"Enter number 2: "; cin>>num2;
    cout<<"Enter the operator: "; cin>>op;

    //Calculating
    if (op == '+'){
        ans = num1 + num2;
    }
    else if (op == '-'){
        ans = num1 - num2;
    }
    else if(op == '*'){
        ans = num1*num2;
    }
    else if(op == '/'){
        ans = num1/num2;
    }
    else {
        cout<<"\nERROR : Entered operator is invalid!.";
        return 0;
    }
    cout<<endl;

    //Printing the answer
    cout<<num1<<"  "<<op<<"  "<<num2<<"  =  "<<ans<<endl;
    return 0;
}

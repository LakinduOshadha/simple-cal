// @author Lakindu Oshadha (lakinduoshadha98@gmail.com)
#include<iostream>
using namespace std;

int main() {
    //initializing variables
    float num1,num2,ans; //num1=number 1,num2=number2, ans= answer
    char op; //op=operator
    bool i = 0;

    //getting user data
    cout<<"Enter number 1: "; cin>>num1;
    cout<<"Enter number 2: "; cin>>num2;
    cout<<"Enter operator: "; cin>>op;

    //calculating
    switch(op) {
        case '+' :ans=num1+num2;break;
        case '-' :ans=num1-num2;break;
        case '/' :ans=num1/num2;break;
        case '*' :ans=num1*num2;break;
        default : cout<<endl<<"Entered operator is invalid.!\n"; return 0;
    }
    cout<<endl<<num1<<" "<<op<<" "<<num2<<" = "<<ans<<endl;
    return 0;
}

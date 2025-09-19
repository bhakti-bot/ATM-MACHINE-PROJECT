#include<iostream>
using namespace std;
int main()
{
    int num1,num2,result;
    cout<<"Enter value of num1 : ";    /* ( << ) this is an insertion operator*/
    cin>>num1;  /* ( >> ) this is an extraction operator*/
    cout<<"\nEnter value of num2 : ";
    cin>>num2;

    result=num1+num2;
    cout<<"\nThe result is : "<<result;

    return 0;
}

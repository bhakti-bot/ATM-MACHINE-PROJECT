#include<iostream>
using namespace std;
int glo=6;
void sum(){
    int a;
    cout<<"GLOBAL VARIABLE VALUE IS "<<glo;
}
int main()
{
    // int a=10,b=11;
    int glo=10;
    glo=11;
    bool boole=true;
    sum();
    cout<<"\nLOCAL VARIABLE VALUE IS "<<glo<<"\ntrue-->1 \nfalse-->0\nGiven vale is true hence it is "<<boole;

    // char c='d';
    // cout<<"this is tutorial 4\n";
    // cout<<"value of a is "<<a<<"\nvalue of b is "<<b;
    // cout<<"\nvalue of c is "<<c;
    return 0;
}
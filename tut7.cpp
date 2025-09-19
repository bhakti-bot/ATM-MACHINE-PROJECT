#include<iostream>
using namespace std;
int c=45;   //global variable
int main(){
    // int a,b,c=6;
    // cout<<"enter value of a :"<<endl;
    // cin>>a;
    // cout<<"enter value of b :"<<endl;
    // cin>>b;
    // cout<<"value of local c :"<<c<<endl;
    // cout<<"value of global c :"<<::c<<endl;  //:: scope resolution operator
    
    // float d=34.4f;
    // long double e=34.4l;   //by default datatype of a decimal literal is double.
    // cout<<"size of 34.4f is : "<<sizeof(34.4f)<<endl;
    // cout<<"size of 34.4l is : "<<sizeof(34.4l)<<endl;
    // cout<<"size of 34.4F is : "<<sizeof(34.4F)<<endl;
    // cout<<"size of 34.4L is : "<<sizeof(34.4L)<<endl;
    // cout<<"size of 34.4 is : "<<sizeof(34.4)<<endl;

    //******* reference variables ******** multiple variables referring to same value.
    // float x=34.4;
    // float &y = x;
    // cout<<x<<endl;
    // cout<<y;

    //******* typecasting ******** converting from one data type to another.
    int a=45;
    float b=45.6;
    cout<<"changing data type int -->float :"<<(float)a<<endl;  /*both are same syntax*/
    cout<<"changing data type int -->float :"<<float(a)<<endl;
    cout<<"changing data type float--->int :"<<(int)b<<endl;
    cout<<"changing data type float--->int :"<<int(b)<<endl;

    int c=int(b);
    cout<<"value of c :"<<c<<endl;





    return 0;
}
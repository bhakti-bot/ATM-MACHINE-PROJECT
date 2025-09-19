#include<iostream>
#include<iomanip> //header file so  we can use setw it helps to set field width
using namespace std;
int main(){

    //constants in c++
    // const int a=3;  //const is a keyword
    // cout<<"value of a : "<<a<<endl;
    //a=45; you cant modify the varable and it will produce an error coz a is a constant
    
    //manipulators
    /*1.endl 
      2.setw
      3.
    
    */
   int a=3,b=34,c=1233;   //sequence structure
   cout<<"the value of a without setw is :"<<a<<endl;
   cout<<"the value of b without setw is :"<<b<<endl;
   cout<<"the value of c without setw is :"<<c<<endl;

   cout<<"the value of a with setw is :"<<setw(4)<<a<<endl;
   cout<<"the value of b with setw is :"<<setw(4)<<b<<endl;
   cout<<"the value of c with setw is :"<<setw(4)<<c<<endl;    //setw will leave 4 character spaces before the output

   //operator precedence


    return 0;

}
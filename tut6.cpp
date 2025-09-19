//ACCESS CPP REFERENCE WEBSITE FOR GETTING INFO ABOUT HEADER FILES




/*there are two types of header files:
1.system header files : it comes with a complier.*/
#include<iostream> //syntax
/*2.User defined header files : it is written by the programmer.*/
/* #include"this.h" ---> this  will produce error if this.h is not 
present in the current directory*/
using namespace std;
int main(){
    int a=10,b=20;

cout<<"following are arithmetic operations :-"<<endl;
cout<<"value of a+b is : "<<a+b<<endl;
cout<<"value of a-b is : "<<a-b<<endl;
cout<<"value of a*b is : "<<a*b<<endl;
cout<<"value of a/b is : "<<a/b<<endl;
cout<<"value of a%b is : "<<a%b<<endl;
cout<<"value of a++ is : "<<a++<<endl;
cout<<"value of a-- is : "<<a--<<endl;
}
//comparison operators
//assignment operators
//logical operators && (and)--> one of them should be true. || (or) both true. ! (not) produce inverse. 


#include<iostream>
using namespace std;
int main(){

    //LOOPS 
    /*
    1.FOR
    2.WHILE
    3.DO-WHILE
    */
//    for(int i=1;i<=10;i++)
//    {
//     cout<<i<<".";

//     cout<<"*"<<endl;
//     for(int i=1;i<=10;i++)   //infinite loop   
//    {
//     cout<<i<<".";

//     cout<<"this is a for loop"<<endl;

//    }
    //   int i=1,j=1;
    //   while(i<=5)
    //   {
    //     cout<<"*";
    //     i++;
    //     while(j<=5)
    //     {
    //         cout<<"*";
    //         j++;
            
    //     }
    //   }
   int i=1,a;
    do
   {
    a=6*i;
    cout<<"6*"<<i<<"=";
    cout<<a<<endl;
    i++;
   } while (i<=10);
    return 0;
}
/*CONTROL STRUCTURES
1.sequence structure
2.selection structure - if else statement , if else ladder , switch case
3.loop structure - for,while,do while
*/

#include<iostream>
using namespace std;
int main(){
    //SELECTION CONTROL STRUCTURE : 1.ELSE IF LADDER 
    int age;
   
    cout<<"tell me your age:";
    cin>>age;
    
    // if((age<18) && (age>0)) //else if ladder
    // {
    //     cout<<"cant attend party.";
    // }
    // else if(age==18){
    //     cout<<"get kid pass.";
    // }
    // else if(age<1){
    //     cout<<"you are not born";
    // }
    // else{
    //     cout<<"can attend.";
    // }
    //2.SELECTION CONTROL STRUCTURE : 2.SWITCH CASE
    switch (age)
    {
    case 18 :
        cout<<"you are 18"<<endl;
        break;
    case 22 :
        cout<<"you are 22"<<endl;
        break;       
    case 30 :
        cout<<"you are 30"<<endl;
        break;
    case 35 :
        cout<<"you are 35"<<endl;
        break;
    case 40 :
        cout<<"you are 40"<<endl;
        break;
    
    default : 
    cout<<"other age"<<endl;
    break;
    }

    

    return 0;
}
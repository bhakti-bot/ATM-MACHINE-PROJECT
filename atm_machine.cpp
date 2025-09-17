//SWITCH CASE PRACTICE
//2.ATM MACHINE

#include<iostream>
using namespace std;
int main()
{
    int action;
    cout<<"WELCOME TO ATM MACHINE :) "<<endl;
    cout<<"THE ACTION YOU CAN DO ARE :"<<endl;
    cout<<"1.WITHDRAWL\n2.REQUEST TO UPDATE CREDIT CARD\n3.LOOK BANK BALANCE\n"<<endl;
    cout<<"WHAT ACTION YOU WANT TO DO?"<<endl;    
    cout<<"PLEASE SELECT YOUR CHOICE : ";    
    cin>>action;

    switch(action)
    {
    case 1 : 
        cout<<"\nWITHDRAWING YOUR MONEY.\n"<<endl;
        break;
    case 2 : 
        cout<<"\nREQUEST SUBMITTED TO UPDATE CREDIT CARD.\n"<<endl;
        break;
    case 3 : 
        cout<<"\nYOUR BANK BALANCE IS... \nYOUR BANK A/C HAS : RS.XXXXX.\n"<<endl;
        break;
    default : 
        cout<<"\nSORRY FOR THE INCOVENIENCE :(\nYOU REQUESTED INVALID ACTION WHICH THE MACHINE DOESN'T SUPPORT.\nPLEASE CHOOSE VALID ACTION.THANKYOU.\n"<<endl;
        break;
    }

    cout<<"THANKYOU FOR VISITING TO OUR ATM :) ";
    
    return 0;

}


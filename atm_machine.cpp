//SWITCH CASE PRACTICE
//2.ATM MACHINE

#include<iostream>
using namespace std;
int main()
{
    int action;
    double amount;
    double balance=100000;
    cout<<"========================="<<endl;
    cout<<" WELCOME TO ATM MACHINE :) "<<endl;
     cout<<"========================="<<endl;
    do{
    cout<<"THE ACTION YOU CAN DO ARE :"<<endl;
    cout<<"1.WITHDRAWAL\n2.DEPOSIT\n3.CHECK BANK BALANCE\n4.EXIT"<<endl;
    cout<<"WHAT ACTION YOU WANT TO DO?"<<endl;    
    cout<<"PLEASE SELECT YOUR CHOICE : ";    
    
    cin>>action;

    switch(action)
    {
    case 1 : 
        cout<<"ENTER AMOUNT TO BE WITHDRAW : ";
        cin>>amount;
        if(amount>balance){
        cout<<"\nINSUFFICIENT BANK BALANCE! TRANSACTION FAILED!!\n"<<endl;
    }
        else{
            balance-=amount;
            cout<<"COLLECT YOUR CASH: RS."<<amount<<endl;
            cout<<"AMOUNT REAMINING: RS."<<balance<<endl;
        }
        break;
    case 2 : 
        cout<<"\nAMOUNT TO BE DEPOSIT : RS.";
        cin>>amount;
        if(amount<0){
        cout<<"INVALID DEPOSIT AMOUNT!";
    }
        else{

            balance+=amount;
            cout<<"YOUR UPDATED BANK BALANCE IS: RS. "<<balance<<endl;
            }
        break;
    case 3 : 
        cout<<"YOUR A/C HAS : RS."<<balance<<endl;
        break;
    case 4 : 
        cout<<"\nTHANK YOU FOR USING OUR ATM. HAVE A NICE DAY :) "<<endl;
        break;
    default:
        cout<<"ENTERED INVALID CHOICE "<<endl;
        break;
    }
    }while(action!=4);

    cout<<"VISIT AGAIN :)"<<endl;
    system("pause");
    

    return 0;

}




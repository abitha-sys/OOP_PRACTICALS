#include<iostream>
using namespace std;
class Account
{ public:
    string name;
    int accno;
    string acctype;
    double bal;
    Account(string n,int no,string t,double b)
    {
        name=n;
        accno=no;
        acctype=t;
        bal=b;
    }
  
    void deposite()
    {
        int amount;
        cout<<"Enter the amount to be deposite: ";
        cin>>amount;
        bal=bal+amount;
        cout<<"Balance after deposite : "<<bal<<endl;
    }
    
    void withdraw()
    {
        int amount;
        cout<<"Enter the amount to withdraw: ";
        cin>>amount;
        if(amount<bal)
        {
            cout<<"After withdrawal bank balance is = "<<bal-amount<<endl;
        }
        else{
            cout<<"Insufficient balance";
            
        }
    }
    
    void display(){
        cout<<"Name :"<<name<<endl;
        cout<<"Acount type :"<<acctype<<endl;
        cout<<"Account No :"<<accno<<endl;
        cout<<"Balance :"<<bal<<endl;
    
        
        
    }
    
};
int main()
{
    Account a("abitha",210,"saving", 20000);
    int ch;
    do{
        cout<<"Select  the choice:\n";
        cout<<"1.deposit:\n";
        cout<<"2.Withdraw:\n";
        cout<<"3.Display :\n";
        cout<<"4.Exit:\n";
        cout<<"Enter the choice:";
        cin>>ch;
        switch(ch)
        {
            case 1:
            a.deposite();
            break;
            case 2:
             a.withdraw();
            break;
            case 3:
            a.display();
            break;
            case 4:
            cout<<"Thank you !";
            break;
            default:
            cout<<"Invalid choice\n";
        }
    }while(ch!=4);
   
    return 0;
    
}

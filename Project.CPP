#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int temp,temp1,i,j,choice;
    int Saving_Account[20];
    int Checking_Account[20];
    //initialization Value
    Saving_Account[0]=10000;
    Checking_Account[0]=10000;
    int Saving_Account_Counter=0;
    int Checking_Account_Counter=0;

    while(1==1)
    {
        cout<<"\nfor Saving Account credit Transaction press 0 \nfor Saving Account Debit Transaction press 1 \nfor checking Account credit Transaction press 2 \nfor Checking Account Debit Transaction press 3 \nfor Printing Both Account Transaction press 4 \nto close the program press 5\n";
        cin>>choice;
        switch(choice)
        {
            case 0:
                //this case is for credit in saving Account
                cout<<"\nenter the credit value\n";
                cin>>temp;
                if((temp/500)>=1 && (temp/500)<20)
                {
                    temp1=Saving_Account[Saving_Account_Counter];
                    temp1=temp1+temp;
                    Saving_Account_Counter++;
                    Saving_Account[Saving_Account_Counter]=temp1;
                }
                else
                {
                    cout<<"enter credit amount is not in a multiple of 500";
                }
                temp=0;
                temp1=0;
                break;

            case 1:
                //this case is for debit in saving Account
                cout<<"\nenter the debit value\n";
                cin>>temp;
                if((temp/500)>=1 && (temp/500)<20)
                {
                    temp1=Saving_Account[Saving_Account_Counter];
                    temp1=temp1-temp;
                    Saving_Account_Counter++;
                    Saving_Account[Saving_Account_Counter]=temp1;
                }
                else
                {
                    cout<<"enter debit amount is not in a multiple of 500";
                }
                temp=0;
                temp1=0;
                break;

            case 2:
                //this case is for credit in checking Account
                cout<<"\nenter the credit value\n";
                cin>>temp;
                if((temp/500)>=1 && (temp/500)<20)
                {
                    temp1=Checking_Account[Checking_Account_Counter];
                    temp1=temp1+temp;
                    Checking_Account_Counter++;
                    Checking_Account[Checking_Account_Counter]=temp1;
                }
                else
                {
                    cout<<"enter credit amount is not in a multiple of 500";
                }
                temp=0;
                temp1=0;
                break;

            case 3:
                //this case is for credit in checking Account
                cout<<"\nenter the debit value\n";
                cin>>temp;
                if((temp/500)>=1 && (temp/500)<20)
                {
                    temp1=Checking_Account[Checking_Account_Counter];
                    temp1=temp1-temp;
                    Checking_Account_Counter++;
                    Checking_Account[Checking_Account_Counter]=temp1;
                }
                else
                {
                    cout<<"enter credit amount is not in a multiple of 500";
                }
                temp=0;
                temp1=0;
                break;

            case 4:
                //print the transaction for both the accounts
                cout<<"\n Savings Account Transaction ";
                for(i=0;i<Saving_Account_Counter;i++)
                {
                    if(Saving_Account[i]>Saving_Account[i+1])
                    {
                        cout<<"\n debit "<<(Saving_Account[i]-Saving_Account[i+1]);
                    }
                    else if(Saving_Account[i]<Saving_Account[i+1])
                    {
                        cout<<"\n credit "<<(Saving_Account[i+1]-Saving_Account[i]);
                    }
                    //cout<<"\n"<<Saving_Account[i];
                }
                cout<<"\n Final Balance "<<Saving_Account[Saving_Account_Counter];
                cout<<"\n\n Checking Account Transaction ";
                for(i=0;i<Checking_Account_Counter;i++)
                {
                    if(Checking_Account[i]>Checking_Account[i+1])
                    {
                        cout<<"\n debit "<<(Checking_Account[i]-Checking_Account[i+1]);
                    }
                    else if(Checking_Account[i]<Checking_Account[i+1])
                    {
                        cout<<"\n credit "<<(Checking_Account[i+1]-Checking_Account[i]);
                    }
                    //cout<<"\n"<<Checking_Account[i];
                }
                cout<<"\n Final Balance "<<Checking_Account[Checking_Account_Counter];
                break;

            case 5:
                exit(0);
                break;
        }
    }

    return 0;
}

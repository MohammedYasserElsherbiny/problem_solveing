#include<iostream>
#include <bits\stdc++.h>
#include<fstream>
#include <vector>
#include<cstdlib>
using std::cout;
using std::cin;
using std::endl;
using std::fstream;
using std::ofstream;
using std::ifstream;
using std::ios;
using namespace std;





class account_query
{

public:
    string account_number;
    string firstName;
    string lastName;
    string credit_card;
    string phone_number;
    int limit;
    int pin;
    float total_Balance;
    //vector<int> bill;
    //add password
    void read_data();
    void show_data(account_query temp);
    void read_rec();
    virtual void deposit()
    {
        int s;
    }
    virtual void withdraw()
    {
        int s;
    }
};
vector <account_query> vec;

class bills : public account_query
{
    
    public:
    int n;
    int b=rand();
    int sumOfBills=0;
    vector <int> BillsInAccount;

    void withdraw ()
    {
        vec[n-1].total_Balance-=sumOfBills;
    }
    void GenerateBills ()
    {
        int count=vec.size();
        if(count==0)
        {
            cout<<"\nError in opening! File Not Found!!\n"<<endl;
            return;
        }
        cout<<"\n There are "<<count<<" record in the file";
        cout<<"\n Enter Record Number to Search: ";
        cin>>n;
        b%=15;
        if(b==0)
        {
            cout<<"\nYou Have No Bills!!\n";
            return ;
        }
        for(int i=0;i<b;i++)
        {
            int tempNum=(rand()%1000)+1;
            BillsInAccount.push_back(tempNum);
            sumOfBills+=tempNum;
        }
        sort(BillsInAccount.begin(),BillsInAccount.end());
    }

    void ShowBills ()
    {
        cout<<"\n-------The Bills You Have-------\n";
        GenerateBills();
        for(int i=1;i<=b;i++)
        {
            cout<<"Bill Number "<<i<<": "<<BillsInAccount[i-1]<<'\n';
        }
    }

    void PayBills ()
    {
        ShowBills();
        cout<<"Do You Want To Pay Your Bills? \n";
        string answer;
        while (true)
        {
            cin>>answer;
            for(int i=0;i<answer.size();i++)
            {
                answer[i]=towlower(answer[i]);
            }
            if(answer=="yes")
            {
                if(sumOfBills<=vec[n-1].total_Balance)
                {
                   withdraw ();
                   cout<<"You Paied All Your Bills!! \n";
                   cout<<"Your Total Balance Is "<<vec[n-1].total_Balance<<'\n'; 
                   break;
                }
                else 
                {
                    int tempsum=0,cnt=0;
                    for(int i=0;i<b;i++)
                    {
                        
                        tempsum+=BillsInAccount[i];
                        if(tempsum<=vec[n-1].total_Balance)
                        {
                            cnt++;
                        }
                        else if(cnt)
                        {
                            tempsum-=BillsInAccount[i];
                            
                            cout<<"You Can Pay "<<cnt<<" Bills.\n";
                            cout<<"DO You Want To Pay Them?\n";
                            cout<<"Yes/No\n";
                            string str;
                            cin>>str;
                            for(int i=0;i<answer.size();i++)
                            {
                                str[i]=towlower(str[i]);
                            }
                            if(str=="no")
                            {
                                return ;
                            }
                            else if(str=="yes")
                            {
                                sumOfBills=tempsum;
                                withdraw();
                                cout<<"You Paied "<<cnt<<" Bills!!\n";
                                return ;
                            }
                            else
                            {
                                cout<<"invaild input try again\n";
                                return ;
                            }
                        }
                        else
                        {
                            cout<<"You Dont Have Enough!!\n";
                            return ;
                        }
                    }
                }
            }
            else if(answer=="no")
            {
                cout<<"Ok Thanks For Your Visit \n";
                break;
            }
            else
            {
                cout<<"Invalid Input Please Enter a Valid Input\nEthier YES or NO \n";
            }
        }
        
    }
};

class see_taxes 
{
    private:
	
    int tempPin;
    string tempAcc;
		
    public:
    void getTaxes()
    {
        
        int n,count=vec.size();
        if(count==0)
        {
            cout<<"\nError in opening! File Not Found!!\n"<<endl;
            return;
        }
        cout<<"\n There are "<<count<<" record in the file";
        cout<<"\n Enter Record Number to Search: ";
        cin>>n;
        cout << "\nenter your pin then your account number : \n";
        cin>>tempPin>>tempAcc;
        if(tempPin==vec[n-1].pin&&tempAcc==vec[n-1].account_number)
        {
            if (vec[n-1].total_Balance != 0)
            {
                if (vec[n-1].total_Balance <= 50000)
                {
                    cout << "\ntaxes for this account is : " << (vec[n-1].total_Balance * 0.10)<<'\n';
                }
                else
                {
                    cout << "\ntaxes for this account is : " << (vec[n-1].total_Balance * 0.15)<<'\n';
                }
            }
            else 
            {
                cout << "\nthere is no taxes for this account :)\n";
            }
        }
        else
        {
            cout<<"incorect pin or account number \n";
            cout<<"Do You Want to Try again? \n";
            string tempanswer;
            while (true)
            {
                cin>>tempanswer;
                for(int i=0;i<tempanswer.size();i++)
                {
                    tempanswer[i]=tolower(tempanswer[i]);
                }
                if(tempanswer=="yes")
                {
                    getTaxes();
                    break;
                }
                else if(tempanswer=="no")
                {
                    cout << "\n------thanks------\n" << endl;
                    break;
                }
                else
                {
                    cout<<"invalid input try again\n";
                }
            }


        }

    }
};


class exchange 
{
    
    protected:
    double ex, egp, res;
    bool can=false;
    int n;
    const double sr = 6.5,$ = 24.73,uae = 6.73,euro = 26.29,kwd = 80.79;



public: 


    void withdraw()
    {
        if(egp>vec[n-1].total_Balance)
        {
            cout<<"You Dont Have This Amount Of Money In Your Account!!\n";
        }
        else
        {
            vec[n-1].total_Balance-=egp;
            can=true;
        }
    }


    void Exchange()
    {
        int count=vec.size();
        if(count==0)
        {
            cout<<"\nError in opening! File Not Found!!\n"<<endl;
            return;
        }
        cout<<"\n There are "<<count<<" record in the file";
        cout<<"\n Enter Record Number to Search: ";
        cin>>n;
        cout << "You are now in the foreign currency exchange list " << endl;
        cout << "--------------------------------------------------" << endl;
        cout << "Enter the amount of money you want to exchange " << endl;
        cin >> egp;
        withdraw();
        if(can)
        {
            cout << "USD--> 1 " << endl;
            cout << "EURO--> 2 " << endl;
            cout << "UAE--> 3 " << endl;
            cout << "SAR--> 4 " << endl;
            cout << "KWD--> 5" << endl;
            cin >> ex;
            if (ex == 1)
            {
                res = egp / $;
                cout << " Your amount of money now in Dollars = " << res << endl;
            }
            else if (ex == 2)
            {
                res = egp / euro;
                cout<<" Your amount of money now in EUROs = " << res << endl;
            }
            else if (ex == 3)
            {
                res = egp / uae;
                cout << "Your amount of money now in UAE dirham = " << res << endl;
            }
            else if (ex == 4)

            {
                res = egp / sr;
                cout << "Your amount of money now in Saudi riyal = " << res << endl;
            }
            else if(ex==5)
            {
                res = egp / kwd;
                cout << "Your amount of money now in Kuwaiti Dinar = " << res << endl;

            }
            else
            {
                cout<<"Invaild Input \n";
            }
        }
    }
};


class expenses 
{

    protected:
        double ep=0.0, Withdrawal, Deposit=0.0, number;
        const int limit_wd = 50000;
        const int limit_dp = 100000;
        int count=vec.size(),n;

    public: 
    void deposit ()
    {
        cin >> Deposit;
        if (Deposit <= limit_dp)
        {
            cout << "successful operation " << endl;
            vec[n-1].total_Balance+=Deposit;
        }
        else
        {
            cout << "ERROR! You entered a number is greater than the specified please try again" << endl;
        }
    }
    void withdraw ()
    {
        cin >> Withdrawal;
            if (Withdrawal <= limit_wd&&vec[n-1].total_Balance>=Withdrawal)
            {
                cout << "successful operation " << endl;
                vec[n-1].total_Balance-=Withdrawal;
            }
            else
            {
                cout << "ERROR! You entered a number is greater than the specified " << endl;
            }
    }
    void Expenses()
    {
        
        if(count==0)
        {
            cout<<"\nError in opening! File Not Found!!\n"<<endl;
            return;
        }
        cout<<"\n There are "<<count<<" record in the file";
        cout<<"\n Enter Record Number to Search: ";
        cin>>n;
        
        cout << "Enter 1 for Withdrawal Or 2 for Deposit " << endl;
        cin >> number;
        if (number == 1)
        {
            cout << "Enter the amount of money you want to withdraw " << endl;
            withdraw();
            
        }
        else if(number==2)
        {
            cout << "Enter the amount of money you want to deposit " << endl;
            deposit();
        }
        else
        {
            cout<<"\n Invaild Input\n";
        }	
    }
};

class Loan 
{
protected:
    int currentDay,currentMonth,currentYear,paymentDay,paymentMonth,paymentYear,n;
    float loan,taxes,monthlypayment;
public:
    





    void read_loan()
    {
        int n,count=vec.size();
        if(count==0)
        {
            cout<<"\nError in opening! File Not Found!!\n"<<endl;
            return;
        }
        cout<<"\n There are "<<count<<" record in the file";
        cout<<"\n Enter Record Number to Search: ";
        cin>>n;
        cout << "The curent day :" << endl;
        cin >> currentDay;
        cout << "The curent month :" << endl;
        cin >> currentMonth;
        cout << "Enter the curent year :" << endl;
        cin >>currentYear ;
        cout << "The payment day :" << endl;
        cin >> paymentDay;
        cout << "The payment month :" << endl;
        cin >> paymentMonth;
        cout << "Enter the payment year :" << endl;
        cin >> paymentYear;
        int l;
        cout << "The cash you want to laon it :" << endl;
        cin >> l;
        loan = l;
        deposit();
        cout << "The taxes will added :" << endl;
        taxes =0.10;
        int numyears = paymentYear - currentYear;
        int nummonths = 12;    
        monthlypayment = (loan+(loan * taxes)) / (numyears * nummonths);
        show_loan();
    }
  
    void show_loan()
    {
        cout << "******The Curent Date :" << currentDay<< " / " << currentMonth << " / " << currentYear << " ******" << endl;
        cout << "******The Payment Date :" << paymentDay << " / " << paymentMonth << "/ " << paymentYear  << " ******" << endl;
        cout << "******The Loan taken by the custmor :" << loan << " ******" << endl;
        cout << "******The Taxes added to the loan " << taxes * 100 << "%" << " ******" << endl;
        cout << "******The Montly Payment : " << monthlypayment << " ******" << endl;
    } 

    void deposit ()
    {
        vec[n-1].total_Balance+=loan;
    }

};

class Transaction 
{
protected :
    int Deposit,Withdraw,n;

public :


    void trans()
    {
        int count=vec.size();
        if(count==0)
        {
            cout<<"\nError in opening! File Not Found!!\n"<<endl;
            return;
        }
        cout<<"\n There are "<<count<<" record in the file";
        cout<<"\n Enter Record Number to Search: ";
        cin>>n;

        int choice;
        cout<<"deposit--> 1\nwithdraw--> 2\n";
        cin>>choice;
        if(choice==1)
        {
            deposit();
        }
        else if(choice==2)
        {
            withdraw();
        }
        else
        {
            cout<<"Invalid Input\n";
        }
    }

    void deposit()
    {
        
        int d;
        cout << " ********Enter the number you want to deposit : ************" << endl;
        cin >> d;
        Deposit = d;
        vec[n-1].total_Balance = vec[n-1].total_Balance + Deposit;
        show_Deposit();
    }
    void show_Deposit()
    {
        cout << " ******The number you have entered : " << Deposit << "******" << endl;
        cout << " ******The Total Balance :" << vec[n-1].total_Balance << "******" << endl;
    }
    void withdraw()
    {
        int w;
        cout << "******The number you want to withdraw :******" << endl;
        cin >> w;
        Withdraw = w;
        if (w <= vec[n-1].total_Balance)
        {
            vec[n-1].total_Balance = vec[n-1].total_Balance - w;
        }
        else
            cout << " you dont have enogh money " << endl;
        show_withdraw();
    }
    void show_withdraw()
    {
        cout << "******The number you withdrawd :" << Withdraw << "******" << endl;
        cout << "******The Total balance : " << vec[n-1].total_Balance << "******" << endl;
    }

};

class bank  : public  Transaction,public Loan ,public bills ,public see_taxes,public exchange,public expenses
{
    public:
    bank()
    {
        cout<<"\n\tWelcom To The Bank :)\n";
    }

    ~bank ()
    {
        cout<<"\n\tGoodbye <:\n";
    }
};

void account_query::read_data()
{
    account_query temp;
    string acc,f,l,cc,pn;
    int limit,pin;
    float t;
    cout<<"\nEnter Account Number: ";
    cin>>acc;
    temp.account_number=acc;
    cout<<"Enter First Name: ";
    cin>>f;
    temp.firstName=f;
    cout<<"Enter Last Name: ";
    cin>>l;
    temp.lastName=l;
    cout<<"Enter Balance: ";
    cin>>t;
    temp.total_Balance=t;
    cout<<"Enter Card Number: ";
    cin>>cc;
    temp.credit_card=cc;
    cout<<"Enter Your Phone Number: ";
    cin>>pn;
    temp.phone_number=pn;
    cout<<"Enter The Limit Number: ";
    cin>>limit;
    temp.limit=limit;
    cout<<"Enter The Pin Code: ";
    cin>>pin;
    temp.pin=pin;
    cout<<endl;
    vec.push_back(temp);
}

void account_query::show_data(account_query account)
{
    cout<<"Account Number: "<<account.account_number<<endl;
    cout<<"First Name: "<<account.firstName<<endl;
    cout<<"Last Name: "<<account.lastName<<endl;
    cout<<"Current Balance: Rs.  "<<account.total_Balance<<endl;
    cout<<"Your Phone Number: "<<account.phone_number<<endl;
    cout<<"Card Number: "<<account.credit_card<<endl;
    //update
    cout<<"-------------------------------"<<endl;
}
void account_query::read_rec()
{
    
    int sz=vec.size();
    if(sz==0)
    {
        cout<<"\nError in Opening! File Not Found!!\n"<<endl;
        return;
    }

    cout<<"\n****Data from file****"<<endl;
    for(int i=0;i<sz;i++)
    {
        show_data(vec[i]);
    }
    
}
int main()
{
    bank A;
    int choice;
    bool f=true;
    cout<<"***Acount Information System***"<<endl;
    while(f)
    {
        cout<<"Select one option below ";
        cout<<"\n\t1-->Add record to file";
        cout<<"\n\t2-->Show record from file";
        cout<<"\n\t3-->See Taxes";
        cout<<"\n\t4-->See Bills";
        cout<<"\n\t5-->Expenses";
        cout<<"\n\t6-->Exchange";
        cout<<"\n\t7-->Loan Services";
        cout<<"\n\t8-->Transaction";
        cout<<"\n\t9-->Quit";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            A.read_data();
            break;
        case 2:
            A.read_rec();
            break;
        case 3:
            A.getTaxes();
            break;
        case 4:
            A.PayBills();
            break;
        case 5:
            A.Expenses();
            break;
        case 6:
            A.Exchange();
            break;
        case 7:
            A.read_loan();
            break;
        case 8:
            A.trans();
            break;
        case 9:
            f=false;
            break;
        default:
            cout<<"\nEnter corret choice";
            f=false;
        }
    }
    return 0;
}
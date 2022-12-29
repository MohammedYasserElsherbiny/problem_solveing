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
};
vector <account_query> vec;

class bills : public account_query
{
    
    public:
    int n;
    int b=rand();
    int sumOfBills=0;
    vector <int> BillsInAccount;
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
                   vec[n-1].total_Balance-=sumOfBills;
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
                        else
                        {
                            tempsum-=BillsInAccount[i];
                            cout<<"You Can Pay "<<cnt<<" Bills.\n";
                            cout<<"DO You Want To Pay Them?\n";
                            cout<<"Yes/No\n";
                            string str;
                            here:
                            cin>>str;
                            for(int i=0;i<answer.size();i++)
                            {
                                str[i]=towlower(str[i]);
                            }
                            if(str=="no")
                            {
                                break;
                            }
                            else if(str=="yes")
                            {
                                vec[n-1].total_Balance-=tempsum;
                                return ;
                            }
                            else
                            {
                                cout<<"invaild input try again\n";
                                goto here;
                            }
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

class see_taxes :public account_query
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
public: 
    void Exchange()
    {
        double ex, egp, res;
        const double sr = 6.5;
        const double $ = 24.73;
        const double uae = 6.73;
        const double euro = 26.29;
        const double kwd = 80.79;
        cout << "You are now in the foreign currency exchange list " << endl;
        cout << "--------------------------------------------------" << endl;
        cout << "Enter the amount of money you want to exchange " << endl;
        cin >> egp;
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
};


class expenses : public account_query
{
    public: 
    void Expenses()
    {
        double ep=0.0, Withdrawal, deposit=0.0, number;
        const int limit_wd = 50000;
        const int limit_dp = 100000;
        int count=vec.size(),n;
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
        else if(number==2)
        {
            cout << "Enter the amount of money you want to deposit " << endl;
            cin >> deposit;
            if (deposit <= limit_dp)
            {
                cout << "successful operation " << endl;
                vec[n-1].total_Balance+=deposit;
            }
            else
            {
                cout << "ERROR! You entered a number is greater than the specified please try again" << endl;
            }
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
    int currentDay,currentMonth,currentYear,paymentDay,paymentMonth,paymentYear;
    float loan,taxes,monthlypayment;
public:
  
    void read_loan()
    {
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


};

class Transaction : public account_query
{
protected :
    int deposit,withdraw,n;

public :


    void trans()
    {
        int choice;
        cout<<"deposit--> 1\nwithdraw--> 2\n";
        cin>>choice;
        if(choice==1)
        {
            read_Deposit();
        }
        else if(choice==2)
        {
            read_withdraw();
        }
        else
        {
            cout<<"Invalid Input\n";
        }
    }

    void read_Deposit()
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

        int d;
        cout << " ********Enter the number you want to deposit : ************" << endl;
        cin >> d;
        deposit = d;
        vec[n-1].total_Balance = vec[n-1].total_Balance + deposit;
        show_Deposit();
    }
    void show_Deposit()
    {
        cout << " ******The number you have entered : " << deposit << "******" << endl;
        cout << " ******The Total Balance :" << vec[n-1].total_Balance << "******" << endl;
    }
    void read_withdraw()
    {
        int w;
        cout << "******The number you want to withdraw :******" << endl;
        cin >> w;
        withdraw = w;
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
        cout << "******The number you withdrawd :" << withdraw << "******" << endl;
        cout << "******The Total balance : " << vec[n-1].total_Balance << "******" << endl;
    }

};

class bank : public expenses, public exchange,public Loan,public Transaction
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
    see_taxes temp;
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
        cout<<"\n\t8-->Quit";
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
            f=false;
            break;
        default:
            cout<<"\nEnter corret choice";
            f=false;
        }
    }
    return 0;
}
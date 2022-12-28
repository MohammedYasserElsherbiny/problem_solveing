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
    void write_rec();
    void read_rec();
    void search_rec();
    void edit_rec();
    void delete_rec();
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
        cout<<"\n Enter Record Number to see taxes: \n";
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
                   total_Balance-=sumOfBills;
                   cout<<"You Paied All Your Bills!! \n";
                   cout<<"Your Total Balance Is "<<vec[n-1].total_Balance<<'\n'; 
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

class see_taxes :public bills
{
    private:
	
    int tempPin;
    string tempAcc;
		
    public:

    see_taxes()
    {

    }
    void get()
    {
        int n;
        cout<<"\n Enter Record Number to see taxes: \n";
        cin>>n;
        cout << "\nenter your pin then your account number : \n";
        cin>>tempPin>>tempAcc;
        if(tempPin==vec[n-1].pin&&tempAcc==vec[n-1].account_number)
        {
            if (vec[n-1].total_Balance != 0)
            {
                if (vec[n-1].total_Balance <= 50000)
                {
                    cout << "\ntaxes for this account is : \n" << (vec[n-1].total_Balance * 0.10);
                }
                else
                {
                    cout << "\ntaxes for this account is : \n" << (vec[n-1].total_Balance * 0.15);
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
                    get();
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
    cout<<"-------------------------------"<<endl;
}
// void account_query::write_rec()
// {
//     read_data();   
// }
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
void account_query::search_rec()
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
    show_data(vec[n-1]);
}
void account_query::edit_rec()
{
    int n,count=vec.size();
    if(count==0)
    {
        cout<<"\nError in opening! File Not Found!!\n"<<endl;
        return;
    }
    cout<<"\n There are "<<count<<" record in the file";
    cout<<"\n Enter Record Number to edit: ";
    cin>>n;
    cout<<"Record "<<n<<" has following data"<<endl;
    show_data(vec[n-1]);
    
    cout<<"\nEnter data to Modify "<<endl;
    read_data();

    vector<bills> tempacc;
    for(int i=0;i<vec.size();i++)
    {
        if(i==n-1)
        continue;

        tempacc.push_back(vec[i]);
    }
    vec=tempacc;
    
    
}
void account_query::delete_rec()
{
    int n,count=vec.size();
    if(count==0)
    {
        cout<<"\nError in opening! File Not Found!!\n"<<endl;
        return;
    }
    cout<<"\n There are "<<count<<" record in the file";
    cout<<"\n Enter Record Number to Delete: ";
    cin>>n;
    vector<bills> tempacc;
    for(int i=0;i<vec.size();i++)
    {
        if(i==n-1)
        continue;

        tempacc.push_back(vec[i]);
    }
    vec=tempacc;

    //the delete is not ordered

    
}
int main()
{
    see_taxes A;
    int choice;
    cout<<"***Acount Information System***"<<endl;
    while(true)
    {
        cout<<"Select one option below ";
        cout<<"\n\t1-->Add record to file";
        cout<<"\n\t2-->Show record from file";
        cout<<"\n\t3-->Search Record from file";
        cout<<"\n\t4-->Update Record";
        cout<<"\n\t5-->Delete Record";
        cout<<"\n\t6-->Quit";
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
            A.search_rec();
            break;
        case 4:
            A.edit_rec();
            //update is not ordred
            break;
        case 5:
            A.delete_rec();
            break;
        case 7:
            A.get();
            break;
        case 8:
            A.PayBills();
        case 6:
            exit(0);
            break;
        default:
            cout<<"\nEnter corret choice";
            exit(0);
        }
    }

    
    system("pause");
    return 0;
}

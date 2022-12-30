// cs201project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// ConsoleApplication33.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


// ConsoleApplication30.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// ConsoleApplication18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// ConsoleApplication16.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <iomanip>
#include <time.h>
#include <fstream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

//==================================================================================================
class Bank //abstract base class
{
public:
	double startBalance = 20000.00;
	string COKAccountHolders;
	double limit;
	virtual void deposit() {
		cout << "deposit";
	}
	virtual void withdraw() {};
	virtual void interest() {};
};


//==================================================================================================
class ATMAccountHolders :public Bank
{
protected:
	string accountName;
	string accountAddress, branch;
	int accountNumber;
	double startBalance;
	double accountBalance;
	double accountInterest;
	double amount;
	int count;

public:
	//void Display_accountBalance();
	void deposit();
	void withdraw();
	void details();
	void payBills();
	void accountExit();
	void interest();
	int oldPass;
	ATMAccountHolders()
	{
		accountNumber = 2003;
		accountName = "name";
		accountAddress = "address name";
		startBalance = 60000.00;
		accountBalance = 20000.00;
		branch = "branch name";
		amount = 20000;
		oldPass = 1234
			;
	}

};
//==================================================================================================   
void ATMAccountHolders::interest()
{
	system("cls");

	cout << "\nATM ACCOUNT INTEREST PAYMENT\n";
	cout << "\tThe Interest is calculate over the last SIX months on the average account balance\n";
	cout << "\n\t\tInterest Rate payable is 10% per annum." << endl;
	cout << "\t\tView the accumulated interest? Press 1 for Yes OR 0 for NO.\n\n";



	cout << "\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM ACCOUNT INTEREST PAYMENT \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";

	cout << "\n\nThe Names of the Account Holders are :" << accountName << "\n\n";
	cout << "\tAccount number :" << accountNumber << "\n\n";
	cout << "\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";

	cout << "\tPresent available balance :$" << accountBalance << "\n\n";
	accountInterest = accountBalance + (accountBalance * 1.050);
	cout << "\tPresent available balance + interest for 6 months :$" << accountInterest << "\n\n";
	cout << "Press any key to Return to the Main Menu\n\n";
	system("PAUSE");
}
//==================================================================================================     


//==================================================================================================
void ATMAccountHolders::deposit()
{
	system("cls");
	cout << "\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM ACCOUNT DEPOSIT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";

	cout << "\n\nThe Names of the Account Holders are :" << accountName << "\n\n";
	cout << "\tAccount number :" << accountNumber << "\n\n";
	cout << "\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
	cout << "\tStarting account balance :$" << startBalance << "\n\n";
	cout << "\tPresent available balance :$" << accountBalance << "\n\n";
	cout << "\tEnter the Amount to be Deposited $";

	double amount;
	cin >> amount;
	startBalance = startBalance + amount;
	accountBalance = accountBalance + amount;
	cout << "\n\tYour new  start balance is $" << startBalance << endl;
	cout << "\n\tYour new available Balanced Amount is $" << accountBalance << endl;
	cout << "\n\t\t\tThank You!\n\n" << endl;
	cout << "Press any key to Return to the Main Menu\n\n";
	system("PAUSE");
}
//==================================================================================================
void ATMAccountHolders::withdraw()//Withdrawal Transactions
{
	system("cls");
	cout << "\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM ACCOUNT WTHDRAWAL \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";

	cout << "\n\nThe Names of the Account Holders are :" << accountName << "\n\n";
	cout << "\tAccount number :" << accountNumber << "\n\n";
	cout << "\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
	cout << "\tStarting account balance :$" << startBalance << "\n\n";
	cout << "\tPresent available balance :$" << accountBalance << "\n\n";
	cout << "\tEnter the Amount to be Withdrawn $";

	double amount;
	cin >> amount;

	if (amount > accountBalance || amount > 9000)//Limit set at $9000 maximum after paying bills
	{
		system("cls");
		cout << "\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM ACCOUNT WITHDRAWAL \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
		cout << "\n\tInsufficient Available Balance in your account.\n\n" << endl;
		cout << "\t\t\tSorry !!\n" << endl;
		system("PAUSE");
	}
	else
	{
		double b = 0.0;
		accountBalance = accountBalance - amount;
		startBalance = startBalance - amount;
		system("cls");
		cout << "\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM ACCOUNT WTHDRAWAL \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
		cout << "Your new start balance amount is $" << accountBalance << endl;
		cout << "Your new available Balanced Amount is $" << accountBalance << endl;
		cout << "Press any key to Return to the Main Menu\n\n";
		system("PAUSE");
	}

}
//==================================================================================================
void ATMAccountHolders::payBills()
{
	system("cls");


	cout << "\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM BILLS PAYMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n";

	cout << "\n\nThe Names of the Account Holders are :" << accountName << "\n\n";
	cout << "\tAccount number :" << accountNumber << "\n\n";
	cout << "\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
	cout << "Pay Electric Company electricity bill of $2000.00 now?\n\n";
	cout << "\t\tPress 1 for Yes OR Press 0 for No\n\n";

	int r;

	cin >> r;
	if (r == 1)
	{
		accountBalance = accountBalance - 2000;
		startBalance = startBalance - 2000;
		system("cls");
		cout << "\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM BILLS PAYMENT SYSTEM \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n";
		cout << "\n\tYour electricity bill of $2000.00 has been paid.\n\n";
		cout << "\tYour account new Available Balanced Amount is $" << accountBalance << endl;
		cout << "\tYour account new start balance amount is $" << accountBalance << endl;
		cout << "\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
		cout << "Press any key to Return to the Main Menu\n\n";
	}
	if (r == 0)
	{
		cout << "\n===========================ATM BILLS PAYMENT SYSTEM==========================\n\n";
		cout << "\n\n\tExiting Bill Payment System. Thank you!.\n\n";
		cout << "====================++THANK YOU++============================\n\n";
	}
	system("PAUSE");
};

//==================================================================================================
void ATMAccountHolders::details()
{
	system("cls");


	cout << "\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM ACCOUNT DETAILS \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
	cout << "\n\nThe Names of the Account Holders are :" << accountName << "\n\n";
	cout << "\tThe Account Holders' address is :" << accountAddress << "\n\n";
	cout << "\tThe Branch location is :" << branch << "\n\n";
	cout << "\tAccount number :" << accountNumber << "\n\n";
	cout << "\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
	cout << "\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
	cout << "Press any key to Return to the Main Menu\n\n";
	system("PAUSE");
}

//==================================================================================================     

void ATMAccountHolders::accountExit()
{
	system("cls");


	cout << "\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\ ATM ACCOUNT EXIT \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	cout << "\n\n\t\t BROUGHT TO YOU BY CODE-PROJECTS \n\n";
	cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	system("PAUSE");
	exit(1);
}


//==================================================================================================     
//class Bills: public ATMAccountHolders

	  //==================================================================================================

class Limits :public Bank
{
public:
	void SetLimit(double NewLimit)
	{}

	double Getlimit()
	{}

};
//==================================================================================================
//==================================================================================================     
//==================================================================================================     
int main()
{
	Bank* bp;
	ATMAccountHolders b;
	bp = &b;
	int e;
	ATMAccountHolders p;
	int cnt = 1;
	system("Color f0");
	cout << "\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\ WELCOME TO ATM \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	cout << "\t\t\t--------------------\n" << endl;
	string date = "2/1/2022";
	cout << "\t\tCurrent date : " << date << endl;
	//Show date and time function



	cout << "\t\t\t--------------------\n" << endl;
	cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
	//==================================================================================================     

	cout << "\tPress 1 and Then Press Enter to Access Your Account Via Pin Number\n\n";
	cout << "\t\t\t\t\t or \n\n";
	cout << "\tPress 0 and press Enter to get Help.\n\n";

	int access;
	cin >> access;
	switch (access)
	{
	case 1://pin to access account
		system("cls"); int i, pin;

		cout << "\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ATM ACCOUNT ACCESS \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";
		cout << "\n\nEnter Your Acc Pin Access Number! [ Three attempts is allowed ]\n\n" << endl;
		cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";

		system("cls");
		for (cnt; cnt <= 3; cnt++) 
		{

			cin >> pin;

			if (pin == p.oldPass)
			{
				system("cls");

				do
				{
					system("cls");

					cout << endl << "\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM Main Menu Screen \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n" << endl << endl;
					cout << "\t\tEnter [1] To  Deposit Cash" << endl;
					cout << "\t\tEnter [2] To Withdraw Cash" << endl;
					cout << "\t\tEnter [3] To user detials" << endl;
					cout << "\t\tEnter [4] To Pay Bills" << endl;
					cout << "\t\tEnter [5] to Pay Account Interest" << endl;
					cout << "\t\tEnter [0] to Exit ATM" << endl << endl;
					cout << "\tPLEASE ENTER A SELECTION AND PRESS RETURN KEY: \n\n";
					cout << "\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";

					cin >> e;
					switch (e)
					{
					case 1:
						bp->deposit();
						break;
					case 2:
						bp->withdraw();
						break;
					case 3:
						p.details();
						break;
					case 4:
						p.payBills();
						break;
					case 5:
						bp->interest();
						break;


					case 0:
						p.accountExit();
						break;
					default:cout << "Please Enter the Correct Number Choice" << endl;
					}
				} while (e != 0);

				break;
			}

			else if(cnt==3)
			{
				system("cls");

				cout << "\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb THANK YOU \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
				cout << "\nYou had made your attempt which failed!!! No More attempts allowed!! Sorry!!\n\n";
				cout << "\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";

				system("PAUSE");
				exit(1);
			}
			else
			{
				cout<<"Invaild Input\n";
			}
			//==================================================================================================    

		}
	case 0://pin to access account
		system("cls");
		cout << "\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb ATM ACCOUNT STATUS \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
		cout << "\tYou must have the correct pin number to access this acount. See your\n\n";
		cout << "\t  bank representative for assistance during bank opening hours\n\n";
		cout << "\t\tThanks for, your choice today!!\n\n";
		cout << "\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n";
		system("PAUSE");
		exit(1);
		break;
		//==================================================================================================        
	}

	system("PAUSE");
	return 0;

};


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

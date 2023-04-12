#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 1e5+5;
const ll mod = 1e9+7;


struct node
{
    int data;
    struct node *next;
};
struct  node* top=NULL;

void push (int val )
{
    struct node* newnode =(struct node*) malloc (sizeof(struct node));
    newnode->data=val;
    newnode->next=top;
    top=newnode;
}

void pop()
{
    if(top==NULL)
    cout<<"stack underflow\n";
    else
    {
        cout<<"the popped element is "<<top->data<<endl;
        top=top->next;
    }
}

void display()
{
    struct node* ptr;
    if(top==NULL)
    cout<<"stack is empty";
    else
    {
        ptr=top;
        cout<<"stack elements are: ";
        while(ptr != NULL)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
    }
    cout<<endl;
}

stack <int> st;

int main ()
{
    
    string input;
    getline(cin,input);
    int sz=input.size(),cnt=0;
    for(int i=0;i<sz;i+=cnt+1)
    {
        cnt=0;
        string str="";
        if(input[i]=='*'||input[i]=='/'||input[i]=='-'||input[i]=='+')
        {
            cnt=1;
            int temp=st.top();
            st.pop();
            int temp2=st.top();
            st.pop();
            if(input[i]=='*')
            {
                st.push(temp2*temp);
            }
            else if(input[i]=='+')
            {
                st.push(temp2+temp);
            }
            else if(input[i]=='-')
            {
                st.push(temp2-temp);
            }
            else
            {
                st.push(temp2/temp);
            }
        }
        else
        {
            int j=i;
            while (input[j] != ' ')
            {
                str+=input[j];


                j++;
            }
            int num=0,sz2=str.size();
            for(int k=0;k<sz2;k++)
            {
                int tempNum=(str[k]-'0');
                tempNum*=(pow(10,sz2-1-k));
                num+=tempNum;
            }

            cnt=sz2;
            st.push(num);
            
        }
    }

    cout<<st.top();
}
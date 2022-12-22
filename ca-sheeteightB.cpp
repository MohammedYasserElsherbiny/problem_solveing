#include <iostream>
#include <set>
using namespace std;

set<long long> s;
long long l,r;
void next(long long n);

int main ()
{
    long long sum=0;
    cin>>l>>r;
    int x=l;
    next(0);
    auto itPrev=s.begin();
    itPrev++;
    auto it=itPrev--;
    while (l<=r)
    {
        if(x==l&&l>*it&&l>*itPrev)
        {
            it++;
            itPrev++;
            continue;
        }
        if(l>*itPrev&& l<=*it)
        {
            sum+=*it;
        }
        else
        {
            itPrev++;
            it++;
            sum+=*it;
        }
        l++;

    }
    cout<<sum;
}
void next(long long n)
{
    s.insert(n);
    if(n<r)
    {
        next(n*10+4);
        next(n*10+7);
    }
}
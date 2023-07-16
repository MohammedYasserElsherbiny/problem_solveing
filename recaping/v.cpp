//#include <bits/stdc++.h>
#include <iostream>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 1e5+5;
const ll mod = 1e9+7;

class vector{
    
private:
    int* m_data;
    int m_size, m_capacity;
    void expand()
    {
        int *new_data = new int[m_capacity * 2];
        memcpy(new_data, m_data, m_size * sizeof(int));
        delete[] m_data;
        m_data = new_data;
        m_capacity *= 2;
    }
    
    void shrink()
    {
        int *new_data = new int[m_capacity / 2];
        memcpy(new_data, m_data, m_size * sizeof(int));
        delete[] m_data;
        m_data = new_data;
        m_capacity /= 2;
    }

public:
    vector()
    {
        m_size = 0;
        m_capacity = 4;
        m_data = new int[4];
    }

    void push_back(int x)
    {
        if(m_size == m_capacity)
            expand();
        m_data[m_size++] = x;
    }
    void pop_back()
    {
        m_size--;
        if(m_size*2 < m_capacity && m_capacity>4)
            shrink();
    }
    int size()
    {
        return m_size;
    }
    bool empty ()
    {
        if(m_size==0)
            return true;
        return false;
    }

    int& operator[](int index)
    {
        return m_data[index];
    }
};

int main(){
    //FIO

    vector vec;

    

    vec.push_back(15);
    vec.push_back(10);
    vec.push_back(23);
    vec.push_back(8);
    vec.push_back(26);
    vec.push_back(56);
    vec.push_back(56);
    cout<<vec.empty()<<' ';
    vec.push_back(7);
    vec.pop_back();


    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    cout<<'\n';
}


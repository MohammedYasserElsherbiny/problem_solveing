#include <bits/stdc++.h>
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cout.tie(nullptr); cin.tie(nullptr);
using namespace std;
const int N = 1e5+5;
const ll mod = 1e9+7;

class Vector{
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
    Vector()
    {
        m_size = 0;
        m_capacity = 4;
        m_data = new int[4];
    }

    void pushBack(int x)
    {
        if(m_size == m_capacity)
            expand();
        m_data[m_size++] = x;
    }
    void popBack()
    {
        m_size--;
        if(m_size*2 < m_capacity && m_capacity>4)
            shrink();
    }
    int size()
    {
        return m_size;
    }

    int& operator[](int index)
    {
        return m_data[index];
    }
};

int main(){
    //FIO

    Vector vec;

    vec.pushBack(15);
    vec.pushBack(10);
    vec.pushBack(23);
    vec.pushBack(8);
    vec.pushBack(26);
    vec.pushBack(56);
    vec.pushBack(56);
    vec.pushBack(7);
    vec.popBack();


    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    cout<<'\n';
}


#include<iostream>
using namespace std;

void odd(int start, int end)
{
    int i;
    for(i=start; i<=end; i++)
    {
        if(i%2!=0)
        {
            cout<<i<<endl;
        }
    }
}

int main()
{
    odd(5,10);
}

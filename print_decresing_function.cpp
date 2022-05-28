#include<iostream>
using namespace std;

void printdecresing(int n)
{
    if(n==0)
    {
         return;
    }
    cout<<n<<'\t';
    printdecresing(n-1);
}

int main()
{
    int n;
    cin>>n;
    printdecresing(n);
}
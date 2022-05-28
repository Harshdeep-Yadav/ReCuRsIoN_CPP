#include<iostream>
using namespace std;
void pdi(int n)
{
    if(n==0) return;
     cout<<n<<'\t';
     pdi(n-1);
     cout<<n<<'\t';
}
int main()
{
    int n;
    cout<<"Enter the number : "<<'\t';
    cin>>n;
    pdi(n);
}
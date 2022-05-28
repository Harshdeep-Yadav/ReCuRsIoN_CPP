#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==1) return 1;
    int fac=fact(n-1);
    int fn=n*fac;
    return fn;
}
int main()
{
    int n;
    cout<<"Enter the Number to which you want the factorial : "<<'\t';
    cin>>n;
    int a= fact(n); 
    cout<<a<<endl;
}
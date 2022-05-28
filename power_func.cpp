#include<iostream>
using namespace std;
int power(int x,int n)
{
    if(n==0) return 1;
    int xn1= power(x,n-1);
    int xn=xn1*x;
    return xn;
}
int main()
{
    int x, n;
    cin>>x;
    cin>>n;
    int xn=power(x,n);
    cout<<xn<<'\t';
}

// -----------------------------------------------------------------------LOGRATHMIC WAY---------------------------------------------------------

// #include <iostream>
// using namespace std;
// int powerLog(int x, int n)
// {
//     if (n == 0)
//         return 1;
//     int xpnb2 = powerLog(x, n / 2);
//     int xpn = xpnb2 * xpnb2;
//     if (n % 2 == 1)
//     {
//         xpn = xpn * x;
//     }

//     return xpn;
// }
// int main()
// {
//     int x, n;
//     cout << "Enter the numbers : " << '\t';
//     cin >> x >> n;
//     int xn = powerLog(x, n);
//     cout << xn << endl;
// }
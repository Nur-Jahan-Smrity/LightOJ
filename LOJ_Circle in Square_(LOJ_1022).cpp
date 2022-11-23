//LOJ_Circle in Square_(LOJ_1022)
#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<math.h>
#define nl "\n"
#define all(qz) qz.begin(),qz.end()
#define rall(qz) qz.rbegin(),qz.rend()
#define debug(x) cout<<#x<<" = "<<x<<nl;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define pi (3.141592653589)
#define pi1 (2 * acos (0.0))
#define setafter fixed << setprecision
using namespace std;
typedef long long ll;
int j=0;
ll Pow(ll c, ll d)
{
    return d == 0 ? 1 : c * pow(c, d - 1);
}
ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return ((a * b) / gcd(a, b));
}
void fillPrefixSum(ll arr[], ll n, ll prefixSum[])
{
    prefixSum[0] = arr[0];
    // Adding present element with previous element
    for (int i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];
}
void solve()
{
    long long n,i,count=0;
    double radius;
    cin>>radius;
   // cout<< 2 * acos (0.0)<<endl;
   // #define setafter fixed << setprecision

    cout<<"Case "<<j<<": "<<setafter(2)<<(double(radius+radius)*double(radius+radius))-(pi1*double(radius)*double(radius))<<endl;
    /*ll a[n+10]={0};
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    */
    /*
    ///sort a string =>
    ///sort(all(s));
    /// cout<<nl;
    ///debug(f);
    #include <iostream>
    #include <iomanip>
    #include <cmath>
    #include <limits>
    using namespace std;

    int main()
    {
    const long double pi = acos(-1.L);
    cout << "default precision (6): " << pi << '\n'
              << "setprecision(10): " << setprecision(10) << pi << '\n'
              << "max precision:"
              << setprecision(numeric_limits<long double>::digits10 + 1)
              << pi << '\n';
    return 0;
    }
    */

    /*
    ///string to integer ...
    int s=0;
    string s1;
    cin>>s1;
    stringstream value(s1);
            value>>s;

    ///last element of string ...
    s1.back()-'0';

    ///delete last element of string ..
     s1.pop_back();
     ///str.erase( str.end()-1 );  // it is also used to erase last character..

     ///string.rbegin() .. it is used to reverse the string ..
    */
    /*ll arr[n+10]={0};
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    ll prefixSum[n];
    fillPrefixSum(arr, n, prefixSum);
    for (int i = 0; i < n; i++)
    	cout << prefixSum[i] << " ";
    */
}
void test()
{
    long long t;
    cin>>t;

    while(t--)
    {
        j++;
        solve();
    }

}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int n = sizeof(arr) / sizeof(arr[0]);
    test();
    //solve();
}
/*
Sample
Input	Output
3
20
30.091
87.0921

Case 1: 343.36
Case 2: 777.26
Case 3: 6511.05
*/

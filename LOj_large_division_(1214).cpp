//LOj_large_division_(1214).cpp
#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<math.h>
#include <sstream>
using namespace std;
typedef long long ll;
int k=0;
ll Pow(ll c, ll d) {return d == 0 ? 1 : c * pow(c, d - 1);}
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return ((a * b) / gcd(a, b));}
void solve()
{
    string s1,s2;
    cin>>s1>>s2;
    int s=0;
    long long count=0,i,j,sum=0,flag=0,x=0,y=0;
    for(i=0; i<s1.size(); i++)
    {
        //cout<<s1[i]<<" => ";
        if(s1[i]<48)
            continue;
       sum=(sum*10)+abs(s1[i]-'0');   // '0' means 48 ascii value of zero is 48..
      // sum%=int(s2);
     // cout<<abs(s1[i]-'0')<<" ";
      // cout<<sum<<" ";
      /*
      // object from the class stringstream
    stringstream geek(s);

    // The object has the value 12345 and stream
    // it to the integer x
    int x = 0;
    geek >> x;
    // Now the variable x holds the value 12345
    cout << "Value of x : " << x;
      */
      stringstream value(s2);
      value>>s;
       sum%=abs(s);
       //cout<<sum<<" ";
      // cout<<endl;
    }
    if(!sum)
      cout<<"Case "<<k<<": divisible"<<endl;
    else
        cout<<"Case "<<k<<": not divisible"<<endl;

}
void test()
{
    long long t;
    cin>>t;

    while(t--)
    {
        k++;
        solve();
    }

}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

     test();
    //solve();
}
/*
Input	Output
6
101 101
0 67
-101 101
7678123668327637674887634 101
11010000000000000000 256
-202202202202000202202202 -101

Case 1: divisible
Case 2: divisible
Case 3: divisible
Case 4: not divisible
Case 5: divisible
Case 6: divisible
*/

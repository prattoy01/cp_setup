//Noob with a small brain :3
#include<bits/stdc++.h>
using namespace std;

//datatypes:
//#define     ll                   long long int
#define     int                   long long int
#define     ull                  unsigned long long int

//I/O:
#define     pb                      push_back
#define     pop                     pop_back
#define     sin                     insert
#define     all(x)            x.begin(), x.end()
#define     sz                   size()
#define     never_give_up         int32_t main()
//#define     never_give_up         int main()

#define     nl                     cout<<"\n";
#define     faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mx 100005

never_give_up
{
    faster
    int n;
    string s;
    cin>>n>>s;
    for (int i = 0; i < s.sz; ++i)
    {
        /* code */
        if (s[i]+n>90)
        {
            /* code */
          
            cout<<(char)(64+(n-(90-s[i])));

        }
        else cout<<(char)(s[i]+n);
    }
}

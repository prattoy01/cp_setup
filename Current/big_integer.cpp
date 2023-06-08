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
#define     vi                      vector<int>
#define     loop(a,b)                   for(int i=a;i<=b;++i)
#define     sin                     insert
#define     all(x)            x.begin(), x.end()
#define     sz                   size()
#define     never_give_up         int32_t main()
//#define     never_give_up         int main()

#define     nl                     cout<<"\n";
#define     faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mx 100005
void compress(){
    map<int,int>mymap;
    int input[]={
        -102,
        1,
        134565589,
        -102,
        66666668,
        134565589,
        66666668,
        -102,
        1,
        -2
    };
    int assign=0,
    compressed[100],c=0,n=sizeof(input)/sizeof(int);
    for(int i=0;i<n;i++){
        int x=input[i];
        if (mymap.find(x)==mymap.end())
        {
            /* code */
            mymap[x]=assign;
            printf("Mapping %d with %d \n",x,assign);
            assign++;
        }
        x=mymap[x];
        compressed[c++]=x;


    }
    printf("compressed array : \n");
    for (int i = 0; i <n; i++)
    {
        /* code */
        printf("%d ",compressed[i]);
        puts("");
    }
    
}
never_give_up
{
    // faster
    compress();
    
}

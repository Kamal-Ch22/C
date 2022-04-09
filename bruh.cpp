#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ff first
#define ss second
#define int long long
#define pb push_back
#define inf 1e20
#define sz(a) ((long long)(a).size())
#define all(x) x.begin(), x.end()
#define OKAY ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
const int mod = 1e9 + 7;
int dig (int a) {return floor(log10(a)) + 1;} // digits
void dbg(int a) {cerr << "a is" << " " << a << endl;}
 
void ez()
{ 
int n,m,x,y;
cin>>n>>m>>x>>y;
int ver = x;
int hor=y;
bool chk=0,first=0,vch=0;
while (ver<=n)
{
   if(!first)
   {
    while(hor>=1)
    {
      cout<<ver<<" "<<hor<<endl;
      hor--;
    }
    hor=y+1;
    while(hor<=m)
    {
        cout<<ver<<" "<<hor<<endl;
        hor++;
    }
    hor--;
        if(!vch)
        {
          if(ver==1)
          {
           ver=x;
           vch=1;
          }
          else ver--;
        }
         if(vch)
         {
          ver++;
         }
         first=1;
    }
   else
   {
    if(!chk)
    {
        while(hor>=1)
       {
          cout<<ver<<" "<<hor<<endl;
          hor--;
       }
        hor++;
        
         if(!vch)
        {
          if(ver==1) 
          {
           ver=x;
           vch=1;
          }
          else 
          {
           ver--;
          }
        }
         if(vch) 
         {
          ver++;
         }
     
    chk=1;
    }
    else
    {
        while(hor<=m)
        {
           cout<<ver<<" "<<hor<<endl;
          hor++;
        }
         hor--;
         if(!vch)
        {
          if(ver==1)
          {
           ver=x;
           vch=1;
          }
          else 
          {
           ver--;
          }
        }
         if(vch)
         {
          ver++;
         }
         chk=0;
    }
      
    }
}
 
}
 
 
 
  
 
int32_t main()
{
    OKAY
#ifndef ONLINE_JUDGE
    //for getting input from input.txt
    freopen("input.txt", "r", stdin);
    //for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    int t=1;  
    //cin>>t;
    while(t--)
    {
        ez();
    }
return 0;
 }

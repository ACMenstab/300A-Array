#include <bits/stdc++.h>
using namespace std;
int main()
{int i,a,b,n,c;
cin>>n;
a=0;
b=0;
c=0;
int t[n],zero[n],pos[n],neg[n];
for(i=0;i<n;i++)
{cin>>t[i];
if(t[i]>0)
{pos[a]=t[i];
a++;}
else if(t[i]<0)
{neg[b]=t[i];
b++;}
else {zero[c]=t[i];
c++;}}
if(a==0)
{pos[a]=neg[b-1];
pos[a+1]=neg[b-2];
a+=2;
b-=2;}
if(b%2==0)
{zero[c]=neg[b-1];
c++;
b--;}
cout<<b<<" ";
for(i=0;i<b;i++)
cout<<neg[i]<<" ";
cout<<"\n"<<a<<" ";
for(i=0;i<a;i++)
cout<<pos[i]<<" ";
cout<<"\n"<<c<<" ";
for(i=0;i<c;i++)
cout<<zero[i]<<" ";
return 0;
}

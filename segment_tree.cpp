#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 int arr[100001],tree[500005];
int min(int a, int b)
{
    if(a>b)
        return b;
    else
        return a;
}
void build(int node,int a,int b)
{
    if(a<b)
        return;
    else if(a==b)
    {
        tree[node]=arr[a];
    }
    else
    {
       int mid= (a+b)/2;
        build(2*node,a,mid);
        build(2*node +1,mid+1,b);
        tree[node]= min(tree[2*node],tree[2*node +1]);
    }
}
void update(int node,int a,int b,int ind,int val)
{
    if(a>b || ind<a || ind >b)
        return;
    else if(a==b)
    {
        tree[node]=val;
        arr[ind]=val;
    }
    else
    {
        int mid=(a+b)/2;
        if(ind<=mid and a<=ind)
        update(2*node,a,mid,ind,val);
        else
        update(2*node +1,mid+1,b,ind,val);
        
         tree[node]= min(tree[2*node],tree[2*node +1]);
    }
}

int query(int node,int a,int b, int l,int r )
{
    if(r<a || l>b)
    {
        return 126481446;
    }
    else if(l<=a and r>=b)
    {
        return tree[node];
    }
    int mid=(a+b)/2;
   int p1= query(2*node,a,mid,l,r);
    int p2=query(2*node+1,mid+1,b,l,r);
   return min(p1,p2);
}



int main()
{
   int n,i,q,l,r,x,y;
  
   char c;
   cin>>n>>q;
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   build(1,0,n-1);
   for(i=0;i<q;i++)
   {
   
       cin>>c>>l>>r;
       if(c=='u')
       {
           
           update(1,0,n-1,l-1,r);
       }
       else
       {
           
           cout<<query(1,0,n-1,l-1,r-1)<<endl;
       }
       
       
   }
   return 0;
   
  }



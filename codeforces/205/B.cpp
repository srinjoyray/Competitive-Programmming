#include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
#include<ctype.h>
#define lli long long int 
#define mod 1000003
#define pi 3.141592653589793238
using namespace std;
 
int main()
{ int n;
  cin>>n;
  lli arr[n],count=0;
  for(int i=0;i<n;i++)
      cin>>arr[i];
  for(int i=0;i<n-1;i++)
     if(arr[i]>arr[i+1])
        count+=arr[i]-arr[i+1];
  cout<<count;        
  return 0;  
 
}
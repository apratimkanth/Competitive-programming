#include<bits/stdc++.h>
using namespace std;
int main()
{
  int ar[]={1,2,-5,,4,3,-2,0,8,4,9};
  int n=sizeof(ar)/sizeof(ar[0]);
  int currsum=0;
  int maxsum=INT_MIN;
  for(int i=0;i<n;i++)
  {
    currsum=currsum+ar[i];
    maxsum=max(currsum,maxsum);
    if(currsum<0)
      currsum=0;
  }
  cout<<maxsum;
  return 0;
}
  

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s="abcacaedfcfeab";
    int n=s.length();
    map<char,int>m;
    map<char,int>::iterator it;
    int start=0;
    int end=0;
    int index;
    int maxlen=INT_MIN;
    while(end<n)
    {
        it = m.find(s[end]);
        if(it != m.end())
        {
            index=m[s[end]];
            maxlen=max(maxlen,end-start);
            start=index+1;
        }
        else
        m[s[end]]=end;
        end++;
    }
    maxlen=max(maxlen,end-start);
    cout<<maxlen;
    

    return 0;
}

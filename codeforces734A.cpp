#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int  n , i , cnt1=0 , cnt2=0 ;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='A')
        {
            cnt1++;
        }
        else{
            cnt2++;
        }

    }
    if(cnt1>cnt2)
    {
        cout<<"Anton"<<endl;
    }
    else if(cnt1==cnt2)
    {
        cout<<"Friendship"<<endl;
    }
    else{
        cout<<"Danik"<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n , i  ;
    float res , sum ,last, p;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>p;
        res = p/100;
        sum += res;

    }
    last   = sum/n;
    last  = last*100;

    cout<<last<<endl;
    return 0;
}

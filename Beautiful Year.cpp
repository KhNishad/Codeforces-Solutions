#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n ,  fd , sd , td , ftd;
    cin>>n;
    while(true)
    {
        n = n+1;
        fd = n/1000;
        sd = n/100%10;
        td = n/10%10;
        ftd = n%10;
 
        if(fd!=sd&&fd!=td&&fd!=ftd&&sd!=td&&sd!=ftd && td!=ftd)
        {
            cout<<n<<endl;
         return 0;
 
        }
    }
}

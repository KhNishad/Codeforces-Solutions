
#include<bits/stdc++.h>
using namespace std;
int main ()
{

    int  q ,n,i,a,sum,price;
    cin>>q;
    for(i=1;i<=q;i++)
    {
        cin>>n;
        sum=0;
        price=0;
      for(int j=1;j<=n;j++)
      {
          cin>>a;
            sum +=a;
      }
      price = sum/n;
      if(sum%n !=0)
      {
          price++;
      }
      cout<<price<<endl;
    }

    return 0;
}

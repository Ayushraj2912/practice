#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int sum=0;

    for(int i=0;i<=n;i+=2)
    {
        sum+=i;
    
    }
     cout<<"even number:"<<sum<<endl;
     
     int sum2=0;
    for(int i=1;i<=n;i+=2)
    {
        sum2+=i;
    }
    cout<<"odd number:"<<sum2;
}


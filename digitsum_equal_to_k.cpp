#include <iostream>
using namespace std;

int main()
{
    int n,k,sum=0;
    cin>>n>>k; 
    for (int i=1;i<=n;i++)
    {
        for(int rem=i;rem>0;rem=rem/10)
        {
            sum=sum+(rem%10);
        }
        if (sum==k)
        {
            cout<<i<<endl;
        }
        sum=0;
    }
    
    return 0;
    
}

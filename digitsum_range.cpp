#include <iostream>
using namespace std;

int main()
{
    int l,r,sum=0;
    cin>>l>>r;
    for (int i=l;i<=r;i++)
    {
        for(int rem=i;rem>0;rem=rem/10)
        {
            sum=sum+(rem%10);
        }
        cout<<sum<<endl;
        sum=0;
    }
    
    return 0;
    
}
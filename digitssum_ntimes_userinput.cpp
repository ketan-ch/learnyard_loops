#include <iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        int num;
        cin>>num;
        for(int rem=num;rem>0;rem=rem/10)
        {
            sum=sum+(rem%10);
        }
        cout<<sum<<endl;
        sum=0;
    }
    
    return 0;
    
}
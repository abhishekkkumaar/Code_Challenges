#include<iostream>
using namespace std;
int main()
{
    int s,n,sum=0;
    cin>>s>>n;
    int a[n];
    a[0]=sum=s;
    for(int i=1;i<n;i++){
        a[i]=sum-1;
        sum=sum+a[i];
    }
    cout<<sum<<" ";
    return 0;
}
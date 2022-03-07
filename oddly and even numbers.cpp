#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main()
{
    int n,i=0,a=0,b=0;
    char num[10];
    cin>>num;
    n=strlen(num);
    while(n>0)
    {
        if(i==0)
        {
        a+=num[n-1]-48;
        n--;
        i=1;
        }
    else
    {
        b+=num[n-1]-48;
        n--;
        i=0;
    }
    }
    cout<<abs(a-b);
    return 0;
}
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
    int len,val;
    long long decimal=0;
    char hex[17];
    cin>>hex;  // 23GF = length = 4 2 * 17 ^ 3 +  3 * 17 ^ 2 + 16 * 17^ 1 + 15 * 17^ 0     
    len=strlen(hex); // 4 
    len--;  // 
    for(int i=0;hex[i]!='\0';i++)
    {
        if(hex[i]>='0' && hex[i]<='9')
        {
            val=hex[i]-48;
        }
        else if(hex[i]>='a' && hex[i]<='g')
        {
            val=hex[i]-97+10;
        }
        else if(hex[i]>='A' && hex[i]<='G')
        {
            val=hex[i]-65+10;
        }
        decimal=decimal+val*pow(17,len);
        len--;
    }
    cout<<decimal;
    return 0;
}

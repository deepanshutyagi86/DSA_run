#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

   int ans =0, i=0;

    while(n!=0){
        int bit = n&1;
        ans = bit*pow(10,i)+ans;
        n=n>>1;
        i++;
    }

    cout<<ans<<endl;

    int j=0 ;
    int ans_comp =0;
    while (ans!=0){
        int digit = ans%10;
        if (digit==0){
            ans_comp = 1*pow(2,j)+ans_comp;
            
        }
        ans = ans/10;
        j++;
    
    }
    cout<<ans_comp<<endl;

    return 0;
}
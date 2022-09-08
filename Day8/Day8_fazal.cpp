#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elements of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int ans = INT_MIN;
  
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (ans < sum)
            ans = sum;
  
        if (sum < 0)
            sum = 0;
    }
    cout<<"sum = "<<ans<<endl;
    return 0;
}
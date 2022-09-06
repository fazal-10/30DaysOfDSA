#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array" << endl;
    cin >> n;
    int a[n];
    cout << "Enter elements of array" << endl;
    for(int i=0;i<n;i++)
    cin>>a[i];
    int freq[n]={0},count;
    int v=-1;
    for (int i = 0; i < n; i++)
    {
        count=1;
        for (int j = i+1; j < n; j++)
        {
            if(a[i]==a[j])
            {
                count++;
                freq[j]=v;
            }
        }
        if(freq[i]!=v)
        freq[i]=count;
        
    }
    for (int i = 0; i < n; i++)
    {
        if(freq[i]!=v && freq[i]==1)
        cout<<"element which apeears once :"<<a[i]<<endl;
    }
    return 0;
}
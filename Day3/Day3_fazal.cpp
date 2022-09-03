#include<iostream>
using namespace std;

int main()
{
    string ans="false";
    int a[][3]={
                    {1,2,3},
                    {4,5,6},
                    {7,8,9}
                };
    int key;
    cout<<"Enter key"<<endl;
    cin>>key;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i][j]==key)
            {
                ans="true";
                break;
            }
        }
    }
    // cout<<ans<<endl;
    return 0;
}
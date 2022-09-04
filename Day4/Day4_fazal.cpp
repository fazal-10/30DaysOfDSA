#include <iostream>
using namespace std;

string isPerfectSquare(long n)
{
    for (int i = 1; i * i <= n; i++)
    {
        if ((n % i == 0) && (n / i == i))
        {
            return "true";
        }
    }
    return "false";
}
int main()
{
    long num;
    cout << "Enter Number" << endl;
    cin >> num;
    if(num==0)
    cout<<"true"<<endl;
    else
    cout << isPerfectSquare(num) << endl;
    return 0;
}
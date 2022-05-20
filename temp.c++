#include <iostream>
using namespace std;
bool isPower(int n)
{
    return (n & (!(n & (n - 1))));
}
int main()
{
    int n;
    cin >> n;
    cout << isPower(n);
    return 0;
}
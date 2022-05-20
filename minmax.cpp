#include <iostream>
using namespace std;
struct Pair
{
    int max;
    int min;
};
Pair getMinMax(int arr[], int low, int high)
{
    struct Pair minmax;
    if (low == high)
    {
        minmax.max = arr[0];
        minmax.min = arr[0];
    }
    else if (low == (high - 1))
    {
        if (arr[low] > arr[high])
        {
            minmax.max = arr[low];
            minmax.min = arr[high];
        }
        else
        {
            minmax.max = arr[high];
            minmax.min = arr[low];
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    return 0;
}
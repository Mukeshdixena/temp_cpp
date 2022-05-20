#include <iostream>
using namespace std;

void marze(int arr[], int l, int mid, int r)
{
    int c1 = mid - l + 1;
    int c2 = (r - mid);
    int a[c1];
    int b[c2];
    for (int i = 0; i < c1; i++)
    {
        a[i] = arr[i+l];
    }
    for (int i = 0; i < c2; i++)
    {
        b[i] = arr[mid + 1+i];
    }
    int i = 0, j = 0, k = l;
    while (i < c1 && j < c2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            j++;
            k++;
        }
    }
    while (i < c1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < c2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
}
void marzesort(int arr[], int l, int r)
{
    if (r > l)
    {
        int mid = (r + l) / 2;
        marzesort(arr, l, mid);
        marzesort(arr, mid + 1, r);
        marze(arr, l, mid, r);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[n];
    }
    marzesort(arr, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
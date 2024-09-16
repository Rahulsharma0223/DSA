#include <bits/stdc++.h>
using namespace std;

// select minimum from the array and swap
void Selection_sort(int n, int arr[])
{
    for (int i = 0; i <= n - 2; i++)
    {
        // it can be i<n-1 also
        int mini = i;
        for (int j = i; j < n - 1; j++)
        {
            if (arr[j] < arr[mini])
                mini = j;
        }
        swap(arr[mini], arr[i]);
    }

    cout << "After using selection sort:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void Bubble_sort(int n, int arr[])
{
    for (int i = n - 1; i >= 0; i--)
    {
        int didswap = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                swap(arr[j + 1], arr[j]);
                didswap += 1;
            }
        }
        // for optimal case
        if (didswap == 0)
        {
            break;
        }
    }

    cout << "After using Bubble sort:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void Insertion_sort(int n, int arr[])
{
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j - 1] > arr[j])
            {
                swap(arr[j - 1], arr[j]);
            }
        }
    }

    cout << "After using Insertion sort:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
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

    Insertion_sort(n, arr); // sorting you want to apply
}
#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n);
void insertion_sort(int arr[], int n);
void selection_sort(int arr[], int n);

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    int arr[n];
    for (int x = 0; x < n; x++)
        cin >> arr[x];
    insertion_sort(arr, n);
    for (int j = 0; j < n; j++)
        cout << arr[j] << " ";
    return 0;
}

void selection_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int min = i;
        for (int a = i; a <= n - 1; a++)
        {
            if (arr[a] < arr[min])
                min = a;
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int did = 0;
        for (int j = 0; j <= n - 2 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                did = 1;
            }
        }
        if (did == 0)
            break;
        cout << "After pass " << i + 1 << ": " << endl;
    }
}

void insertion_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j] < arr[j - 1])
        {
            if (arr[j] < arr[j - 1])
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
                j--;
            }
        }
    }
}

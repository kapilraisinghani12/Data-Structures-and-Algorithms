#include <iostream>
using namespace std;
void mergeArray(int arr[], int s, int e)
{
    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    int k = s;
    for (int i = 0; i < len1; i++)
    {
        arr1[i] = arr[k];
        k++;
    }

    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        arr2[i] = arr[k];
        k++;
    }

    int index1 = 0;
    int index2 = 0;
    k = s;

    while (index1 < len1 && index2 < len2)
    {
        if (arr1[index1] < arr2[index2])
        {
            arr[k] = arr1[index1];
            k++;
            index1++;
        }
        else
        {
            arr[k] = arr2[index2];
            k++;
            index2++;
        }
    }
    while (index1 < len1)
    {
        arr[k] = arr1[index1];
        k++;
        index1++;
    }
    while (index1 > len1)
    {
        arr[k] = arr2[index2];
        k++;
        index2++;
    }
}

void mergeSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;

    mergeSort(arr, s, mid);

    mergeSort(arr, mid + 1, e);

    mergeArray(arr, s, e);
}
int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
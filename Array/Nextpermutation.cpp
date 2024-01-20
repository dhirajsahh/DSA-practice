#include <iostream>
using namespace std;
void reversePart(int arr[], int start, int end)
{
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr1[] = {1, 2, 3};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int pivotidx = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr1[i] < arr1[i + 1])
        {
            pivotidx = i;

            break;
        }
    }
    if (pivotidx==-1)
    {
        reversePart(arr1, 0, n - 1);
        exit;
    }
    reversePart(arr1, pivotidx + 1, n - 1);
    int j = -1;
    for (int i = pivotidx + 1; i < n; i++)
    {
        if (arr1[i] >arr1[pivotidx])
        {
            j = i;
            break;
        }
    }

    int temp = arr1[pivotidx];
    arr1[pivotidx] = arr1[j];
    arr1[j] = temp;

    display(arr1, n);
}
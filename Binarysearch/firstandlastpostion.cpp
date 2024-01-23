
#include <iostream>
using namespace std;
int leftmostoccurence(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid +1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int rightmostoccurence(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {    start = mid + 1;
            
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arr1[] = {5, 7, 7, 8, 8, 10};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int arr[2];
    arr[0] = leftmostoccurence(arr1, n, 8);
    arr[1] = rightmostoccurence(arr1, n, 8);
    for (int i = 0; i < 2; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
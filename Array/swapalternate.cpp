#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0, 1, 2, 3, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; i = i + 2)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
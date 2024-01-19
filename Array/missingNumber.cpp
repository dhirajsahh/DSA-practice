#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 5};
    int n = 5;
    int sum = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    int totalsum = (n * (n + 1)) / 2;

    cout << "Remaining number is " << (totalsum - sum) << endl;
}
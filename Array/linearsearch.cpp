#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 5, 4, 3, 6, 7};
    int key = 5;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << "found index is " << i << endl;
            exit(1);
        }
    }
    cout << "Not found";
}
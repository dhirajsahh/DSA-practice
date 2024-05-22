#include <iostream>
using namespace std;

int main()
{
    int a[10] = {2, 10, 20, 30, 3, 4};
    int li = 0;
    int ui = 5;
    int data, pos;
    cout << "Enter the data to be entered and postion";
    cin >> data >> pos;
    int k = ui;
    while (k >= pos)
    {
        a[k + 1] = a[k];
        k--;
    }
    a[pos] = data;
    ui = ui + 1;
    for (int i = 0; i <= ui; i++)
    {
        cout << a[i] << " ";
    }
}
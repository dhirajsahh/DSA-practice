#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int display(vector<int> &v1)
{
    int n = v1.size();
    for (int i = 0; i < n; i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
}
int removeduplicate(vector<int> &v1)
{
    int k = 0;
    int j = 0;
    sort(v1.begin(), v1.end());
    int n = v1.size();
    for (int i = 1; i < n; i++)
    {
        if (v1[i] != v1[j])
        {
            j = i;
            k++;
            v1[k] = v1[i];
        }
    }
    k = k + 1;
    while (k < n)
    {
        v1[k] = 0; // for putting zero in the remaining index
        k++;
    }
}
int main()
{
    vector<int> v1;
    v1.push_back(2);
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(2);
    v1.push_back(6);
    v1.push_back(6);
    v1.push_back(7);
    display(v1);
    removeduplicate(v1);
    display(v1);
    vector<int> v2;
    v2.push_back(0);
    v2.push_back(0);
    v2.push_back(1);
    v2.push_back(1);
    v2.push_back(1);
    v2.push_back(2);
    v2.push_back(2);
    v2.push_back(3);
    display(v2);
    removeduplicate(v2);
    display(v2);
}
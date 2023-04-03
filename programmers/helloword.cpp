#include <iostream>

using namespace std;

void insert(int idx, int num, int arr[], int &len)
{
    for (int i = len; i > idx; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[idx] = num;
    len++;
}

void erase(int idx, int arr[], int &len)
{
    len--;
    for (int i = idx; i < len; i++)
    {
        arr[idx] = arr[idx + 1];
    }
}

void printArr(int arr[], int &len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << "\n";
}

int main()
{
    int arr[10] = {10, 50, 40, 30, 70, 20};
    int len = 6;
    printArr(arr, len);
    insert(3, 60, arr, len);
    printArr(arr, len);
    cout << "hello world!\n";
    erase(5, arr, len);
    printArr(arr, len);
    return 0;
}

#include <iostream>
using namespace std;

void insertionSort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }
}

int main()
{
    int a[] = {50, 20, 40, 10, 30};
    int n = 5;

    insertionSort(a, n);

    cout << "Insertion Sort: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
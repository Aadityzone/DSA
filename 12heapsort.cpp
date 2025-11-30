#include <iostream>
using namespace std;

int heapify(int a[], int n, int i)
{

    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int largest = i;
    if (left <= n && a[left] > a[largest])
    {
        largest = left;
    }
    if (right <= n && a[right] > a[largest])
    {
        largest = right;
    }
    if (largest != n)
    {
        swap(a[i], a[largest]);
        heapify(a, n, largest);
    }
}

int heapsort(int a[], int n)

{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(a, n, i);
    }
    for (int i = n - 1; i > -1; i--)
    {
        swap(a[0], a[i]);
        n--;
        heapify(a, i, 0);
    }
}

int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    heapsort(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
// int heapify(int a[], int n, int i)
// {

//     int left = 2 * i + 1;
//     int right = 2 * i + 2;
//     int largest = i;
//     if (left <= n && a[left] > a[largest])
//     {
//         largest = left;
//     }
//     if (right <= n && a[right] > a[largest])
//     {
//         largest = right;
//     }
//     if (largest != n)
//     {
//         swap(a[i], a[largest]);
//         heapify(a, n, largest);
//     }
// }

// int heapsort(int a[], int n)

// {
//     for (int i = n / 2 - 1; i >= 0; i--)
//     {
//         heapify(a, n, i);
//     }
//     for (int i = n - 1; i > -1; i--)
//     {
//         swap(a[0], a[i]);
//         n--;
//         heapify(a, i, 0);
//     }
// }

// int main()
// {
//     int n;
//     cout << "enter n : ";
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//         cin >> a[i];
//     heapsort(a, n);
//     for (int i = 0; i < n; i++)
//         cout << a[i] << " ";
//     return 0;
// }

class MaxHeap {
    vector<int> heap;

    // Heapify Up (for insertion)
    void heapifyUp(int index) {
        while (index > 0) {
            int parent = (index - 1) / 2;
            if (arr[parent] < arr[index]) {
                swap(arr[parent], arr[index]);
                index = parent;
            } else {
                break;
            }
        }
    }

    // Heapify Down (for deletion)
    void heapifyDown(int index) {
        int size = arr.size();
        while (true) {
            int left = 2 * index + 1;
            int right = 2 * index + 2;
            int largest = index;

            if (left < size && arr[left] >arr[largest])
                largest = left;
            if (right < size && arr[right] > arr[largest])
                largest = right;

            if (largest != index) {
                swap(arr[index], arr[largest]);
                index = largest;
            } else {
                break;
            }
        }
    }

public:
    // Insert element
    void insert(int value) {
        for(int i=0;i<n;i++){
            cin>> ar   r[i];
        }
        heapifyUp(heap.size() - 1);
    }

    // Delete maximum element
    void deleteMax() {
        if (heap.empty()) {
            cout << "Heap is empty\n";
            return;
        }

        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);
    }

    // Get maximum element
    int getMax() {
        if (heap.empty()) return -1;
        return heap[0];
    }

    // Display heap
    void display() {
        for (int x : heap)
            cout << x << " ";
        cout << endl;
    }
};

int main() {
    MaxHeap h;

    h.insert(50);
    h.insert(30);
    h.insert(40);
    h.insert(10);
    h.insert(20);

    cout << "Heap elements: ";
    h.display();

    cout << "Maximum element: " << h.getMax() << endl;

    h.deleteMax();
    cout << "After deleting max: ";
    h.display();

    return 0;
}

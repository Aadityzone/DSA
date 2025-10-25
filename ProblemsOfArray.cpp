

#include <bits/stdc++.h>
using namespace std;

// largest number in array
int largest(vector<int> &arr, int n)
{
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

// Second largest number in array

int secondLargest(int arr[], int n)
{
    int largest = arr[0];
    int secondlargest = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondlargest && arr[i] != largest)
        {
            secondlargest = arr[i];
        }
    }
    return secondlargest;
}

// check if array is sorted or not

int issorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }
}
// rmove duplicates from sorted array

int rduplicate(int arr[], int n)
{
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
}

// left rotate array by one place

void leftrotate(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}

// lefft rotate array by D place

// Bruteal way it have TC->O(n) SC->O(d)
//  void LeftRotateByD(int arr[],int n,int d){
//         d=d%n;
//         int temp[d];
//         for(int i=0;i<d;i++) {
//             temp[i]=arr[i];
//         }
//         for(int i=d;i<n;i++){
//             arr[i-d]=arr[i];
//         }
//         for(int i=n-d;i<n;i++){
//             arr[i]=temp[i-(n-d)];
//         }

//     }

// optimize way it have TC->O(2n) SC->(1) it have more time complsxcity than the brute way but it reduce the SC because we dont need to take temp arr

//  void LeftRotateByD(int arr[],int n,int d){
//              reverse(arr,arr+d);
//              reverse(arr+d,arr+n);
//              reverse(arr+n,arr);

//         }

// move all zero at last of array

// bruteal way Tc->O(2n) SC->O(n)

void MoveAllZeroAtLast(vector<int> a, int n, int d)
{
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            temp.push_back(a[i]);
        }
    }
    int nz = temp.size();
    for (int i = 0; i < nz; i++)
        a[i] = temp[i];
    for (int i = nz; i < n; i++)
    {
        a[i] = 0;
    }
}

// optimize way it have TC->O()

void nz(vector<int> a, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            a[i] = -1;
        }
    }
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            swap(a[i], a[j]);
            j++;
        }
    }
}

// brutal way for union array TC->o=O(n1logn)+O(n1+n2)+(n2logn) SC->O(n1+n2) +O(n1+n2)

vector<int> sortedArray(vector<int> a, vector<int> b)
{
    int n1 = a.size();
    int n2 = b.size();

    set<int> st;
    for (int i = 0; i < n1; i++)
    {
        st.insert(a[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        st.insert(b[i]);
    }
    vector<int> temp;
    for (auto it : st)
    {
        temp.push_back(it);
    }
    return temp;
}

// optimal way for union array

vector<int> sorted(vector<int> &a, vector<int> &b)
{

    int n1 = a.size();
    int n2 = b.size();
    int i = 0, j = 0;
    vector<int> uv;
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            if (uv.empty() || uv.back() != a[i])
                uv.push_back(a[i]);
            i++;
        }
        else
        {
            if (uv.empty() || uv.back() != b[j])
                uv.push_back(b[j]);
            j++;
        }
    }
    while (i < n1)
    {
        if (uv.empty() || uv.back() != a[i])
            uv.push_back(a[i]);
        i++;
    }
    while (j < n2)
    {
        if (uv.empty() || uv.back() != b[j])
            uv.push_back(b[j]);
        j++;
    }
    return uv;
}

// insertaion of sorted array  brutal

vector<int> sort(vector<int> &a, vector<int> &b)
{
    int n1 = a.size();
    int n2 = b.size();
    int i = 0, j = 0;
    set<int> ti;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (a[i] == b[j])
            {
                ti.insert(a[i]);
            }
        }
    }
    cout << "Set elements: ";
    for (auto it : ti)
    {
        cout << it << " ";
    }
    cout << endl;
    vector<int> temp;
    for (auto it : ti)
    {
        temp.push_back(it);
    }
    return temp;
}



//  int main(){
//     int n;
//     cout<<"enter size of array :";
//     cin>>n;
//     int arr[n];
//      for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"array: ";
//      for(int i=0;i<n;i++){
//         cout<<arr[i] << " ";
//     }
//        int second = secondLargest(arr,n);
//        cout << "Second largest: " << second << endl;

//  }


int main() {
    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {3, 4, 5, 6};
    vector<int> result = sort(a, b);
}

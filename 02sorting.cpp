#include<iostream>
using namespace std;

void  section_sort(int arr[],int n){ 

    for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=i;j<=n-1;j++){
           if( arr[j]<arr[min]){
                min =j;
            }
        }
     int temp=arr[min];
     arr[min]=arr[i];
     arr[i]=temp;
    }
}
void bubble_sort(int arr[],int n){
    for (int i=0;i<n-1;i++)
    {
        for(int j=0; j<n-1-i;j++) 
        {
            if(arr[j]>arr[j+1]) 
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void Insertion_sort(int arr[],int n){

    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }

    }
}
void MergeSort(int arr[], int n, int low, int high) {

    if (low < high) {

        int mid = (low + high) / 2;
        MergeSort(arr, n, low, mid);
        MergeSort(arr, n, mid + 1, high);

        int i = low;
        int j = mid + 1;
        int k = low;

        int b[n];

        while (i <= mid && j <= high) {

            if (arr[i] < arr[j]) {
                b[k++] = arr[i++];
            }
            else {
                b[k++] = arr[j++];
            }
        }

        while (i <= mid) {
            b[k++] = arr[i++];
        }

        while (j <= high) {
            b[k++] = arr[j++];
        }

        for (int p = low; p <= high; p++) {
            arr[p] = b[p];
        }
    }
}
int partition(int arr[], int low, int high) {
        int pivort = arr[low];
        int i = low;
        int j = high;   
        while(i<j){
            while (arr[i]<=pivort && i<=high){
                i++;
            }
            while(arr[j]>pivort&&j>=low){
                j--;
            }
            if(i<j){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }   
        }
        int temp = arr[j];
        arr[j] = arr[low];
        arr[low] = temp;
        return j;
    
}
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivort = partition(arr, low, high);
        quickSort(arr, low, pivort - 1);
        quickSort(arr, pivort + 1, high);
        
    }
} 



int main()
{
    int n;
    cout<< "enter n : ";
    cin>> n;
    int arr[n];
    for(int i=0; i<n;i++)
    cin>>arr[i];
    section_sort(arr,n);
//  bubble_sort(arr,n);
//  Insertion_sort(arr,n ,);
//  MergeSort(arr, n, 0, n - 1);
//  quickSort(arr, 0, n - 1);   
    for(int i=0; i<n;i++)
    cout<<arr[i]<<" ";
   return 0;

}


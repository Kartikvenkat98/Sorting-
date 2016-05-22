#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}
 
void selectionSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n-1; i++)
    {
        temp = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[temp])
            temp = j;
 
        swap(&arr[temp], &arr[i]);
    }
}
 
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int i;
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selectionSort(arr, n);
    for(i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
} 

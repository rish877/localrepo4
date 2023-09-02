#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int size)
{
    int s = 0;
    int e = size - 1;

    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}
void rotateArr(int a[], int n, int d)
{
    // d=d%n;
    // int temp[d];
    // for(int i=0;i<d;i++){
    // 	temp[i]=a[i];
    // }

    // for(int i=d;i<n;i++){

    // 	a[i-d]=a[i];
    // }
    // for(int i=n-d;i<n;i++){

    // 	a[i]=temp[i-(n-d)];
    // }

    reverse(a, a + d);
    reverse(a + d, a + n);
    reverse(a, a + n);
    //  optimal solution
}

int main()
{

    int n;
    cin >> n;
    int d;
    cin >> d;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    rotateArr(a, n, d);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
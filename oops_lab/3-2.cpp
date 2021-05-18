#include <stdc++.h>
using namespace std;
  
int main()
{
    int arr[] = { 11, 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << sizeof(arr)<<endl;
    cout << sizeof(arr[0])<<endl;

    cout << size <<endl;
    
    sort(arr, size + arr, greater<int>());

    cout << "\nSecond Largest: " << arr[1] << endl;
    return 0;
}

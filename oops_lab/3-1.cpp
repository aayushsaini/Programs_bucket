#include <iostream>
using namespace std;

int main() {
    int arr[] = {4,3,1,45,32,222,32,99};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    for(int i = 1; i < size; ++i)
    {
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    
    cout << "Largest element = " << arr[0] << endl;
    return 0;
}
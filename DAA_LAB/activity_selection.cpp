
#include <iostream>
using namespace std;
//Activity selection, job sequencing w/ dead lines, fractional knapsack

int main() {
    int sTime[] = {1, 3, 0, 5, 8, 5};
    int fTime[] = {2, 4, 6, 7, 9, 9};
    int size = sizeof(sTime)/sizeof(sTime[0]);

    cout << "Following activities are selected:" << endl;

    int i = 0;
    cout << i; //fiest activity

    int j;

    for (j = 1; i<size; j++) {
        if (sTime[j] >= fTime[i]) {
            cout << " " << j;
            i = j;
        }
    }
    return 0;
}
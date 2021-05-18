#include <iostream>
#include <vector>

using namespace std;

void swap(int *a, int *b) {
    int temp = *b;
    *b = *a;
    *a = temp;
}

void heap(vector<int> &htree, int i) {
    int size = htree.size();
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    if (left < size && htree[left] > largest)
        largest = left;
    else if (right < size && htree[right] > largest) 
        largest = right;
    
    if (largest != i) {
        swap(&htree[i], &htree[largest]);
        heap(htree, largest);
    }
}

void insert(vector<int> &htree, int n) {
    int size = htree.size();
    if (size == 0) {
        htree.push_back(n);
    }
    else {
        htree.push_back(n);
        for (int i = (size/2)-1; i>=0; i--) {
            heap(htree, i);
        }
    }
}
  
void sort(vector<int> &htree) {
    int n = htree.size();
    for (int i = n / 2; i >= 1; i--)
        heap(htree, i);
        for (int i = n - 1; i >= 0; i--) {
            swap(&htree[0], &htree[i]);
            heap(htree, 0);
        }
}

void print(vector<int> &htree) {
    cout << "\n";
    for (int i = 0; i < htree.size(); i++) {
        cout << htree[i] << "\t"; 
    }
}

int main() {
    vector<int> htree;
    insert(htree, 104);
    insert(htree, 71);
    insert(htree, 24);
    insert(htree, 66);
    insert(htree, 27);
    insert(htree, 23);
    insert(htree, 8);
    insert(htree, 5);
    insert(htree, 32);
    insert(htree, 25);
    insert(htree, 18);
    insert(htree, 22);

    cout << "Heap Tree";
    print(htree);
    sort(htree);
    print(htree);
}
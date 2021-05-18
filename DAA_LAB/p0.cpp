#include <iostream>
using namespace std;

#define size 10

struct custom{
    int left;
    int right;
};

int top = -1;
struct custom arr[size];

void push_item() {
    if(top >= size-1) {
        cout << "\nOverFlow\n";
    } 
    else {
        cout << "\nEnter the item[left]: ";
        cin >> arr[top+1].left;
        cout << "\nEnter the item[right]: ";
        cin >> arr[top+1].right;
        top++;
    }
}

void pop() {
    if (top < 0) {
        cout << "\nUnderflow\n";
    }
    else {
        cout << "\nPopped: " << arr[top];
        top--;
    }
}

void display() {
    if (top < 0) {
        cout << "\nNo stack\n";
    }
    else {
        for(int i=top; i>=0; --i) {
            cout << arr[i] << endl;
        }
    } 
}

int main() {
    int ch=1;
    while(ch!=0){
        cout << "\nSelect:\n1. Push\n2. Pop\n3. Display\n-> ";
        cin >> ch;
        if (ch == 1) {
            push_item();
        } else if ( ch == 2 ) {
            pop();
        } else if ( ch == 3 ) {
            display();
        }
        else {
            cout << "\nRetry! Invalid option";
        }
    }
    return 0;
}
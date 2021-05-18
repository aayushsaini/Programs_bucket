#include <iostream>
using namespace std;

#define MAX 100

class tree {
    public:
        tree(int val){
            int data = val;
            int children[MAX];
            int parent = NULL;
        }

        int add_child(int child) {
            child->parent = this;
        }
};

#include <iostream>
using namespace std;

void get_union(int a[], int b[], int m, int n)
{
	int i = 0, j = 0;
	while (i < m && j < n) {
		if (a[i] < b[j])
			cout << a[i++] << " ";

		else if (b[j] < a[i])
			cout << b[j++] << " ";

		else {
			cout << b[j++] << " ";
			i++;
		}
	}

	while (i < m) {
		cout << a[i++] << " ";
    }

	while (j < n) {
		cout << b[j++] << " ";
    }
}

void get_intersection(int a[], int b[], int s1, int s2)
{
    int i = 0, j = 0;
    while (i < s1 && j < s2) {
        if (a[i] > b[j]) {
            j++;
        }
        else if (b[j] > a[i]) {
            i++;
        }
        else {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
}
 

int main()
{
	int a[] = { 1, 2, 4, 5, 6 };
	int b[] = { 2, 3, 6, 7 };

	int size_a = sizeof(a) / sizeof(a[0]);
	int size_b = sizeof(b) / sizeof(b[0]);
    cout << "Intersection: ";
	get_intersection(a, b, size_a, size_b);
    cout << endl << "Union: ";
	get_union(a, b, size_a, size_b);

	return 0;
}


#include <iostream>
#include <string>
using namespace std;

struct student{
	int roll;
	string name;
	float avgMarks;
};

int main() {
	struct student students[3];
	for(int i=0; i<3; i++) {
		cin >> students[i].roll;
		cin >> students[i].name;
		cin >> students[i].avgMarks;
	}
	cout << endl;
	for(int i=0; i<3; ++i) {
		cout << students[i].roll << students[i].name << students[i].avgMarks << endl;
	}
	return 0;
}

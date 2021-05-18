#include <iostream>
using namespace std;

double average(int num, ...) {  
    va_list args;
    int sum = 0;
    
    va_start(args, num);
    for (int i = 0; i < num; i++)
        sum += va_arg(args, int);
    va_end(args);
    
    return sum;
}

int main()
{
    cout << average (3, 1, 2, 3) <<endl;
    cout << average (5, 1, 2, 3, 4, 5) <<endl;
    
    return 0;
}
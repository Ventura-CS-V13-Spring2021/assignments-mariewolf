#include    <iostream>
using namespace std;

int main()
{
    const int SIZE=10;
    int     numbers[10] = {5, 10, 75, 80, 25, 55, 95, 70, 60, 15};
    int     diff[10];
    int     sum=0;

    cout << "Original array: ";
    for (int i=0; i<SIZE; i++) {
      sum += numbers[i];
      cout << numbers[i] << " ";
    }
    
    cout << endl << "New array: ";
    for (int i=0; i<SIZE; i++) {
      diff[i] = sum-numbers[i];
      cout << diff[i] << " ";
    }

    return 0;
}

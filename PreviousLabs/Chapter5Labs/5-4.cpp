#include <iostream>
#include <cstdlib>
using namespace std;

const int 	NUM_ROWS = 6; 
const int 	NUM_COLS = 5; 
const int   SIZE = 10;

void findMaxSum(int [], int[][NUM_COLS]);

int main() {
  int   result[SIZE] = {0}; 
  int   numbers[NUM_ROWS][NUM_COLS] = {{2, 7, 9, 6, 4},{6, 1, 8, 10, 4},{4, 3, 7, 2, 9},{9, 9, 0, 3, 1},{8, 8, 7, 8, 9},{1, 2, 1, 2, 3}};

  findMaxSum(result, numbers);
  
  cout << "The result is: {";
  for (int i=0; i<4; i++)
    cout << result[i] << ",";
  cout << result[5] << "}\n";

  return 0;
}

void findMaxSum(int result, int numbers[][NUM_COLS]) {
  int prevSum = 0;
  int newSum = 0;
  for(int i=0; i<NUM_ROWS; i++) {
    for (int i=0; i<NUM_COLS; i++) {
      newSum = +
    }
    newSum += numbers[i];
  }
}
#include <iostream>
#include <algorithm>
#include "IntegerArray.hpp"
using namespace std;

int IntegerArray::getLength(void) const
{
  return length;
}
int IntegerArray::getLastelm(void) const
{
    // return the value of the last element;
    return numbers[length-1];
}
void IntegerArray::printAll(void) const
{
    // Print all elements
  for (int i=0; i<length; i++)
    cout << numbers[i] << " ";
}
void IntegerArray::fillUp(void)
{
    // Make up the array with the random integer values(0 to 100)
    // The array numbers has the maximum capacity with N.
    // Set N to the length.
    srand(time(0));
    for(int i=0;i<N; i++)
      numbers[i] = rand() % 101;
    length = N;
}
void IntegerArray::sortAsc()
{
    // Sort the array values with ascending order
  sort(numbers, numbers+length);
}
void IntegerArray::removeLastelm(void)
{
    // Decrease 1 from the length
    length -= 1;
}
void IntegerArray::appendElement(int v)
{
    // Append the value v to the array
    // length += 1;
    numbers[length] = v;
    length += 1;
}
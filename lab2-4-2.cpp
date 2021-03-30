#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
int main()
{
  //LAB 2-4-2
  int rdnum, counter, total, newMaximum = 0;
  int newMinimum = 100;
  ifstream rdfile;
  rdfile.open("rdnum.txt"); //read rdnum text file
  while (rdfile >> rdnum) {
    counter += 1;
    total += rdnum;
    if (rdnum > newMaximum) //max check
      newMaximum = rdnum;
    if (rdnum < newMinimum) //min check
      newMinimum = rdnum;
  }
  cout << "The amount of numbers is: " << counter << endl;
  cout << "The sum of all numbers is: " << total << endl;
  cout << "The minimum is: " << newMinimum << endl;
  cout << "The maximum is: " << newMaximum << endl;
  cout << "The average is: " << (total/double(counter)) << endl;

  rdfile.close();
  return 0;
}
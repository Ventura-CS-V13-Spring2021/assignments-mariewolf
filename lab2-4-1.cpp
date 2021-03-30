#include <iostream>
#include <cstdlib>
#include <fstream>
#include <ctime>
using namespace std;
int main()
{
  //LAB 2-4-1
  int N, rdNumber;
  unsigned seed = time(0); //random number seed
  srand(seed);
  ofstream ofs("rdnum.txt"); //create text file

  cout << "Enter an integer: ";
  cin >> N;
  cout << "Generated numbers: ";

  for (int i = 1; i <= N; i++){
    rdNumber = rand() % 100;
    ofs << rdNumber << endl; //generate random # and write it
    cout << rdNumber << " ";
  }

  ofs.close();
}
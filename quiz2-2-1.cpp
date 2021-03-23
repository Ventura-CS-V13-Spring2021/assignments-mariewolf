int main()
{
  int rdNumber;
  unsigned seed = time(0);
  srand(seed);

  for (int i = 1; i <= 5; i++){
    rdNumber = rand() % 100;
    cout << rdNumber; //generate random # and print it
  }
return 0;
}
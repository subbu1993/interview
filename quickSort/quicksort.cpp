/*
Practice program that implements quick sort
*/

#include<iostream>
#include<cstdlib>

using namespace std;
void quickSort(int& numbers[10]);
int main()
{
  int numbers[10];
  for (int i=0; i < 10 ; i++)
  {
    numbers[i] = rand() % 100;
  }

  cout << "==================" << endl;
  cout << "Printing out the contents of the array" << endl;

  for(int i=0; i < 10; i++ )
  {
    cout << numbers[i] << endl;
  }
}

void quickSort(int& numbers[10], int left, int right)
{

}

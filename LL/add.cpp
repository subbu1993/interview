/*
  Program to add numbers in a lL where the numbers are stored each digit in a node and in reverse order
  //assumption a -1000 seperates the numbers
*/

#include<iostream>
#include<vector>
using namespace std;
void add(vector<int>& towNumbers);
int main()
{
  vector<int> twoNumbers;
  twoNumbers.push_back(3);
  twoNumbers.push_back(1);
  twoNumbers.push_back(4);
  twoNumbers.push_back(-1000);
  twoNumbers.push_back(4);
  twoNumbers.push_back(2);
  twoNumbers.push_back(1);

  add(twoNumbers);
}
void add(vector<int>& twoNumbers)
{
  int left = 0;
  int right = twoNumbers.size() -1 ;
  for(size_t i = 0; i < twoNumbers.size() ;  ++i  )
  {
    if(twoNumbers[i] == -1000)
    {
      cout << " + " ;
      continue;
    }
    cout << twoNumbers[i] ;
  }
  for(size_t i = twoNumbers.size() - 1; twoNumbers[i] != -1000 ;  --i  )
  {
    right = i;
  }
  int middle = right -1;
  cout << "The middle index is " << right << endl;

  while(left <= right && right < twoNumbers.size() && twoNumbers[left]!= -1000)
  {
    twoNumbers[left] += twoNumbers[right];
    if(twoNumbers[left] >= 10)
    {
        twoNumbers[left] = 0;
      for (size_t j = left + 1; j < middle; j++ )
      {
        if(twoNumbers[j] + 1 > 10)
        {
          twoNumbers[j] = 0;
          continue;
        }
        twoNumbers[j] += 1;
        break;

      }
    }
    left++;
    right++;
  }

  for(size_t i = 0; i < middle ;  ++i  )
  {
    cout << twoNumbers[i];
  }
}

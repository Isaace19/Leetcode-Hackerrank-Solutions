#include <string>
#include <vector>
#include <list>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <numeric>
using namespace std;

class Cryptography {
  public:
    long long encrypt(vector <int> numbers);
};

long long Cryptography::encrypt(vector <int> numbers)
{

  // elements will be 1 - 1000 , size of the numbers will be at least 2 at most 50
  // maximize the product.

  std::sort(numbers.begin(), numbers.end());




  
  // NOTE THAT 1 IS A 32 BIT NUMBER AND WILL OVERFLOW, MEANING WE HAVE TO USE 1 UNSIGNED LONG LONG
  // OTHERWISE THE SERIES SUMMATION WILL OVERFLOW AFTER 2^32 - 1 COMPUTATION.
  int index, i;
  unsigned long long  multi; // for multiplication chain
  numbers.front() = numbers.front() + 1;
  for (i = 0; i < numbers.size(); i+=1) {
    //numbers.front() = numbers.front() + 1;
    multi = std::accumulate(numbers.begin(), numbers.end(), 1ULL, std::multiplies<unsigned long long>());
  }
  

  //cout << numbers.front() << endl;
  return multi;
}


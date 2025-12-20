#include <string>
#include <vector>
#include <list>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstdlib>
using namespace std;

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums);
};


long long Solution::zeroFilledSubarray(vector<int>& nums)
{
	size_t i;
	long long num_zeros;
	long long rv;
	num_zeros = 0;
	rv = 0;
	nums.push_back(1);

	// this step handles the amount of zero subarrays that are possible. 
	for (i = 0; i < nums.size(); i+=1) {
		if (nums[i] == 0) {
			num_zeros++;
		}else {
			rv += (num_zeros*(num_zeros+1)/2);
			num_zeros = 0;
		}
	}



	return rv;
}

int main()
{
  vector <int> nums;
  int i;
  Solution s;

  while (cin >> i) nums.push_back(i);
  cout << s.zeroFilledSubarray(nums) << endl;
}


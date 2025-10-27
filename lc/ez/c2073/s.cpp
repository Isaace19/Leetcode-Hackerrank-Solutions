#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

class Solution {
public:
  int timeRequiredToBuy(std::vector<int> &tickets, int k) {
    // increment a loop and keep int k as a tracker
    int i, result;
    for (i = 0; i < tickets.size(); i++) {
      if (i <= k) {
        result += min(tickets[i], tickets[k]);
      } else {
        result += min(tickets[i], tickets[k] - 1);
      }
    }
    return result;
  }
};

#include <iostream>
#include <algorithm>
#include <vector>
/* DP Problem:
 * Check if you can fill either jug completely first. 
 * Check if you can completely empty either jug
 * Pour water from one jug into another until the receiving
 * 	jug is full or transfer jug is empty
 * */



class Solution {
	public:
		bool canMeasureWater (int x, int y, int target) {
			// create containers to measure the water
			
			int jug1 = 0, jug2 = 0;
			int cap1 = x, cap2 = y;

			int pour = std::min(jug1, cap2 - jug2);
			jug1 += pour;
			jug2 += pour;

			// apply a BFS to determine the pours
			struct state {int x, y;};
			queue<State> q;
			set<pair<int, int>> visited;

			q.push({0,0});
			visited.insert(({0, 0}));

			while (!q.empty()) {
				auto[x,y] = q.front(); q.pop();

				if (x == target || y == target) return true;
				if (!visited.count{cap1, y}) {
					q.push({cap1, y});
					visited.insert({cap1, y});
				}
			}
		
		}
	return Solution
}

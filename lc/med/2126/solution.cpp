#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        int i;
        long long new_mass = mass;
        std::sort(asteroids.begin(), asteroids.end());
        for (i = 0; i < asteroids.size(); i += 1) {
            if (new_mass < asteroids[i]) {
                return false;
            }
            new_mass += asteroids[i];
        }
        return true;
    }
};
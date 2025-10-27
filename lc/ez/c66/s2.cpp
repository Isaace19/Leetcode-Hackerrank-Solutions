class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    int carry = 1;
    reverse(digits.begin(), digits.end());
    // reverse to get in the most sig order at the front
    for(int &i : digits) {
        i += carry;
        carry = i/10;
        i %= 10;
        if (!carry) { 
            break;
        }
    }
    if (carry) {
        digits.push_back(1);
    }
    reverse(digits.begin(), digits.end());
    return digits;
    }
};

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        if (digits.empty()) {
            return {}; // returns empty vector
        }
        digits.back()++; // always increments the last vector element
        int carry = 1;
        for (int i = digits.size() - 1; i >= 0 && carry; --i) {
            if (digits[i] > 9) {
                int carry = digits[i] / 10; // aways give 1
                digits[i] = digits[i] % 10; // set last to 0

                // inserts the digit to the left of the last digit if possible
                if (i > 0) {
                    digits[i-1] += carry;
                }else {
                    digits.insert(digits.begin(), carry);
                }
            }
        }
        return digits;
    }
};

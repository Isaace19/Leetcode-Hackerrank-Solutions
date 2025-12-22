#include <iostream>
using namespace std;

int isVowel(char ch) {
  string str = "aeiouAEIOU";
  return (str.find(ch) != string::npos);
}


class Solution {
public:
    long long countVowels(string word) {
      // check a base case solution
      int i, counter;

      for (i = 0; i < word.length(); i+=1) {
        if (isVowel(word[i])) {
          // then we have a combination
          counter++;
        }else {
          counter = 0x;
        }
        return counter;
      }
};

/*bool isVowel(char ch) {
    string str = "aeiou";
    return (str.find(ch) != string::npos);
}*/

/*int counterVowels (string word) {
    return count_if(word.begin(), word.end(), isVowel);
}*/

class Solution {
public:
    long long countVowels(string word) {
        int i;
        long long counter = 0;
        string needle = "aeiou";
        for (i = 0; i < word.length(); i += 1) {
            if (word[i].contains(needle)) {
                counter += (i + 1) * (word.length() - i);
            }
        }
        return counter;
    }
};

  /*bool isVowel(char ch) {
    string str = "aeiou";
    return (str.find(ch) != string::npos);
}*/

/*int counterVowels (string word) {
    return count_if(word.begin(), word.end(), isVowel);
}*/

class Solution {
public:
    long long countVowels(string word) {
        int i;
        long long counter = 0;
        string needle = "aeiou";
        int len = word.length();
        for (i = 0; i < len; i += 1) {
            if (needle.find(word[i]) != string::npos) {
                counter += (i + 1) * (word.length() - i);
            }
        }
        return counter;
    }
};

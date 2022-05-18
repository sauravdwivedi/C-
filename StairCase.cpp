/** A staircase of size (say n = 5) is combination of white spaces and #:
 *
 *      #
 *     ##
 *    ###
 *   ####
 *  #####
 *
 *  where number of #'s at bottom is equal to n. Whrite a method to print
 *  a staircase for a given integer n as input.
 */

#include <cstdio>
#include <iostream>

using namespace std;

string StairCase(int stair_case_size) {
  string stair_case = "";
  for (int i = 1; i < stair_case_size + 1; i++) {
    for (int j = 0; j < stair_case_size -i; j++) {
      stair_case += " ";
    }
    for (int k = 0; k < i; k++) {
      stair_case += "#";
    }
    stair_case += "\n";
  }
  return stair_case;
}

int main() {
  cout << "Size of staircase: ";
  int stair_case_size;
  cin >> stair_case_size;
  string result = StairCase(stair_case_size);
  printf("The staircase of size %d!\n", stair_case_size);
  cout << result;
}

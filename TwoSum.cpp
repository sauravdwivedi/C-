/** Write a method that checks if there is at least one pair of
 *  numbers in a list of numbers, which has sum equal to target.
 *  Given arr = [1, 3, 4] and target = 5, result is true because
 *  the pair (1,4) sums to 4.
 */

#include <cstdio>
#include <iostream>

using namespace std;

string TwoSum(int array_of_integers[], int lenght_of_array, int target_num) {
  bool result = false;
  for (int i = 0; i < lenght_of_array; i++) {
    int p = array_of_integers[i];
    for (int j = 0; j < lenght_of_array; j++) {
      int q = array_of_integers[j];
      if ((p != q) && (p+q == target_num)) {
        result = true;
      }
    }
  }
  if (result == true) {
    return "At least one pair has sum equal to target!";
  } else {
    return "No pair has sum equal to target!";
  }
}

int main() {
  cout << "Length of array of integers: ";
  int lenght_of_array;
  int entry;
  cin >> lenght_of_array;
  int array_of_integers[lenght_of_array];
  for (int i = 0; i < lenght_of_array; i++) {
    cout << "Array entry: ";
    cin >> entry;
    array_of_integers[i] = entry;
  }
  int target_num;
  cout << "Enter target integer: ";
  cin >> target_num;
  string result = TwoSum(array_of_integers, lenght_of_array, target_num);
  cout << result << endl;
}

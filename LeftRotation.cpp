//A left rotation operation on an array shifts each of the array's
//elements 1 unit to the left. For example, if 2 left rotations are
//performed on array [1,2,3,4,5], then the array would become
//[3,4,5,1,2]. Note that the lowest index item moves to the highest
//index in a rotation. This is called a circular array.
//
//Given an array a of n integers and a number, d, perform d left
//rotations on the array. Return the updated array to be printed as a
//single line of space-separated integers.

#include <cstdio>
#include <iostream>

using namespace std;

void printArray(int arr[], int n) {
  //Method to print Array
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
}

void left_rot(int n, int a[], int d) {
  //Method to make d left-rotations for array a
  int x[n];
  if (d <= n) {
    for (int j = 0; j < n; j++) {
      if (d+j < n) {
        x[j] = a[d+j];
      }
      else {
        x[j] = a[d+j-n];
      }
    }
  }
  else {
    d = d % n;
      for (int j = 0; j < n; j++) {
        if (d+j < n) {
          x[j] = a[d+j];
        }
        else {
          x[j] = a[d+j-n];
        }
      }
    }
  printArray(x, n);
}

int main() {
  cout << "Length of array: ";
  int n;
  int y;
  cin >> n;
  int a[n];
  for (int i=0; i < n; i++) {
    cout << "Enter array: ";
    cin >> y;
    a[i] = y;
  }
  cout << "Enter no. of rotations: ";
  int d;
  cin >> d;
  left_rot(n, a, d);
}

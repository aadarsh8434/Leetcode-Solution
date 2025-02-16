#include <iostream>
using namespace std;
int findEquilibriumIdx(int nums[], int n) {
  int leftSum, rightSum;
 
  for (int i = 0; i < n; i++) {
    leftSum = 0;
    for (int j = 0; j < i; j++) {
      leftSum += nums[j];
    }
    rightSum = 0;
    for (int j = i + 1; j < n; j++) {
      rightSum += nums[j];
    }
    if (leftSum == rightSum) {
      return i;
    }
  }
  return -1;
}
int main() {
  int n = 5;
  int arr[] = { 2, 3, -1, 8, 4 };
  int equilibriumidx = findEquilibriumIdx(arr, n);
  cout << equilibriumidx << endl;
  return 0;
}

#include<bits/stdc++.h>
using namespace std;

int mxPro(vector<int> &arr) {
  int maxPro = 0;
  int n = arr.size();
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[j] > arr[i]) {
        maxPro = max(arr[j] - arr[i], maxPro);
      }
    }
  }
  return maxPro;
}

int main() {
  vector<int> arr = {4,5,6,7,1,4,9};
  int maxPro = mxPro(arr);
  cout << "Max profit is: " << maxPro << endl;
}

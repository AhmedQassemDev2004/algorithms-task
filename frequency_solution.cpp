#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int arr[], int n) {
  int max = 0;
  int freq[1000] = {0};
  for (int i = 0; i < n; i++) {
    if (arr[i] > max)
      max = arr[i];

    freq[arr[i]]++;
  }

  return freq[max];
}

int main() {
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  cout << birthdayCakeCandles(arr, n) << endl;

  return 0;
}

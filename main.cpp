#include <bits/stdc++.h>
using namespace std;

int birthdayCakeCandles(int *arr, int n) {
  int _max = 0, occur = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] > _max) {
      _max = arr[i];
      occur = 1;
    } else if (arr[i] == _max) {
      occur++;
    }
  }

  return occur;
}

int main() {
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  cout << birthdayCakeCandles(arr, n) << '\n';
}

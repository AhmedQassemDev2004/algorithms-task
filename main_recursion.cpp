#include <bits/stdc++.h>
using namespace std;

int birthdayCakeCandles(int *arr, int n, int _max, int occur) {
  if (n == 0) {
    return occur;
  }

  if (*arr > _max) {
    return birthdayCakeCandles(arr + 1, n - 1, *arr, 1);
  } else if (*arr == _max) {
    return birthdayCakeCandles(arr + 1, n - 1, _max, occur + 1);
  } else {
    return birthdayCakeCandles(arr + 1, n - 1, _max, occur);
  }
}

int birthdayCakeCandles(int *arr, int n) {
  return birthdayCakeCandles(arr + 1, n - 1, *arr, 1);
}

int main() {
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  cout << birthdayCakeCandles(arr, n);
}

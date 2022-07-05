#include <bits/stdc++.h>
using namespace std;

#define ld double long


int main() {

  int n;
  cin >> n;
  int* arr = new int[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int x,count =0; 
  cin >> x;
  for (int i = 0; i < x; i++) {
    int tar;
    cin >> tar;
    int l = 0, r = n-1;
    count = 0;
    while(l<=r) {
      int mid = (l + r) / 2;

      if (arr[mid] < tar) {
        l = mid + 1;
      }
      else if (arr[mid] > tar) {
        r = mid - 1;
      }
      else if (arr[mid] == tar) {
        
        while (arr[mid-1] == tar) {
          mid = mid - 1;
          if (mid > n - 1 || mid < 0) {
            break;
          }
        }
        cout<< mid+1<< ' ';
        count++;

        while (arr[mid + 1] == tar) {
          mid = mid + 1;
          count++;
          if (mid > n - 1 || mid < 0) {
            break;
          }
        }
        cout<< mid+1 << '\n';
        break;

      }
    }
    if (count == 0)
      cout << "Not found" << '\n';
  }

}
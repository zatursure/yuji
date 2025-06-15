#include<bits/stdc++.h>
using namespace std;

int BS(vector<int>& arr, int num) {
    int left = 0;
    int right = arr.size() - 1;
    int result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == num) {
            result = mid;
            right = mid - 1;
        }
        else if (arr[mid] < num) left = mid + 1;
        else right = mid - 1;
    }
    return result;
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) cin >> A[i];
    for (int i = 0; i < M; ++i) {
        int num;
        cin >> num;
        cout << BS(A, num) << "\n";
    }

    return 0;
}
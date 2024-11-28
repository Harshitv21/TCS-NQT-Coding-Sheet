#include <iostream>
#include <set>
#include <unordered_map>
using namespace std;

/*
{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}
{1, 5}, {2, 3}, {4, 2}, {5, 1}, {2, 4}
*/

void brute(int arr[][2], int n) {
    /* reversibility check but will print both set of pairs */
    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < n; j++) {
    //         if(i != j && arr[i][0] == arr[j][1] && arr[i][1] == arr[j][0]) {
    //             cout << "(" << arr[j][0] << ", " << arr[j][1] << ") ";
    //         }
    //     }
    // }

    /* prints only one set if match found */
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i][0] == arr[j][1] && arr[i][1] == arr[j][0]) {
                cout << "(" << arr[j][0] << ", " << arr[j][1] << ") ";
            }
        }
    }
}

void optimal(int arr[][2], int n) {
    unordered_map<int, int> mpp;

    for(int i = 0; i < n; i++) {
        int f = arr[i][0];
        int s = arr[i][1];

        if(mpp.find(s) != mpp.end() && mpp[s] == f) {
            cout << "(" << f << ", " << s << ") ";
        } else {
            mpp[f] = s;
        }
    }
}

int main() {
    int arr[][2] = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Brute: ";
    brute(arr, n);
    cout << "\n";

    cout << "Optimal: ";
    optimal(arr, n);
    cout << "\n";

    return 0;
}
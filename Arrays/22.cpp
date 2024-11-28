#include <iostream>
#include <algorithm>
using namespace std;

void reverse(int A[], int start, int end) {
    while(start <= end) {
        int temp = A[start];
        A[start] = A[end];
        A[end] = temp;
        start++;
        end--;
    }
}

int main() {
    /*
    Circular rotation = right rotation
    */
    int A[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(A) / sizeof(A[0]);
    int d = 3;
    d = d % n; // no of rotations

    cout << "Original: ";
    for(auto it : A) cout << it << " ";

    // reverse whole array
    reverse(A, 0, n - 1);
    // reverse till d
    reverse(A, 0, d - 1);
    // reverse remaining
    reverse(A, d, n - 1);

    cout << "\n" << "Right rotated array: ";
    for(auto it : A) cout << it << " ";

    return 0;
}
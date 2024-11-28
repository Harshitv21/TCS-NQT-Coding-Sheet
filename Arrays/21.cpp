#include <iostream>
using namespace std;

/*
{2,3,-1,8,4} // 3
{1,-1,4}     // 2
*/

int main() {
    int arr[] = {2,3,-1,8,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    // checking rightsum with leftsum
    int totalSum = 0, leftSum = 0, rightSum = 0, index = -1;
    for(int i = 0; i < n; i++) totalSum += arr[i]; 
    rightSum = totalSum;

    for(int i = 0; i < n; i++) {
        rightSum -= arr[i];
        if(leftSum == rightSum) {
            index = i;
            break;
        }
        leftSum += arr[i];
    }
    cout << index;

    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;

/*
{1,1,2,2,2,3,3};
{1,1,1,2,2,3,3,3,3,4,4};
*/

int main() {
    int arr[] = {1, 1, 1, 2, 2, 3, 3, 3, 3, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    /*
    // printing non duplicate elements
    int curr = -1;
    for(int i = 0; i < n; i++) {
        if(curr != arr[i]) {
            cout << arr[i] << " ";
            curr = arr[i];
        }
    }
    */

    int i = 0;
    for(int j = 1; j < n; j++) {
        if(arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }
    for(int k = 0; k <= i; k++) cout << arr[k] << " ";

    return 0;
}
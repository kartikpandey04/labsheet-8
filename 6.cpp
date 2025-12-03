#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == key) return mid;
        else if(key < arr[mid]) high = mid - 1;
        else low = mid + 1;
    }
    return -1;
}

int main() {
    int n, key;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    cout << "Enter sorted array:\n";
    for(int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> key;

    int index = binarySearch(arr, n, key);
    if(index != -1) cout << "Found at index " << index;
    else            cout << "Not found";

    return 0;
}

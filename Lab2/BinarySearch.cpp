#include <iostream>
#include <vector>
using namespace std;

int main() {
    int target;
    int n;
    cout << "Size of array: ";
    cin >> n;
    vector<int> arr(n,0);
    cout << "Enter the elements in the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the elements to be searched: ";
    cin >> target;

    int start = 0, end = arr.size()-1;
    while(start <= end) {
        int mid = start + (end - start)/2;
        if(target == arr[mid]) {
            cout << "Element found at index " << mid;
            break;
        }else if (target > arr[mid]) {
            start = mid+1;
        } else {
            end = mid - 1;
        }
    }
    return 0;
}
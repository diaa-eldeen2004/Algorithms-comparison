#include <iostream>
#include <vector>
using namespace std;

// Function for Fast Exponentiation using Divide and Conquer
long long fastExponentiation(long long base, long long exponent) {
    if (exponent == 0)
        return 1;

    long long half = fastExponentiation(base, exponent / 2);
    if (exponent % 2 == 0)
        return half * half;
    else
        return base * half * half;
}
///////case 2 using master therom (T(n)= T(N/2)+O(1)) a=1 b =2 d=0 -> a=b^d -> case 2 -> n^d * log(n) base b = log(n)



// Function to find a Peak Element using Divide and Conquer
int findPeakElement(const vector<int>& arr, int left, int right) {
    int mid = left + (right - left) / 2;

    // Check if mid is a peak
    if ((mid == 0 || arr[mid - 1] <= arr[mid]) &&
        (mid == arr.size() - 1 || arr[mid] >= arr[mid + 1])) {
        return mid;
    }

    // If the left neighbor is greater, then the peak must be in the left half
    if (mid > 0 && arr[mid - 1] > arr[mid]) {
        return findPeakElement(arr, left, mid - 1);
    }

    // Otherwise, the peak is in the right half
    return findPeakElement(arr, mid + 1, right);
}
///////case 2 using master therom (T(n)= T(N/2)+O(1)) a=1 b =2 d=0 -> a=b^d -> case 2 -> n^d * log(n) base b = log(n)

int main() {
    // Fast Exponentiation
    long long base, exponent;
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;
    long long result = fastExponentiation(base, exponent);
    cout << "Result (Fast Exponentiation): " << result << endl;

    // Peak Element in Array
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i << " = ";
        cin >> arr[i];
    }


    int peakIndex = findPeakElement(arr, 0, n - 1);
    cout << "Peak Element: " << arr[peakIndex] << " at index " << peakIndex << " ";

    return 0;
}















//////extra 
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//// Function to find max and min using divide and conquer
//vector<int> findMaxMin(const vector<int>& arr, int low, int high) {
//    vector<int> result(2); // result[0] = max, result[1] = min
//    vector<int> left, right;
//
//    // Base case: single element
//    if (low == high) {
//        result[0] = arr[low]; // max
//        result[1] = arr[low]; // min
//        return result;
//    }
//
//    // Base case: two elements
//    if (high == low + 1) {
//        if (arr[low] > arr[high]) {
//            result[0] = arr[low];
//            result[1] = arr[high];
//        }
//        else {
//            result[0] = arr[high];
//            result[1] = arr[low];
//        }
//        return result;
//    }
//
//    // Divide: find midpoint
//    int mid = (low + high) / 2;
//
//    // Conquer: recursively find max/min in left and right halves
//    left = findMaxMin(arr, low, mid); 
//    right = findMaxMin(arr, mid + 1, high);
//
//    // Combine: compare max and min from both halves
//    result[0] = max(left[0], right[0]);   // max
//    result[1] = min(left[1], right[1]);   // min
//
//    return result;
//}
/////////case 3 using master therom (T(n)= 2T(N/2)+O(1)) a=1 b =2 d=0 -> a>b^d -> case 3 -> n^(log(a) base b) = n^(log(2) base 2)
//int main() {
//    int n;
//        cout << "Enter size of array: ";
//        cin >> n;
//        vector<int> arr(n);
//        cout << "Enter elements of the array:\n";
//        for (int i = 0; i < n; i++)
//            cin >> arr[i];
//
//    vector<int> result = findMaxMin(arr, 0, arr.size() - 1);
//    cout << "Maximum: " << result[0] << endl;
//    cout << "Minimum: " << result[1] << endl;
//
//    return 0;
//}

//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//// Divide-and-conquer function to count occurrences of x in arr[low..high]
//int countOccurrences(const vector<int>& arr, int low, int high, int x) {
//    // Base case: single element
//    if (low == high) {
//        return (arr[low] == x) ? 1 : 0;
//    }
//
//    // Divide: compute midpoint
//    int mid = low + (high - low) / 2;
//
//    // Conquer: recursively count in left and right halves
//    int left_count = countOccurrences(arr, low, mid, x);
//    int right_count = countOccurrences(arr, mid + 1, high, x);
//
//    // Combine: sum the counts
//    return left_count + right_count;
//}
//
//int main() {
//    vector<int> arr = { 1, 2, 8,3, 2, 4, 8,2, 5, 2 , 8 ,7 };
//    cout << "Enter number to serach it count";
//    int x; // Number to count
//    cin >> x;
//    int n = arr.size();
//    int result = countOccurrences(arr, 0, n - 1, x);
//    cout << "Number " << x << " appears " << result << " times in the array." << endl;
//    return 0;
//}

///////case 3 using master therom (T(n)= 2T(N/2)+O(1)) a=1 b =2 d=0 -> a>b^d -> case 3 -> n^(log(a) base b) = n^(log(2) base 2)
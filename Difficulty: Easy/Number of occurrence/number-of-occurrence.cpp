class Solution {
  public:
  int findFirst(const vector<int>& arr, int x) {
    int low = 0, high = arr.size() - 1, first = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            first = mid;
            high = mid - 1; // keep searching in the left half
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return first;
}
int findLast(const vector<int>& arr, int x) {
    int low = 0, high = arr.size() - 1, last = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            last = mid;
            low = mid + 1; // keep searching in the right half
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return last;
}
    int countFreq(vector<int>& arr, int x) {
        // code here
        int first = findFirst(arr, x);
       int last = findLast(arr, x);
       if (first == -1 || last == -1) {
        return 0;
    }
    return last - first + 1;
    }
};

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
    int n = arr.size();
    deque<int> dq;
    vector<int> ans;

    for (int i = 0; i < n; i++) {
        // Remove indices from front if they are out of the window
        if (!dq.empty() && dq.front() <= i - k)
            dq.pop_front();

        // Remove from back all smaller elements (they can't be max)
        while (!dq.empty() && arr[dq.back()] < arr[i])
            dq.pop_back();

        // Add current index
        dq.push_back(i);

        // Push the current max (only when we have a full window)
        if (i >= k - 1)
            ans.push_back(arr[dq.front()]);
    }

    return ans;
    }
};
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

long long largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    stack<int> indices; // Stack to store indices of the histogram's bars
    long long maxArea = 0;

    // Traverse each bar in the histogram
    for (int i = 0; i < n; i++) {
        // Maintain increasing order in the stack
        while (!indices.empty() && heights[indices.top()] > heights[i]) {
            int h = heights[indices.top()];
            indices.pop();
            int width = indices.empty() ? i : i - indices.top() - 1;
            maxArea = max(maxArea, (long long)h * width);
        }
        indices.push(i);
    }

    // Calculate area for remaining bars in stack
    while (!indices.empty()) {
        int h = heights[indices.top()];
        indices.pop();
        int width = indices.empty() ? n : n - indices.top() - 1;
        maxArea = max(maxArea, (long long)h * width);
    }

    return maxArea;
}

int main() {
    int N;
    cin >> N;
    vector<int> heights(N);
    for (int i = 0; i < N; i++) {
        cin >> heights[i];
    }

    cout << largestRectangleArea(heights) << endl;
    return 0;
}

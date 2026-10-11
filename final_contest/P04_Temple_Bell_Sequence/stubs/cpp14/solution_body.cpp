long long templeBellPower(vector<int> r) {
    int n = r.size();
    vector<long long> prefix(n + 1, 0);
    for (int i = 0; i < n; i++) prefix[i+1] = prefix[i] + r[i];
    vector<int> nge(n, n);
    stack<int> st;
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && r[st.top()] < r[i]) st.pop();
        if (!st.empty()) nge[i] = st.top();
        st.push(i);
    }
    long long total = 0;
    for (int i = 0; i < n; i++) {
        int left = i + 1, right = nge[i];
        if (left < right) total += prefix[right] - prefix[left];
    }
    return total;
}

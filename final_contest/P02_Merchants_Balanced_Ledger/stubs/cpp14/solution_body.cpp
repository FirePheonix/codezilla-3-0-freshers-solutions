int longestBalancedStretch(vector<int> arr) {
    unordered_map<long long, int> prefMap;
    prefMap[0] = -1;
    long long prefSum = 0;
    int maxLen = 0;
    for (int i = 0; i < (int)arr.size(); i++) {
        prefSum += arr[i];
        if (prefMap.count(prefSum))
            maxLen = max(maxLen, i - prefMap[prefSum]);
        else
            prefMap[prefSum] = i;
    }
    return maxLen;
}

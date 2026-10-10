int spiceMarketStalls(vector<int> stalls, int k) {
    unordered_map<int, int> freq;
    int left = 0, maxLen = 0;
    for (int right = 0; right < (int)stalls.size(); right++) {
        freq[stalls[right]]++;
        while ((int)freq.size() > k) {
            freq[stalls[left]]--;
            if (freq[stalls[left]] == 0) freq.erase(stalls[left]);
            left++;
        }
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}

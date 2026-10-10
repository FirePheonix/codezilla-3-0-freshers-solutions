int riceFieldIrrigation(vector<int> water, int k) {
    unordered_map<long long, int> prefCount;
    prefCount[0] = 1;
    long long psum = 0;
    int count = 0;
    for (int x : water) {
        psum += x;
        if (prefCount.count(psum - k))
            count += prefCount[psum - k];
        prefCount[psum]++;
    }
    return count;
}

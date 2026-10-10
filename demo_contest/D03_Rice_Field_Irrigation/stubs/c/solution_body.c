int riceFieldIrrigation(int* water, int n, int k) {
    hclear();
    hset(0LL, 1);
    long long psum = 0;
    int count = 0, i;
    for (i = 0; i < n; i++) {
        psum += water[i];
        count += hget(psum - k);
        hincr(psum);
    }
    return count;
}

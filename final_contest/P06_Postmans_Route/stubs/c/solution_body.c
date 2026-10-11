int postmanRoute(int* arr, int n) {
    int l = 0, r = n - 1;
    while (l < r) {
        if (arr[l] != arr[r]) return 0;
        l++; r--;
    }
    return 1;
}

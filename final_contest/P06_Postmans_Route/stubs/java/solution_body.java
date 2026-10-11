    static String postmanRoute(int[] arr) {
        int l = 0, r = arr.length - 1;
        while (l < r) {
            if (arr[l] != arr[r]) return "NO";
            l++; r--;
        }
        return "YES";
    }

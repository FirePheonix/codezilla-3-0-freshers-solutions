    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] b = new int[n];
        for (int i = 0; i < n; i++) b[i] = sc.nextInt();
        String[] res = diwaliLights(b);
        System.out.println(res[0]);
        System.out.println(res[1]);
    }
}
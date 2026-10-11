    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); long T = sc.nextLong();
        int[] asteroids = new int[n];
        for (int i = 0; i < n; i++) asteroids[i] = sc.nextInt();
        String[] res = asteroidStation(asteroids, T);
        System.out.println(res[0]);
        System.out.println(res[1]);
    }
}
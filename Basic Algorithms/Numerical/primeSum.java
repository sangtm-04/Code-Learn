public static int primeSum(int n)
    {
        if (n < 2 ) return 0;
        int sum = 0;
        boolean flags[] = sangNT(n);
        for (int i = 2; i < flags.length; i++) {
            if (flags[i]) {
                sum += i;
                sum = sum % 22082018;
            }
        }
        return sum;
    }

    public static boolean[] sangNT(int max) {
        boolean[] flags = new boolean[max+1];

        init(flags);
        int prime = 2;

        while (prime <= Math.sqrt(max)) {
            crossOff(flags, prime);
            prime = getNextPrime(flags, prime);
        }
        return flags;
    }

    public static void init(boolean[] flags) {
        for (int i = 0; i < flags.length; i++) {
            flags[i] = true;
        }
    }

    public static void crossOff(boolean[] flags, int prime) {
        for (int i = prime*prime; i < flags.length; i += prime) {
            flags[i] = false;
        }
    }

    public static int getNextPrime(boolean[] flags, int prime) {
        int next = prime+1;
        while (next < flags.length && flags[next] == false) {
            next++;
        }
        return next;
    }
    
    public static void main(String[] args) {
        int n = 3;
        System.out.println(primeSum(n));
    }
}

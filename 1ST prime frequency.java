// Online Java Compiler
class Main {

    public static int primefreq(int[] nums) {

        for (int i = 0; i < nums.length; i++) {
            int count = 0;
            int prime = 0;

            for (int j = 0; j < nums.length; j++) {
                if (nums[i] == nums[j]) {
                    count++;
                }
            }

            for (int k = 2; k <= count / 2; k++) {
                if (count % k == 0) {
                    prime = 1;
                }
            }

            if (prime == 0) {
                return nums[i];
            }

           
        }

        return -1;
    }

    public static void main(String[] args) {

        int[] nums = {8, 4, 7, 2, 4, 8, 8, 8};

        System.out.println(primefreq(nums));
    }
}

class Solution {
    public int sumCounts(List<Integer> nums) {
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i<n; i++){
           // Map<Integer,Integer> map = new HashMap<>();
            Set<Integer> set = new HashSet<>();
            for(int j = i;j<n; j++){
                // count the distinct value
                //map.put(nums.get(j),1);
                set.add(nums.get(j));
                
                int count = set.size();
                sum = sum + (count*count);
            }
        }
        return sum;
    }
}

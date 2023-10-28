class Solution {
    public int sumCounts(List<Integer> nums) {
        int n=nums.size();
        int ans=0;
       
        for (int st = 0; st <n ; st++)
        {
            for (int groups = st; groups <=n ; groups++)
            {
             HashSet<Integer> set=new HashSet<>();
                for (int j = st ; j < groups ; j++)
                {
                    set.add(nums.get(j));
                }
                int c=set.size();
                ans+=c*c;
            }
        }
        return ans;
    }
}

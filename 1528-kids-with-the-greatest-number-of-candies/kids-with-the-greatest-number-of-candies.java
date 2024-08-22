class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        int n = candies.length;
        int maxCandies = 0;
        for (int candy : candies){
            if(candy > maxCandies)
                maxCandies = candy;
        }
        List<Boolean> result = new ArrayList<>();
        for(int i=0; i<n; i++){
            result.add(extraCandies + candies[i] >= maxCandies);
        }
        return result;
    }
}
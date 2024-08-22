class Solution {
    public String mergeAlternately(String word1, String word2) {
        StringBuilder op = new StringBuilder();
        int l1 = word1.length();
        int l2 = word2.length();
        int maxl = Math.max(l1, l2);
        for(int i=0; i<maxl; i++)
        {
            if(i < l1)
            op.append(word1.charAt(i));

            if(i < l2)
            op.append(word2.charAt(i));
        }

        return op.toString();
    }
}
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int n=s.length();
        if (n==0) return 0;
        if (n==1) return 1;
        int r=1;
        unordered_map<char,int> mp;
        mp[s[l]]++;
        int u=0;
        while (r<n){
            while(mp[s[r]]>0){
                mp[s[l]]--;
                l++;}
            mp[s[r]]++;
            u=max(u,r-l+1);
            r++;
        }
        return u;
    }
};
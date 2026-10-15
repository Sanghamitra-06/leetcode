class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int cnt1=0;
        int cnt2=0;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(nums1[i]==nums2[j]){
                cnt1++;
                break;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums2[i]==nums1[j]){
                    cnt2++;
                    break;
                }
            }
        }
        return {cnt1,cnt2};
    
    }
};
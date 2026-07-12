class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        if(n==0) return {};
        vector<pair<int, int>> index(n);
        for(int i=0;i<n;i++){
            index[i]={arr[i],i};
        }
        sort(index.begin(),index.end());
        vector<int> res(n);
        int rank=1;
        res[index[0].second]=rank;
        for(int i=1;i<n;i++){
            if(index[i].first>index[i-1].first){
                rank++;
            }
            res[index[i].second]=rank;
        }
        return res;
        
    }
};
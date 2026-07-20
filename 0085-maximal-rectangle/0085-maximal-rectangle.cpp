class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int maxarea=0;
        vector<int> height(m, 0);
    vector<int> left(m, 0);       
        vector<int> right(m,m);
        for(int i=0;i<n;i++){
            int currleft=0;
            int currright=m;
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='1'){
                    height[j]++;

            }
            else{
                height[j]=0;
            }
        }
        for(int j=0;j<m;j++){
            if(matrix[i][j]=='1'){
                left[j]=max(left[j],currleft);
            }
            else{
                left[j]=0;
                currleft=j+1;
            }
        }
        for(int j=m-1;j>=0;j--){
            if(matrix[i][j]=='1'){
                right[j]=min(right[j],currright);
            }
            else{
                right[j]=m;
                currright=j;
            }
        }
        for(int j=0;j<m;j
        ++){
            int breadth=right[j]-left[j];
            maxarea=max(maxarea,height[j]*breadth);
        }
        
    }
    return maxarea;
    }
};
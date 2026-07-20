class StockSpanner {
public:
stack<pair<int,int>>stk;
int indx;
    StockSpanner() {
       indx=-1;
 }
    
    int next(int price) {
        indx+=1;
        while(!stk.empty() && stk.top().first<=price){
            stk.pop();
        }
        int ans=indx-(stk.empty() ? -1:stk.top().second);
        stk.push({price,indx});
        return ans;
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int sz=0;
        
        for(int i=0; i<intervals.size()-1;i++){
            int start1 = intervals[i][0];
            int end1 = intervals[i][1];
            int start2 = intervals[i+1][0];
            int end2= intervals[i+1][1];
            
            if(end1 >= start2){
                int newEnd =max(end1,end2);
                intervals[i][1] = newEnd;
                intervals[i+1][0]= -1;
                intervals[i+1][1]=-1;
                sz++;
            }
            
        }
        
        vector<vector<int>> ans(intervals.size()-sz);
        int k=0;
        for(int i=0;i<intervals.size();i++){
            ans[k]=vector<int>(2);
            for(int j=0;j<2;j++){
                if(intervals[i][j]!=-1){
                    ans[k].push_back(intervals[i][j]);
                }
               
            }
             k++;
        }
        
        return ans;
    }
};
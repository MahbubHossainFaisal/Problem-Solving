class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int sz=0;
       sort(intervals.begin(),intervals.end());
        for(int i=0; i<intervals.size()-1;i++){
            int start1 = intervals[i][0];
            int end1 = intervals[i][1];
            int start2 = intervals[i+1][0];
            int end2= intervals[i+1][1];
            
            if(end1 >= start2){
                int newEnd =max(end1,end2);
                intervals[i][0]=-1;
                intervals[i][1]=-1;
                intervals[i+1][0]= start1;
                intervals[i+1][1]=newEnd;
                
            }
            
        }
        
        vector<vector<int>> ans;
        for(int i=0;i<intervals.size();i++){
            if(intervals[i][0] != -1 && intervals[i][1] != -1){
                int s = intervals[i][0];
                int e = intervals[i][1];
                ans.push_back({s,e});
            }
            }
            
        
        
        return ans;
    }
};
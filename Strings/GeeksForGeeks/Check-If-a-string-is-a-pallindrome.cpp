class Solution{
public:	
	
	
	int isPlaindrome(string S)
	{
	    int sz=S.size();
	    int mid = sz/2;
	    int i,j;
	    if(sz%2 == 0){
	        i=mid-1;
	        j=mid;
	    } else{
	        i=mid;
	        j=mid;
	    }
	    while(i>=0 && j<sz){
	        if(S[i]==S[j]){
	            i--;
	            j++;
	        }
	        else{
	            break;
	        }
	    }
	    if(i<0 && j>=sz){
	        return 1;
	    } else{
	        return 0;
	    }
	    
	    
	}

};

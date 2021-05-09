#include <bits/stdc++.h>
using namespace std;

/* To find a string is a rotation of another or not we
have to made a new string which will be a concatenation of the first string twice.
Then we will compare the new string with string 2 . If string 2 is a substring of
the new string then the first two given strings are rotation to each other.
*/

bool checkRotation(string s1,string s2){
	string s3 = s1+s1;
	int checker=0;
	
	int i=0,j=0;
	for(i=0;i<s3.size();i++){
		if(s2[j] != s3[i]){
			j=0;
		}
		if(s2[j] == s3[i]){
			j++;
		}
		
		if(j==s2.size()-1){
			return 1;
		}
	}
	return 0;
}

int main()
{
	string s1,s2;
	cin>>s1>>s2;

	bool ans = checkRotation(s1,s2);
	cout<<ans;

	
	
}
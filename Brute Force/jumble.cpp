#include <bits/stdc++.h>
using namespace std;




int main() {

string sentence;
vector<string> words;
int numberOfWords;
cin>>numberOfWords;


for(int i=0; i<numberOfWords; i++){
  string input;
  cin>>input;
  words.push_back(input);
}
cin>>sentence;



int countLength = 0;
for(int i=0; i<words.size(); i++){
  string word = words[i];
  cout<<word<<endl;
  for(int j=0; j<sentence.size(); j++){
  if(sentence.substr(j,word.size()) == word){
    //cout<<"matched"<<endl;
    countLength += word.size();
    cout<<countLength<<endl;
  }
}

}





if(countLength == sentence.size() ) cout<<"Yes";
else cout<<"No";
}


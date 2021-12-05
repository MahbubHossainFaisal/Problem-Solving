#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkWords(string word){
    if(word.size() > 100 || word.size() == 0 ) return false;
    for(int i=0; i<word.size(); i++){
        if(isupper(word[i]) || word[i] == ' ') return false;
    }
    return true;
} 

bool checkSentence(string sentence){
    for(int i=0; i<sentence.size(); i++){
        if(isupper(sentence[i]) || sentence[i]== ' ') return false;
    }
    return true;
}
void lPrefixSuffix(string word, int wordSize,int lpresuff[])
{
     
    
    int i = 1;
    lpresuff[0] = 0;
    int length = 0;

    while (i < wordSize)
    {
        if (word[i] == word[length])
        {
            length+=1;
            lpresuff[i] = length;
            i+=1;
        }
        else 
        {
             
            if (length != 0)
            {
                length = lpresuff[length - 1];
 
            }
            else
            {
                lpresuff[i] = length;
                i++;
            }
        }
    }
}
 
int KMPSearch(string word, string sentence)
{
    int wordSize = word.size();
    int sentenceSize = sentence.size();
    int j = 0;
    int lpresuff[wordSize];

    lPrefixSuffix(word, wordSize, lpresuff);
    int i = 0;
    int res = 0;
    int next_i = 0;
 
    while (i < sentenceSize)
    {
        if (word[j] == sentence[i])
        {
            j++;
            i++;
        }
        if (j == wordSize)
        {
            j = lpresuff[j - 1];
            res++;
        }
        else if (i < sentenceSize && word[j] != sentence[i])
        {
            if (j != 0)
                j = lpresuff[j - 1];
            else
                i = i + 1;
        }
    }
    return res;
}

bool compare(string &s1,string &s2)
{
    return s1.size() > s2.size();
}
 
int main()
{
  string sentence;
  vector <string> words;
  int numberOfWords;
  cin>>numberOfWords;


for(int i=0; i<numberOfWords; i++){
  string input;
  cin>>input;
  words.push_back(input);
}
cin>>sentence;

if(!checkSentence(sentence)) {
    cout<<"No";
    return 0;
}

bool flag = true;
int countLength=0;
    for(int i=0; i<words.size();i++){
      string word = words[i];
      if(!checkWords(word)){
        cout<<"No";
        return 0;
      }
      int ans = KMPSearch(word, sentence);
      //cout<<ans<<endl;
      if(ans == 0){
        flag = false;
        break;
      }
      countLength += ans*word.size();
      
    }

vector <char> verifyWord;

sort(words.begin(),words.end(),compare);



for(int i=0; i<words.size();i++){
      string word = words[i];
      for(int j=0; j<word.size();j++){
        verifyWord.push_back(word[j]);
      }

    }

  if(countLength < sentence.size()) flag = false;
  
    for(int i=0; i<words.size(); i++){
        string word = words[i];
        
       while(1){
         int pos = sentence.find(word);
         if(pos == -1) break;
        //cout<<pos<<endl;
        sentence.erase(pos,word.size());

       }   
    }

    // for(int i=0; i<sentence.size(); i++){
    //     cout<<"sentence: "<<sentence[i]<<"";
    // }
    if(sentence.size() != 0) flag = false;
     
    if(flag) cout<<"Yes";
      else cout<<"No";
     
    return 0;

}
 
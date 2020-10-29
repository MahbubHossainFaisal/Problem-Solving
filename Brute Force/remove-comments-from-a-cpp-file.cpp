


#include<bits/stdc++.h>
using namespace std;
int a=0;
int main()
{


string line;

ifstream fin;
fin.open("example.txt");
ofstream temp;
temp.open("temp.txt");




while (!fin.eof())
{
   getline(fin,line);
   cout<<line<<endl;

 for(int i=0;i<line.size();i++)
 {
     if(line[i]=='/' && line[i+1]=='/')
     {
         line.erase(i,line.size());
         break;
     }
 }
  if(line[0]=='/' && line[1]=='*')
  {
      line.erase();
      a=1;
  }
  if(line.size()!=0 && a==1)
  {
      if(line[line.size()-2]=='*' && line[line.size()-1]=='/')
      {
          a=0;
          line.erase();

      }
      else{
        line.erase();
      }
  }

  temp<<line<<endl;
}

temp.close();
fin.close();
remove("example.txt");
rename("temp.txt","example.txt");

}

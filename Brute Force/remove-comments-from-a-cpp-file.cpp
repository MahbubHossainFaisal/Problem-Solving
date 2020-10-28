


string deleteline;
string line;

ifstream fin;
fin.open("example.txt");
ofstream temp;
temp.open("temp.txt");
cout << "Which line do you want to remove? ";
cin >> deleteline;



while (getline(fin,line))
{
    if (line != deleteline)
    {
    temp << line << endl;
    }
}

temp.close();
fin.close();
remove("example.txt");
rename("temp.txt","example.txt");

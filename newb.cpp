#include<bits/stdc++.h>
using namespace std;
//taking the .csv file as input from the command line
int main(int argv,char **argc){
	fstream fin;//stream to read the contents of .cs file
	fin.open(argc[0],ios::in);//taking the input from the specified csv in argc[0]
	string line;//to read a line from the file
	vector<string> v;//string vector storing each word read from file 
	while(fin>>line){//until EOF
        stringstream s_stream(line);//for separating the words 
        while(s_stream.good()) {//until empty
            string word;//storing each word in a line
        getline(s_stream, word, ',');//getting the comma separated as well as nextline separated words
		v.push_back(word);//entering each word into vector 'v'
		}
	}
	for(int i=0;i<v.size();i++)
    {
        string s = v[i];//copying each value of 'v' in s one-by-one 
        sort(s.begin(), s.end());//sorting the letters of word 's' in s
        do {  
            cout << s <<',';//displaying each permutation and ending with a comma
        } while(next_permutation(s.begin(), s.end()));//generating all permutations
        cout<<endl;//moving to next line after all permutations of a word
    }
}

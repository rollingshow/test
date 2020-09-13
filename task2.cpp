#include <iostream>
using namespace std;

int main()
{
int vresult=0, conresult=0;
string word;
cout << "Enter the word" << endl;
cin >> word;
for (int i=0; i< word.length(); i++)
{
if ((word[i] == 'a') || (word[i] == 'e') || (word[i]=='i') || (word[i]=='o') || (word[i]=='u') || (word[i]=='y')){
vresult=vresult+1;
}
else{
conresult=conresult+1;
}
}

cout<<"vowel = " << vresult<<endl;
cout<<"consonant = " << conresult<<endl;

return 0;
}
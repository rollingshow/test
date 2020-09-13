#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
    string word, longest;
    size_t maxlong=0; 
    ifstream words("words.txt");
    while (!words.eof())
    {
        words>>word;
        if (word.length() > maxlong)
        {
            maxlong= word.length();
            longest = word;

        }

    } 
    cout<<longest<<endl;
    


    


}
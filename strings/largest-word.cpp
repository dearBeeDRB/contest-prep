#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    string max_word, word;
    int word_letter_count=0, max_word_letter_count=0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ')
        {
            if (max_word_letter_count < word_letter_count)
            {
                max_word_letter_count = word_letter_count;
                max_word = word;
            }
            word_letter_count = 0;
            word = "";
            
        }
        else if (i == str.size()-1)
        {
            word_letter_count++;
            word.push_back(str[i]);
            if (max_word_letter_count < word_letter_count)
            {
                max_word_letter_count = word_letter_count;
                max_word = word;
            }
            word_letter_count =0;
            
        }
        
        else{
            word_letter_count++;
            word.push_back(str[i]);
        }  
    }

    cout<<max_word<<endl;
    cout<<max_word_letter_count<<endl;
    
    return 0;
}
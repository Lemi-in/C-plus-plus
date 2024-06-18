#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string input;

    int vowel = 0;
    int consonant = 0;
    int digits = 0;
    int special = 0;
    

    cout << "Enter any kind of text: ";
    getline(cin, input);

    for (char ch : input)
    {
        if (isalpha(ch))
        {
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowel++;
            }
            else
            {
                consonant++;
            }
        }
        else if (isdigit(ch))
        {
            digits++;
        }
        else if(!isspace(ch))
        {
            special++;
        }
    }
       string frequents = {"Vowels"};
       int mostFreq = vowel;
       if(consonant > mostFreq){
        mostFreq = consonant;
        frequents = "Consonats";
        
       }

       if(digits > mostFreq){
        mostFreq = digits;
        frequents = "Digits";

       }
       if(special > mostFreq){
        mostFreq = special;
        frequents = "Special Charachters";

       }
    cout << "There are " << vowel << " vowels, " << endl;
    cout << "There are " << consonant << " consonants, " << endl;
    cout << "There are " << digits << " digits and " << endl;
    cout << "There are " << special << " special charachters in the text."<<endl;
    cout << "The most frequent elements are  "<< frequents << ". And they are repeated " <<mostFreq<<" times";
}

#include <iostream>
#include <string>
#include <cctype>

int main()
{
    using namespace std;
    string word;
    int vowel = 0, consonants = 0, other = 0;
    cout << "Enter words (q to quit): \n";
    cin >> word;
    while (word != "q")
    {
        if(isalpha(word[0]))
            switch (tolower(word[0]))
            {
            case 'a' : vowel++; break;
            case 'e' : vowel++; break;
            case 'i' : vowel++; break;
            case 'o' : vowel++; break;
            case 'u' : vowel++; break;           
            default: consonants++;break;
            }
        else 
            other++;
        cin >> word;
    }
    
    cout << vowel << " words beginning with vowel\n";
    cout << consonants << " words beginning with consonants\n";
    cout << other << " others \n";


    return 0;
}
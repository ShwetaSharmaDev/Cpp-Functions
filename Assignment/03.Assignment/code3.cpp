#include <iostream>
#include <cctype>
using namespace std;

bool isVowel(char c){
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int vowels = 0, consonants = 0;

    for (char c : str){
        if (isalpha(c)){ 
            if (isVowel(c)){
                vowels++;
            }else{
                consonants++;
            }
        }
    }

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;

    return 0;
}

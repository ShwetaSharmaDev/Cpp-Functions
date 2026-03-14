#include <iostream>
using namespace std;

int main(){
    string str;
    char ch;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter a character to search: ";
    cin >> ch;

    int length = str.length();

    int pos = -1;
    for (int i = 0; i < length ; i++){
        if (str[i] == ch){
            pos = i;
            break;
        }
    }

    if (pos != -1){
        cout << "Character '" << ch << "' found at position: " << pos << endl;
    }else{
        cout << "Character '" << ch << "' does not exist in the string." << endl;
    }

    return 0;
}

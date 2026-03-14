#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int length = str.length();

    cout << "Duplicate characters are: ";
    bool found = false;

    for (int i = 0; i < length; i++){
        int count = 1;
        if (str[i] == ' ' || str[i] == '\0')
            continue;

        
        for (int j = i + 1; j < length; j++){
            if (str[i] == str[j]){
                count++;
                str[j] = '\0';
            }
        }

        if (count > 1){
            cout << str[i] << " ";
            found = true;
        }
    }

    if (!found){
        cout << "None";
    }
    cout << endl;

    return 0;
}

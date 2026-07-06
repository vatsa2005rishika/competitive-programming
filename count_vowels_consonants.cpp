#include<iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int vowel_count = 0;
    int consonant_count = 0;
    for (char c : str) {
        c = tolower(c); // Convert character to lowercase for uniformity
        if (isalpha(c)) { // Check if the character is an alphabet
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowel_count++;
            } else {
                consonant_count++;
            }
        }
    }
    cout << "Number of vowels: " << vowel_count << endl;
    cout << "Number of consonants: " << consonant_count << endl;
    return 0;
}

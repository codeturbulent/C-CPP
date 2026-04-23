#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(int argc, char* argv[]) {
    // Combine all command-line arguments into a single string
    string text = "";
    for (int i = 1; i < argc; ++i) {
        text += argv[i];
    }

    // Initialize a map to store frequency of each alphabet
    map<char, int> frequency;
    
    // Loop through the text and count occurrences of each alphabet
    for (char ch : text) {
        if (isalpha(ch)) {  // Check if the character is an alphabet
            ch = tolower(ch);  // Convert to lowercase to count both 'a' and 'A' as same
            frequency[ch]++;
        }
    }

    // Print the frequency table
    cout << "Character Frequency Table:\n";
    for (const auto& pair : frequency) {
        cout << pair.first << ": " << pair.second << "\n";
    }

    return 0;
}

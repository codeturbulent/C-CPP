#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(int argc, char* argv[]) {
    string text = "hello";
    map<char,int> table;
for (int i = 0; i < text.size(); i++) {        
        if (table.find(text[i]) == table.end()) {
            table.insert({text[i], 1}); 
        } else {
            table[text[i]]++; 
        }
    }
    for (auto const & [key, value] : table){
        cout << key << " : " << value<< "\n";
    }
    return 0;
}

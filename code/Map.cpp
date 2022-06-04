#include <iostream>
#include <unordered_map>

int main() {
    std::string w[] = {"The", "crazy", "fox", "jumps", "jumps", "over", "the", "lazy", "dog" };

    std::unordered_map<std::string, int> words_coounter;

    for (std::string word: w) {
        if (words_coounter.find(word) == words_coounter.end()) {
            words_coounter.insert(std::make_pair(word, 1));
        } else {
            words_coounter[word] += 1;
        }
    }

    for (auto word: words_coounter) {
        std::cout << word.first << ": " << word.second << std::endl;
    }
}
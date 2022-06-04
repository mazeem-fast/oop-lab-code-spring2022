#include <iostream>
#include <unordered_map>

int main() {
    std::string words[] = {"crazy", "A", "crazy", 
    "crazy", "fox", "jumps", "over", "over", "the", "lazy", "dog"};

    std::unordered_map<std::string, int> words_counter;

    for (std::string word: words) {
        if (words_counter.find(word) == words_counter.end()) {
            std::pair<std::string, int> wordd;
            words_counter.insert(wordd);
        } else {
            words_counter[word] += 1;
        }
    }

    for (auto word: words_counter) {
        std::cout << word.first << ": " << word.second << std::endl;
    }


}
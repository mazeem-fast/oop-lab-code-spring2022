#include <iostream>
#include <stack>
#include <queue>
#include <string>

int main() {

    std::string words[] = {"A", "crazy", "fox", "jumps", "over", "the", "lazy", "dog"};

    for (auto word: words) {
        std::cout << word << " ";
    }
    std::cout << "\n";

    std::queue<std::string> words_q;
    for (auto word: words) {
        words_q.push(word);
    }

     for (int i = 0; i < 8; i++) {
        std::cout << words_q.front() << " ";
        words_q.pop();

    }
    std::cout << "\n";

    std::stack<std::string> words_st;

    for (auto word: words) {
        words_st.push(word);
    }

     for (int i = 0; i < 8; i++) {
        std::cout << words_st.top() << " ";
        words_st.pop();
    }

}
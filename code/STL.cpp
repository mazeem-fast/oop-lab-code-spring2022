#include <iostream>
#include <queue>
#include <stack>


int main() {
    std::string w[] = {"The", "crazy", "fox", "jumps", "over", "the", "lazy", "dog" };

    for (auto word: w) {
        std::cout << word << " ";
    }

    std::queue<std::string> words_que;

    for (auto word: w) {
        words_que.push(word);
    }

    std::cout << "\nqUEUE: ";
    for (auto word: w) {
       std::cout<< words_que.front() << " ";
       words_que.pop();
    }

    std::stack<std::string> words_st;
    for (auto word: w) {
        words_st.push(word);
    }

     std::cout << "\nstack: ";
    for (auto word: w) {
       std::cout<< words_st.top() << " ";
       words_st.pop();
    }



}
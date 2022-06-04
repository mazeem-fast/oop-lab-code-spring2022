int main() {

    int* list = new int[10];
    delete &list[2];
    delete[] list;
    return 0;
}
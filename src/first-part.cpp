#include <iostream>

struct Node {
    int value;
    Node* next;
};

int main() {
    Node root = {0, nullptr};
    Node* current = &root;

    int c;

    do {
        std::cin >> c;

        if(root.value == 0) {
            current -> value = c;
            continue;
        }

        Node* temp = (Node*)malloc(sizeof(Node));
        temp -> value = c;

        current -> next = temp;
        current = temp;

    } while(c != 0);

    current = &root;
    while(current != nullptr && current -> value != 0) {
        std::cout << current -> value << std::endl;
        current = current -> next;
    }

    return 0;
}

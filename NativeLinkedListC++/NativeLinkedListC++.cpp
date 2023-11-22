#include<iostream>
// Each struct Node has a data item and poitner to another struct node. 
// This is how one node is lineke to the next node. 

struct Node {
	int value{};
	Node* next{}; // used to hold the address of the next node. 
};

int main() {
	// Initialzie pointers to NULL
	Node* head = NULL;
	Node* one = NULL;
	Node* two = NULL;
	Node* three = NULL;

	std::cout << "Address of head is: " << head << std::endl;
	std::cout << "Address of one is:  " << one << std::endl;
	std::cout << "Address of two is:  " << two << std::endl;
	std::cout << "Address ofthree is: " << three << std::endl;

	// Allocate memory to the Nodes
	one = new Node();
	two = new Node();
	three = new Node();

	// Assign Values 
	one->value = 5;
	two->value = 7;
	three->value = 9;

	// Connect Nodes (i.e. Connect a node to its next node)
	head = one;
	one->next = two;
	two->next = three;
	three->next = NULL;

	std::cout << "\nAfter address allocation\n" << std::endl;
	std::cout << "Address of head is: " << head << std::endl;
	std::cout << "Address of one is:  " << one << std::endl;
	std::cout << "Address of two is:  " << two << std::endl;
	std::cout << "Address ofthree is: " << three << std::endl;

	std::cout << "\nInside the while loop\n";
	while (head != NULL) {
		std::cout << "The current Address of head is: " << head << " and has a value of: " << head->value << " and points to: " << head->next << std::endl;
		head = head->next;
	}

	delete[] head, one, two, three;
	return 0;
}
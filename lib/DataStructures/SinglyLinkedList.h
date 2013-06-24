// J. Caleb Wherry
// Singly-Linked List Implementation
// Created: 12/16/2010
// Last Modified: 12/22/2010

template <typename T>
struct Node {
	T datum;
	Node* next;
};

template <typename T>
class SinglyLinkedList {

	private:

		Node<T> *head;
		Node<T> *tail;

	public:

		SinglyLinkedList();

		void insert(T data);

		void remove(T data);

		bool contains(T data);

		void pushBack(T data);

		void pushFront(T data);

		void popBack();

		void popFront();

		void print();

		void printReverse();
};

template <typename T>
SinglyLinkedList<T>::SinglyLinkedList() {

	head = NULL;
	tail = NULL;

}

template <typename T>
void SinglyLinkedList<T>::pushBack(T data) {

	Node<T> *newNode = new Node<T>();
	newNode->next = NULL;
	newNode->datum = data;

	if (head == NULL) {
		head = newNode;
		tail = newNode;
	}
	else {

		Node<T> *lastNode = head;

		while (lastNode->next != NULL) {

			if (lastNode->next == NULL) {
				lastNode->next = newNode;
			}
 			else {
				lastNode = lastNode->next;
			}

		}
	}

}

template <typename T>
void SinglyLinkedList<T>::pushFront(T data) {

}

template <typename T>
void SinglyLinkedList<T>::popBack() {

	Node<T> *nodeToDelete = new Node<T>();
	nodeToDelete = head;

	while (nodeToDelete->next != NULL) {

		if (data == nodeToDelete->datum) {
		}

	}

}

template <typename T>
void SinglyLinkedList<T>::popFront() {

}

template <typename T>
void SinglyLinkedList<T>::print() {

	Node<T> *nodeToPrint = new Node<T>();
	nodeToPrint = head;

	while (nodeToPrint->next != NULL) {
		cout << nodeToPrint->datum << endl;
		nodeToPrint = nodeToPrint->next;
	}   

}

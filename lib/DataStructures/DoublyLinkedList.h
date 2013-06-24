// J. Caleb Wherry
// Doubly-Linked List Implementation
// Created: 12/23/2010
// Last Modified: 12/23/2010

template <typename T>
struct Node {
	T datum;
	Node *prev;
	Node *next;
};

template <typename T>
class DoublyLinkedList {

	private:

		int size;
		Node<T> *head;

	public:

		DoublyLinkedList() {

			head = NULL;
			size = 0;

		}

		void pushBack(T data) {

			Node<T> *newNode = new Node<T>();
			newNode->next = NULL;
			newNode->datum = data;

			if (size == 0) {
				head = newNode;
				size++;
			}
			else {

				Node<T> *lastNode = head;

      	for (int i = 0; i < size; i++) {
				
					if (lastNode->next == NULL) {
						lastNode->next = newNode;
						size++;
					}
					else {
						lastNode = lastNode->next;
					}	

      	}
			} 

		}

		void pushFront(T data) {

		}

		void popBack(T data) {

			Node<T> *nodeToDelete = new Node<T>();
			nodeToDelete = head;

      for (int i = 0; i < size; i++) {

				if (data == nodeToDelete->datum) {

				} 
				
      }  

		}

		void popFront(T data) {

		}

		void printData() {

			Node<T> *nodeToPrint = new Node<T>();
      nodeToPrint = head;

			for (int i = 0; i < size; i++) {
				cout << nodeToPrint->datum << endl;
				nodeToPrint = nodeToPrint->next;
			}

		}

};

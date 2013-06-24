// J. Caleb Wherry
// Binary Search Tree Implementation
// Created: 12/23/2010
// Last Modified: 12/23/2010

template <typename T>
struct Node {
	T datum;
	Node *leftChild;
	Node *rightChild;
};

template <typename T>
class BinarySearchTree {

	private:

		Node<T> *root;
		int depth;

	public:

		BinarySearchTree() {

			root = NULL;
			depth = 0;

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

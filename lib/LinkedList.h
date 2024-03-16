
#ifndef LIB_LINKEDLIST_H_
#define LIB_LINKEDLIST_H_

typedef struct n{
	int data;
	struct n * link;
}node ;

void createLinkedList (int data);
void printSimpleLinkedList();
void printAdvancedLinkedList();
void addNodeAtStart(int data);
void addNodeAtEnd(int data);
void addNodeAtIndex(int index, int data);
void deleteNode(int data);

#endif /* LIB_LINKEDLIST_H_ */

#include <stdio.h>
#include "LinkedList.h"
#include <stdlib.h>

node *start = NULL;

void createLinkedList(int data) {
	node *newNode = (node*) malloc(sizeof(node));
	if (newNode != NULL) {
		newNode->data = data;
		newNode->link = NULL;

		start = newNode;
		printf("Linked List Created Successfully \n");
	} else
		perror("Out of storage");

}
void printSimpleLinkedList() {
	node *indexPointer = start;
	indexPointer = start;
	printf(" ");

	while (indexPointer != NULL) {
		printf("----------------");
		indexPointer = indexPointer->link;
	}
	indexPointer = start;
	printf("\n|");
	while (indexPointer != NULL) {
		printf("	%d	 |", indexPointer->data);
		indexPointer = indexPointer->link;
	}
	indexPointer = start;
	printf("\n ");
	while (indexPointer != NULL) {
		indexPointer = indexPointer->link;
		printf("----------------");
	}
	printf("\n\n");
}

void printAdvancedLinkedList() {
	node *indexPointer = start;
	int counter = 0;
	printf("Start %#010x  \n", start);
	printf(
			"--------------------------------------------------------------------\n");
	printf("node	|	Address		|	data	|	link	   |\n");
	printf(
			"--------------------------------------------------------------------\n");
	while (indexPointer != NULL) {

		printf("%d	|	", counter);
		printf("%#010x	|	", indexPointer);
		printf("%d	|	", indexPointer->data);
		printf("%#010x |\n", indexPointer->link);
		counter++;
		indexPointer = indexPointer->link;
		printf(
				"--------------------------------------------------------------------\n");
	}

}

void addNodeAtStart(int data) {
	node *newNode = (node*) malloc(sizeof(node));
	node *tempPointer = start;
	if (newNode != NULL) {
		start = newNode;
		newNode->data = data;
		newNode->link = tempPointer;
		printf("Node Added Successfully \n");
	}
}

void addNodeAtEnd(int data) {
	node *newNode = (node*) malloc(sizeof(node));
	node *tempPointer = start;
	if (newNode != NULL) {
		newNode->data = data;
		newNode->link = NULL;
		while (tempPointer->link != NULL) {

			tempPointer = tempPointer->link;
		}
		tempPointer->link = newNode;
		printf("Node Added Successfully \n");
	}
}

void addNodeAtIndex(int index, int data) {
	node *newNode = (node*) malloc(sizeof(node));
	node *indexPointer = start;
	node *tempPointer;
	int counter = 0;
	int noOfNodes = 0;
	while (indexPointer != NULL) {
		noOfNodes++;
		indexPointer = indexPointer->link;
	}

	indexPointer = start;

	if (index == 0) {
		addNodeAtStart(data);
	} else if (index == (noOfNodes - 1)) {
		addNodeAtEnd(data);
	} else if (index >= noOfNodes) {
		printf("index out of boundaries , max is %d", noOfNodes - 1);
	} else {

		if (newNode != NULL) {
			newNode->data = data;

			while (indexPointer->link != NULL) {

				if (index - counter == 1) {
					tempPointer = indexPointer->link;
					indexPointer->link = newNode;
					newNode->link = tempPointer;
					break;
				} else {
					counter++;
					indexPointer = indexPointer->link;
				}
			}
		}
		printf("Node Added Successfully \n");
	}
}

void deleteNode(int data) {

	node *indexPointer = start;
	node *tempPointer;
	if (indexPointer->data == data) {

		start = indexPointer->link;
		free(indexPointer);
		printf("Node deleted Successfully \n");
	} else {
		while (indexPointer->link != NULL) {
			if (indexPointer->link->data == data) {

				tempPointer = indexPointer->link;
				indexPointer->link = indexPointer->link->link;
				free(tempPointer);
				printf("Node deleted Successfully \n");
				break;
			} else {

				indexPointer = indexPointer->link;
			}
			if (indexPointer->link == NULL) {
				printf("data not found \n");
			}
		}
	}

}


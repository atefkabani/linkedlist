#include <stdio.h>
#include <stdlib.h>
#include "lib/LinkedList.h"

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int data, index, select, quit = 0;
	while (!quit) {
		printf("Select Option : \n");
		printf("1- Create Linked List \n");
		printf("2- Add Node at Start \n");
		printf("3- Add Node at Index \n");
		printf("4- Add Node at End \n");
		printf("5- Delete Node \n");
		printf("6- Print Simple Linked List \n");
		printf("7- Print advanced Linked List \n");
		printf("8- Quit \n");

		scanf("%d", &select);

		switch (select) {
		case 1:
			printf("Linked List Creation\n");
			printf("Enter data : ");
			scanf("%d", &data);
			createLinkedList(data);

			break;
		case 2:
			printf("Addition at start\n");
			printf("Enter data : ");
			scanf("%d", &data);
			addNodeAtStart(data);

			break;
		case 3:
			printf("Addition at index  \n");
			printf("Enter data : ");
			scanf("%d", &data);
			printf("Enter index : ");
			scanf("%d", &index);
			addNodeAtIndex(index, data);

			break;
		case 4:
			printf("Addition at end\n");
			printf("Enter data : ");
			scanf("%d", &data);
			addNodeAtEnd(data);

			break;
		case 5:
			printf("Delete Node\n");
			printf("Enter data : ");
			scanf("%d", &data);
			deleteNode(data);
			break;
		case 6:
			printSimpleLinkedList();
			break;
		case 7:
			printAdvancedLinkedList();
			break;
		case 8:
			quit = 1;
			break;
		default:
			printf("Invalid entry , try again \n");

		}
		printf("\n\n");

	}

	return 0;
}


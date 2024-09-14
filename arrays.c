//=========================================== Initializing and printing the array======================================
//  #include <stdio.h>
//  int main()
//  {
//      int a[50], size,i;
//      printf("Enter the size of the array:");
//      scanf("%d", &size);
//      printf("Enter the elements in the array:");
//      for ( i = 0; i < size; i++)
//      {
//          scanf("%d", &a[i]);
//      }
//      printf("The elements in array are:");
//      for (i = 0; i < size; i++)
//      {
//          printf("%d", a[i]);
//      }
//  }

// ================================================Inserting elements into array =============================================
// #include <stdio.h>
// int main()
// {
//     int a[50], i, size, pos, num;
//     printf("Enter the size of the array:");
//     scanf("%d", &size);
//     printf("Enter the elements into array:");
//     for (i = 0; i < size; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("Enter the number you want to insert:");
//     scanf("%d", &num);
//     printf("Enter the position you want to insert:");
//     scanf("%d", &pos);
//     if (pos < 0 || pos > size + 1)
//     {
//         printf("Enter correct position");
//     }
//     else
//     {
//         for (i = size - 1; i >= pos - 1; i--)
//         {
//             a[i + 1] = a[i];
//         }
//         a[pos - 1] = num;
//         size++;
//     }
//     for (i = 0; i < size; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     return 0;
// }

// ============================================inserting at starting and ending positions=============================
// #include <stdio.h>
// int main()
// {
//     int a[50], i, size, pos, num;
//     printf("Enter the size of the array:");
//     scanf("%d", &size);
//     printf("Enter the elements into array:");
//     for (i = 0; i < size; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("Enter the number you want to insert:");
//     scanf("%d", &num);
//     for (i = size - 1; i >= 0; i--)
//     {
//         a[i + 1] = a[i];
//     }
//     a[0] = num;
//     size++;
//     printf("The elements in array are:");
//     for (i = 0; i < size; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     return 0;
// }

// ==============================================deletion of elements================================
// #include <stdio.h>
// int main()
// {
//     int a[50], size, i, pos, value;
//     printf("Enter the size of the array:");
//     scanf("%d", &size);
//     printf("Enter the elements of the array:");
//     for (i = 0; i < size; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("Enter the position of the element you want to delete:");
//     scanf("%d", &pos);
//     if (pos <= 0 || pos > size)
//     {
//         printf("Invalid position");
//     }
//     else
//     {
//         value = a[pos - 1];
//         for (i = pos - 1; i < size - 1; i++)
//         {
//             a[i] = a[i + 1];
//         }
//         size--;
//     }
//     printf("The elements of the array after deletion are:");
//     for (i = 0; i < size; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     printf("The element deleted is:%d", value);
// }

// =========================================================pointers================================================
// #include <stdio.h>
// int main()
// {
//     int a[5], i;
//     int *q = a;
//     printf("Enter the elements of the array:");
//     for (i = 0; i < 5; i++)
//     {
//         scanf("%d", (a + i));
//         scanf("%d", &a[i]);
//     }
//     for (i = 0; i < 5; i++)
//     {
//         printf("%d", *(q + i));
//         printf("%d", a[i]);
//         printf("%d", *(a + i));
//     }
// }

// ================================================Implementation of Linked Lists================================================================

// #include <stdio.h>
// #include <stdlib.h> // for malloc

// // Define the structure for a node
// struct node
// {
//     int data;
//     struct node *next;
// };

// int main()
// {
//     struct node *head = NULL, *newnode, *temp;
//     int choice = 1; // Initialize choice to 1 so that it enters the loop

//     while (choice)
//     {
//         // Allocate memory for a new node
//         newnode = (struct node *)malloc(sizeof(struct node));

//         // Input the data for the new node
//         printf("Enter data for new node: ");
//         scanf("%d", &newnode->data);

//         // Set the next pointer of the new node to NULL
//         newnode->next = NULL;

//         // If the linked list is empty, make the new node the head
//         if (head == NULL)
//         {
//             head = newnode;
//             temp = newnode; // temp points to the last node
//         }
//         else
//         {
//             // Otherwise, link the new node to the last node and update temp
//             temp->next = newnode;
//             temp = newnode;
//         }

//         // Ask the user if they want to add another node
//         printf("Do you want to add more nodes? (1 for Yes, 0 for No): ");
//         scanf("%d", &choice);
//     }

//     // Print the linked list
//     temp = head;
//     printf("The linked list is: ");
//     while (temp != NULL)
//     {
//         printf("%d ", temp->data);
//         temp = temp->next;
//     }

//     return 0;
// }

// ==================================================Insertion into linked lists =================================
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// struct node *head = NULL;
// struct node *newnode;
// struct node *temp;
// int number;

// void print()
// {
//     temp = head;
//     printf("The linked list is:");
//     printf("[");
//     while (temp != 0)
//     {
//         printf("%d", temp->data);
//         temp = temp->next;
//     }
//     printf("]");
// }

// void createLinkedList()
// {
//     printf("Enter the number of nodes you want to create:");
//     scanf("%d", &number);
//     for (int i = 0; i < number; i++)
//     {
//         newnode = (struct node *)malloc(sizeof(struct node));
//         printf("Enter the data of the node:");
//         scanf("%d", &newnode->data);
//         newnode->next = NULL;
//         if (head == NULL)
//         {
//             head = temp = newnode;
//         }
//         else
//         {
//             temp->next = newnode;
//             temp = newnode;
//         }
//     }
//     print();
// }

// void insertAtBegin()
// {
//     int newData;
//     printf("Enter the data you want to insert at the beginning:");
//     scanf("%d", &newData);
//     newnode = (struct node *)malloc(sizeof(struct node));
//     newnode->data = newData;
//     newnode->next = head;
//     head = newnode;
//     print();
//     number++;
// }

// void insertAtEnd()
// {
//     int dataEnd;
//     newnode = (struct node *)malloc(sizeof(struct node));
//     printf("Enter the data you want to insert at the end:");
//     scanf("%d", &newnode->data);
//     newnode->next = NULL;
//     temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = newnode;
//     print();
//     number++;
// }

// void insertAtPosition()
// {
//     int pos;
//     int i = 1;
//     struct node *newnode, *temp;
//     printf("Enter the position you want to insert: ");
//     scanf("%d", &pos);
//     if (pos <= 0 || pos > number + 1)
//     {
//         printf("Invalid position\n");
//     }
//     else
//     {
//         newnode = (struct node *)malloc(sizeof(struct node));
//         if (newnode == NULL)
//         {
//             printf("Memory allocation failed\n");
//             return;
//         }
//         printf("Enter the data you want to insert: ");
//         scanf("%d", &newnode->data);
//         if (pos == 1)
//         {
//             newnode->next = head;
//             head = newnode;
//         }
//         else
//         {
//             temp = head;
//             while (i < pos - 1 && temp != NULL)
//             {
//                 temp = temp->next;
//                 i++;
//             }

//             if (temp != NULL)
//             {
//                 newnode->next = temp->next;
//                 temp->next = newnode;
//             }
//         }

//         print();
//     }
// }
// int main()
// {
//     int choice;
//     while (1)
//     {
//         printf("\n1. Create Linked List\n2. Insert at Beginning\n3. Insert at End\n4. Insert at Position\n5. Print Linked List\n6. Exit\n");
//         printf("Enter your choice:");
//         scanf("%d", &choice);
//         switch (choice)
//         {
//         case 1:
//             createLinkedList();
//             break;
//         case 2:
//             insertAtBegin();
//             break;
//         case 3:
//             insertAtEnd();
//             break;
//         case 4:
//             insertAtPosition();
//             break;
//         case 5:
//             print();
//             break;
//         case 6:
//             exit(0);
//         default:
//             printf("Invalid choice\n");
//         }
//     }
//     return 0;
// }
// ====================================addition of two linked lists =================================
// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// };

// struct node *head1 = NULL;
// struct node *head2 = NULL;
// struct node *result = NULL;
// struct node *newnode, *temp;

// int number;

// void print(struct node *head)
// {
//     temp = head;
//     printf("The linked list is: [");
//     while (temp != 0)
//     {
//         printf("%d", temp->data);
//         temp = temp->next;
//     }
//     printf("]\n");
// }

// void createLinkedList(struct node **head)
// {
//     printf("Enter the number of nodes you want to create: ");
//     scanf("%d", &number);
//     for (int i = 0; i < number; i++)
//     {
//         newnode = (struct node *)malloc(sizeof(struct node));
//         printf("Enter the data of the node: ");
//         scanf("%d", &newnode->data);
//         newnode->next = NULL;
//         if (*head == NULL)
//         {
//             *head = temp = newnode;
//         }
//         else
//         {
//             temp->next = newnode;
//             temp = newnode;
//         }
//     }
//     print(*head);
// }

// void addTwoLinkedLists(struct node *head1, struct node *head2)
// {
//     struct node *p1 = head1;
//     struct node *p2 = head2;
//     struct node *prev = NULL;
//     int carry = 0;

//     while (p1 != NULL || p2 != NULL || carry != 0)
//     {
//         int sum = carry;

//         if (p1 != NULL)
//         {
//             sum += p1->data;
//             p1 = p1->next;
//         }

//         if (p2 != NULL)
//         {
//             sum += p2->data;
//             p2 = p2->next;
//         }

//         carry = sum / 10;
//         sum = sum % 10;

//         newnode = (struct node *)malloc(sizeof(struct node));
//         newnode->data = sum;
//         newnode->next = NULL;

//         if (result == NULL)
//         {
//             result = newnode;
//         }
//         else
//         {
//             prev->next = newnode;
//         }
//         prev = newnode;
//     }

//     print(result);
// }

// int main()
// {
//     int choice;
//     while (1)
//     {
//         printf("\n1. Create Linked List 1\n2. Create Linked List 2\n3. Add Linked Lists\n4. Print Linked List 1\n5. Print Linked List 2\n6. Print Result\n7. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice)
//         {
//         case 1:
//             createLinkedList(&head1);
//             break;
//         case 2:
//             createLinkedList(&head2);
//             break;
//         case 3:
//             addTwoLinkedLists(head1, head2);
//             break;
//         case 4:
//             print(head1);
//             break;
//         case 5:
//             print(head2);
//             break;
//         case 6:
//             print(result);
//             break;
//         case 7:
//             exit(0);
//         default:
//             printf("Invalid choice\n");
//         }
//     }
//     return 0;
// }
// =================================deletion of elements in linked lists =================================================
// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *next;
// };

// struct node *head1 = NULL;
// struct node *result = NULL;
// struct node *newnode, *temp;

// int number;

// void print(struct node *head)
// {
//     temp = head;
//     printf("The linked list is: [");
//     while (temp != NULL)
//     {
//         printf("%d", temp->data);
//         temp = temp->next;
//         if (temp != NULL)
//             printf(", ");
//     }
//     printf("]\n");
// }

// void createLinkedList(struct node **head)
// {
//     printf("Enter the number of nodes you want to create: ");
//     scanf("%d", &number);
//     for (int i = 0; i < number; i++)
//     {
//         newnode = (struct node *)malloc(sizeof(struct node));
//         printf("Enter the data of the node: ");
//         scanf("%d", &newnode->data);
//         newnode->next = NULL;
//         if (*head == NULL)
//         {
//             *head = temp = newnode;
//         }
//         else
//         {
//             temp->next = newnode;
//             temp = newnode;
//         }
//     }
//     print(*head);
// }

// void deletenode(struct node **head)
// {
//     struct node *temp = *head, *prev = NULL;
//     int key;
//     printf("Enter the value to delete: ");
//     scanf("%d", &key);

//     if (temp != NULL && temp->data == key)
//     {7
//         *head = temp->next;
//         free(temp);
//         printf("Node with value %d deleted successfully\n", key);
//         return;
//     }

//     while (temp != NULL && temp->data != key)
//     {
//         prev = temp;
//         temp = temp->next;
//     }

//     if (temp == NULL)
//     {
//         printf("Node with value %d not found\n", key);
//         return;
//     }

//     prev->next = temp->next;
//     free(temp);
//     printf("Node with value %d deleted successfully\n", key);
// }

// int main()
// {
//     int choice;
//     while (1)
//     {n
//         printf("\n1. Create Linked List 1 \n2. Delete Node from List 1\n3. Print Linked List 1\n4. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice)
//         {
//         case 1:
//             createLinkedList(&head1);
//             break;
//         case 2:
//             deletenode(&head1);
//             break;
//         case 3:
//             print(head1);
//             break;
//         case 4:
//             exit(0);
//         default:
//             printf("Invalid choice\n");
//         }
//     }
//     return 0;
// }
// ================================================================================

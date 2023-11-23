#include <stdio.h>
#include <stdlib.h>

int *queue;
int front = -1, rear = -1;
int capacity;

int checkFull() {
  return ((front == rear + 1) || (front == 0 && rear == capacity - 1));
}

int checkEmpty() {
  return (front == -1);
}

void enqueue(int value) {
  if (checkFull())
    printf("Overflow condition\n");
  else {
    if (front == -1)
      front = 0;
    rear = (rear + 1) % capacity;
    queue[rear] = value;
    printf("%d was enqueued to circular queue\n", value);
  }
}

int dequeue() {
  int variable;
  if (checkEmpty()) {
    printf("Underflow condition\n");
    return -1;
  } else {
    variable = queue[front];
    if (front == rear)
      front = rear = -1;
    else
      front = (front + 1) % capacity;
    printf("%d was dequeued from circular queue\n", variable);
    return 1;
  }
}

void print() {
  int i;
  if (checkEmpty())
    printf("Nothing to dequeue\n");
  else {
    printf("\nThe queue looks like: \n");
    for (i = front; i != rear; i = (i + 1) % capacity)
      printf("%d ", queue[i]);
    printf("%d \n\n", queue[i]);
  }
}

int search(int value) {
  int i, found = 0;
  if (checkEmpty()) {
    printf("Queue is empty, nothing to search\n");
    return -1;
  } else {
    for (i = front; i != rear; i = (i + 1) % capacity) {
      if (queue[i] == value) {
        found = 1;
        break;
      }
    }
    if (queue[i] == value) {
      found = 1;
    }
  }
  return found;
}

int main() {
  int choice, value, result;

  printf("Enter the size of the circular queue: ");
  scanf("%d", &capacity);

  // Dynamically allocate memory for the circular queue
  queue = (int *)malloc(capacity * sizeof(int));

  do {
    printf("\n1. Enqueue\n2. Dequeue\n3. Print\n4. Search\n5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        printf("Enter the value to enqueue: ");
        scanf("%d", &value);
        enqueue(value);
        break;

      case 2:
        dequeue();
        break;

      case 3:
        print();
        break;

      case 4:
        printf("Enter the value to search: ");
        scanf("%d", &value);
        result = search(value);
        if (result == 1)
          printf("%d is in the circular queue\n", value);
        else
          printf("%d is not in the circular queue\n", value);
        break;

      case 5:
        printf("Exiting program\n");
        break;

      default:
        printf("Invalid choice\n");
    }
  } while (choice != 5);

  // Free the dynamically allocated memory
  free(queue);

  return 0;
}

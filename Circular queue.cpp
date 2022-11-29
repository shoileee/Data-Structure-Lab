#include <iostream>
#define SIZE 5

using namespace std;


  int items[SIZE], front, rear;


  Queue(){
    front = -1;
    rear = -1;
  }

  bool isFull() {
    if (front == 0 && rear == SIZE - 1) {
      return true;
    }
    if (front == rear + 1) {
      return true;
    }
    return false;
  }


  bool isEmpty() {
    if (front == -1)
      return true;
    else
      return false;
  }

  bool enQueue(int element) {
    if (isFull())
        {
      cout << "Queue is full"<<endl;
    }
    else {
      if (front == -1) front = 0;
      rear = (rear + 1) % SIZE;
      items[rear] = element;
      cout << endl
         << "Insert Element: " << element<<endl;
    }
  }

  int deQueue() {
    int element;
    if (isEmpty())
    {
      cout <<"Queue is empty" <<endl;
      return (-1);
    }
    else {
      element = items[front];
      if (front == rear)
      {
        front = -1;
        rear = -1;
      }
    else {
        front = (front + 1) % SIZE;
      }
      return (element);
    }
  }

  void display() {

    int i;
    if (isEmpty()) {
      cout << "Empty Queue" << endl;
    } else {
      cout << "\nFront: " << front<<endl;
      cout << "\nItems: "<<endl;
      for (i = front; i != rear; i = (i + 1) % SIZE)
        cout << items[i];
      cout << items[i];
      cout << endl
         << "\nRear:" << rear;
    }
  }
;

int main() {



  deQueue();
  enQueue(8);
  enQueue(18);
  enQueue(28);
  enQueue(38);
  enQueue(48);


  enQueue(58);

  display();

  int element = deQueue();

  if (element!= -1)
    cout << endl
       << "Deleted Element is: " << element;

  display();
  enQueue(68);
  display();
  enQueue(78);

  return 0;
}

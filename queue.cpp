#include <iostream>
using namespace std;

int que[5];
int head = 0;
int tail = 0;
int maxSize = 5;

bool isEmpty() {
    if ((head == 0 && tail == 0) || (head == tail)) {
        return true;
    }
    else {
        return false;
    }
}

bool isFull() {
    if (tail == maxSize) {
        return true;
    }
    else {
        return false;
    }
}

bool enQueue(int elem) {
    cout << "EnQueue: " << elem << endl;
    cout << "Current Head: " << head << " " << "Current Tail: " << tail << endl;
    if (isFull()) {
        cout << "Queue is Full" << endl;
        return false;
    }
    else {
        que[tail] = elem;
        tail = tail + 1;
        cout << "New Head: " << head << " " << "New Tail: " << tail << endl;
        return true;
    }
}

bool deQueue() {
    cout << "Dequeue:" << endl;
    cout << "Current Head: " << head << " " << "Current Tail: " << tail << endl;
    if (isEmpty()) {
        cout << "Queue is Empty" << endl;
        return true;
    }
    else {
        cout << "Dequeue Element: " <<  que[head] << endl;
        head = head + 1;
        cout << "New Head: " << head << " " << "New Tail: " << tail << endl;
        return false;
    }
}

int frontElement() {

}

void show() {
    if(isEmpty){



       cout << "NOT SHOW"<<endl;
        }


        for(int i=head ; i<=tail ; i++)
        cout<<que[head]<<endl;
}

int main()
{
    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    enQueue(50);
    enQueue(60);

    deQueue();
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    deQueue();

    frontElement();

   show();
   return 0;
}

class MyCircularQueue
{
private:
  vector<int> q;
  int front, rear, size, capacity;

public:
  MyCircularQueue(int k)
  {
    q.resize(k);
    capacity = k;
    front = 0;
    rear = 0;
    size = 0;
  }

  bool enQueue(int value)
  {
    if (isFull())
      return false;
    q[rear] = value;
    rear = (rear + 1) % capacity;
    size++;
    return true;
  }

  bool deQueue()
  {
    if (isEmpty())
      return false;
    front = (front + 1) % capacity;
    size--;
    return true;
  }

  int Front()
  {
    if (isEmpty())
      return -1;
    return q[front];
  }

  int Rear()
  {
    if (isEmpty())
      return -1;
    return q[(rear - 1 + capacity) % capacity];
  }

  bool isEmpty()
  {
    return size == 0;
  }

  bool isFull()
  {
    return size == capacity;
  }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
class Stack
{
    int size, top;
    int *arr;

public:
    Stack();
    Stack(int);
    Stack(Stack &);
    ~Stack();

    bool push(int);
    int pop();
    int peek();
    bool isEmpty();
    bool isFull();

    void display();
};
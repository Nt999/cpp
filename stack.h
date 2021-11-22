class Stack{
protected:
    double *_values;
    int _size, _next;

    bool isFull();
    void increase();

public:
    Stack();// konstruktor
    bool isEmpty();
    void push(double value);
    float top();
    void pop();
    ~Stack();//destruktor
};
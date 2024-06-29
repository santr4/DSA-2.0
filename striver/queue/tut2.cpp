// 232. Implement Queue using Stacks

class MyQueue
{
public:
    stack<int> input;
    stack<int> output;
    MyQueue()
    {
    }

    void push(int x)
    {
        input.push(x);
    }

    int pop()
    {
        int pop = -1;
        if (!output.empty())
        {
            pop = output.top();
        }
        else
        {
            while (!input.empty())
            {
                output.push(input.top());
                input.pop();
            }
            pop = output.top();
        }
        output.pop();
        return pop;
    }

    int peek()
    {
        int front = -1;
        if (!output.empty())
        {
            front = output.top();
        }
        else
        {
            while (!input.empty())
            {
                output.push(input.top());
                input.pop();
            }
            front = output.top();
        }
        return front;
    }

    bool empty()
    {
        bool x = false;
        if (input.empty() && output.empty())
        {
            x = true;
        }
        return x;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */



// Desc:  Implementation of an int sequence with push/pop in a LIFO order
class Stack {

    private:

        // Desc:  arr = static array of capacity STACKCAP
        //        size = the number of elements presently in the stack
        //  Inv:  Follows the A2 Spec, namely that the stack elements 
        //        are in order within A[0..size-1], where the top of
        //        the stack is A[0].
        static const unsigned STACKCAP = 8;
        int arr[STACKCAP];
        unsigned size;

    public:

        // Desc:  Object constructor
        // Post:  Initialize the size of the stack to 0
        Stack();


        // Desc:  Insert element x to the top of the stack.
        //  Pre:  size < STACKCAP
        // Post:  Insert element x at index 0 in the array and shift all elements in the array index + 1
        void push(int x);


        // Desc:  Remove and return element at the top of the stack.
        //  Pre:  size > 0
        // Post:  Remove and return element from the top of the stack and shift all elements in the array index - 1
        int pop();


        // Desc:  Return the topmost element of the stack.
        //  Pre:  size > 0
        // Post:  Return the element from the stack at index 0
        int peek() const;


        // Desc:  Check if the stack is empty.
        // Post:  Returns true/false whether the stack is empty
        bool isEmpty() const;

};



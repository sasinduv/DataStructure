typedef struct _stack {
    int data[10];
    int top;
} stack;

//initialize the stack 
 void initialize (stack *s){
    s->top = -1;
 }

 //push operation to add an element to the stack

 void push (stack *s, int d) {
    if(s->top == 9) {
        printf("Stack overflow\n");
    } else {
        s->top++;
        s->data[s->top] = d;
    }
 }
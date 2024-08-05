#include<iostream>
using namespace std;
class Stack{
    int *arr;
    int size;
    int topIndex;
    
    public:
     Stack(int n){
        this->size = n;
        arr = new int[n];
        topIndex = -1;
     }
     void push(int value){
         if(topIndex < size -1){
             arr[++topIndex] = value;
         }
    }
    void pop(){
        if(topIndex != -1){
            topIndex--;
        }
    }
    int getSize(){
        return topIndex+1;
    }
    int top(){
         if (topIndex >= 0) {
            return arr[topIndex];
        }
        return -1; // or throw an exception
    }
    bool isEmpty(){
        return topIndex == -1;
    }
};
int main() {
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;

    Stack st(n); // Create a stack object with the given size

    // Test case 1: Push and check size
    st.push(5);
    cout << "Size after pushing 5: " << st.getSize() << endl;

    // Test case 2: Push and check top element
    st.push(10);
    cout << "Top element after pushing 10: " << st.top() << endl;

    // Test case 3: Pop and check size
    st.pop();
    cout << "Size after popping: " << st.getSize() << endl;

    // Test case 4: Check isEmpty
    if (st.isEmpty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    return 0;
}
/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */
void QueueStack ::push(int x) {
    // code here
    q1.push(x);
    while(!q2.empty()){
        int top=q2.front();
        q1.push(top);
        q2.pop();
    }
    while(!q1.empty()){
        int top=q1.front();
        q2.push(top);
        q1.pop();
    }
}

int QueueStack ::pop() {

    if(q2.empty()) return -1;
    else{
        int top= q2.front();
        q2.pop();
        return top;
    }
}
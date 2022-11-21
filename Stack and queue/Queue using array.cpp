#include<iostream>

#include<queue>

using namespace std;

class Queue{

    int *arr;

    int size;

    int qfront;

    int rear;

public:

Queue(){

    int arr[10001];

    qfront=0;

    rear=0;

}

void push(int element){

    if(rear==size){

       cout<<"queue is full"<<endl;

    }

    else{

        arr[rear]=element;

        rear++;

    }

}

int pop(){

    if(qfront==rear){

        

        return -1;

    }

    else{

        arr[qfront]=-1;

        qfront++;

    }

}

bool empty(){

    if(qfront==rear){

        return true;

    }

    else{

        return false;

    }

}

int front(){

    if(qfront==rear){

        return -1;

    }

    else{

        return arr[qfront];

    }

}

};

int main() {

    queue<int> q;

    q.push(23);

    q.push(34);

    q.push(12);

    cout<<q.size()<<endl;

    cout<<q.front()<<endl;

    q.pop();

    cout<<q.front()<<endl;

    

    if(q.empty()){

         cout<<"empty queue"<<endl;

    }

    else{

        cout<<"non empty"<<endl;

    }

    return 0;

}

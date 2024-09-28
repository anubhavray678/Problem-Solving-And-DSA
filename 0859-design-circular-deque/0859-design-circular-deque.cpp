class MyCircularDeque {
private:
   vector<int> q;
    int k;
public:
    MyCircularDeque(int k) {
        this->k = k;
    }
    
    bool insertFront(int value) {
        if (q.size() == k) return false; 
        // q.push_front(value);
        // int prev = q[0];
        // q[0] = value;
        // int next = 0;

        // for(int i = 1; i<q.size(); ++i){
        //     next = q[i];
        //     q[i] = prev;
        //     prev = next;
        // }
        // rear++;
        q.insert(q.begin(), value);
        return true;
    }
    
    bool insertLast(int value) {
        if (q.size() == k) return false; 
        q.push_back(value);
        // rear++;
        return true;
    }
    
    bool deleteFront() {
        if(q.empty())return false;
       
        // q[0] = 0;
        // for(int i = 0; i<q.size()-1; ++i){
        //     swap(q[i], q[i+1]);
        // }
        // q.pop_back();
        // front++;
        q.erase(q.begin());  
        return true;

    }
    
    bool deleteLast() {
        if(q.empty())return false;
        q.pop_back();
        // rear--;
        return true;
    }
    
    int getFront() {
        return q.empty() ? -1 : q.front();
    }
    
    int getRear() {
        return q.empty() ? -1 : q.back();
    }
    
    bool isEmpty() {
        return q.empty();
    }
    
    bool isFull() {
        return (q.size() == k);
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */
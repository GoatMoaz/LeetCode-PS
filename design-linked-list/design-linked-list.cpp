class MyLinkedList {
private:
    class Node{
    public:
        int val;
        Node* next;
        Node(int val) : Node(val,NULL){}
        Node(int val , Node* next) : val(val),next(next){}
    };
    Node* head;
public:
    MyLinkedList() {
        head=NULL;
    }
    int get(int index) {
        Node* cur=head;
        for (int i = 0; i < index && cur; ++i) {
            cur=cur->next;
        }
        if(!cur)
            return -1;
        return cur->val;
    }
    void addAtHead(int val) {
        head = new Node(val,head);
    }

    void addAtTail(int val) {
        if (head==NULL)
            head = new Node(val);
        else{
            Node* pre=head;
            while(pre->next)
                pre=pre->next;
            pre->next=new Node(val);
        }
    }

    void addAtIndex(int index, int val) {
        if(index==0)
            addAtHead(val);
        else{
            Node* cur=head;
            for (int i = 1; i < index && cur ;  ++i) {
                cur=cur->next;
            }
            if(cur)
                cur->next= new Node(val , cur->next);
        }
    }

    void deleteAtIndex(int index) {
        if (index==0){
            if (head){
                Node* del=head;
                head=head->next;
                delete del;
            }
        }
        else{
            Node* cur=head;
            for (int i = 1; i < index && cur; ++i) {
                cur=cur->next;
            }
            if(cur && cur->next) {
                Node* del = cur->next;
                cur->next=del->next;
                delete del;
            }

        }
    }
};
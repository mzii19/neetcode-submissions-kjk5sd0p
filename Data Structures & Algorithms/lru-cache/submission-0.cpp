class LRUCache {
public:
    struct Node{
        int key,value;
        Node*next;
        Node*prev;
        Node(int k,int v):key(k),value(v),next(nullptr),prev(nullptr){}
    };

    Node* head;
    Node* tail;
    int capacity;
    unordered_map<int,Node*>cache;

    void removeNode(Node* node){
        node->prev->next=node->next;
        node->next->prev=node->prev;
    }
    void insertNode(Node* node){
        node->prev = head;
        node->next = head->next;
        head->next->prev = node;   // fix old front's prev FIRST
        head->next = node;         // THEN move head's pointer

    }

    LRUCache(int capacity) {
        this->capacity=capacity;
        head=new Node(-1,-1);
        tail=new Node(-1,-1);
        head->next=tail;
        tail->prev=head;

    }
    
    int get(int key) {
        if(cache.find(key)==cache.end()) return -1;

        Node* node=cache[key];
        removeNode(node);
        insertNode(node);
        return node->value;
    }
    
    void put(int key, int value) {
        if(cache.find(key)!=cache.end()){
            Node* node=cache[key];
            node->value=value;
            
            removeNode(node);
            insertNode(node);
            return;
        }

        if(cache.size()==capacity){
            Node* lru=tail->prev;
            removeNode(lru);
            cache.erase(lru->key);
            delete lru;
        }

        Node* newNode=new Node(key,value);
        insertNode(newNode);
        cache[key]=newNode;
        
    }
};

class Node {
public:
    int key;
    int value;
    Node* prev;
    Node* next;
    
    Node(int k, int v) : key(k), value(v), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;
    
public:
    DoublyLinkedList() {
        head = new Node(0, 0);
        tail = new Node(0, 0);
        head->next = tail;
        tail->prev = head;
    }
    
    void addNodeToFront(Node* node) {
        node->next = head->next;
        node->prev = head;
        head->next->prev = node;
        head->next = node;
    }
    
    void removeNode(Node* node) {
        Node* prevNode = node->prev;
        Node* nextNode = node->next;
        prevNode->next = nextNode;
        nextNode->prev = prevNode;
    }
    
    Node* removeLastNode() {
        Node* lastNode = tail->prev;
        removeNode(lastNode);
        return lastNode;
    }
};




class LRUCache {
private:
    int capacity;
    unordered_map<int, Node*> cache; // key -> node
    DoublyLinkedList dll;
    
    void makeMostRecentlyUsed(int key) {
        Node* node = cache[key];
        dll.removeNode(node);
        dll.addNodeToFront(node);
    }

public:
    LRUCache(int capacity) {
        this->capacity = capacity;
    }
    
    int get(int key) {
        if (cache.find(key) == cache.end()) {
            return -1;
        }
        makeMostRecentlyUsed(key);
        return cache[key]->value;
    }
    
    void put(int key, int value) {
        if (cache.find(key) != cache.end()) {
            Node* node = cache[key];
            node->value = value;
            makeMostRecentlyUsed(key);
        } else {
            if (cache.size() >= capacity) {
                Node* lastNode = dll.removeLastNode();
                cache.erase(lastNode->key);
                delete lastNode;
            }
            Node* newNode = new Node(key, value);
            dll.addNodeToFront(newNode);
            cache[key] = newNode;
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
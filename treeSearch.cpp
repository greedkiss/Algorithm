//广度优先
struct Node{
    bool have_value;
    int v;
    Node *left, *right;
    Node():have_value(false), left(NULL), right(NULL){}
};
Node *root
//递归先序
void pre(Node *p){
    if(p == NULL)
        return
    printf("%d", p->v);
    pre(p->left);
    pre(p->right);
}
//中序
void mid(Node *p){
    if(p == NULL)
        return
    mid(p->left);
    printf();
    mid(p->right);
}
//后续
void back(Node *p){
    if(p == NULL)
    return 
    back(p->left)
    back(p->right)
    printf()
}
//非递归先序
void preUnRecur (Node * head){
    if(head !== NULL){
        stack<Node*> stack;
        stack.push(head);
        Node* cur;
        while(!stack.empty()){
            cur = stack.top();
            stack.pop();
            if(cur->right){
                stack.push(cur->right);
            }
            if(cur->left){
                stack.push(cur->left);
            }
        }
    }
}
//终须
void mid(Node * head){
    if(head!==NULL){
        stack<Node*> stack;
        stack.push(head);
        Node * cur = head->left;
        while(!stack.empty()){
            while(cur!==NULL){
                stack.push(cur);
                cur = cur->left;
            }        
            cur = stack.top();
            stack.pop();
            printf();
            cur = cjjjjjur->right;
        }
    }
}
}

//后续
//solution1 : 两个栈
//solution2 : 一个栈三中情况

//广度优先
void wide(Node * head){
    queue<Node *> queue;
    queue.push(head);
    Node * cur;
    while(!queue.isempty()){
        cur = queue.front();
        queue.pop();
        printf();
        if(cur->left){
            queue.push(cur->left);
        }
        if(cur-rigt){
            queue.push(cur->right);
        }
    }
}
void mid(Node *head){
    if(head != NULL){
        stack<Node *> stack;
        stack.push(head);
        Node * cur = head;
        while(!stack.isempty() || cur != NULL){
            while(cur != NULL){
                stack.push(cur);
                cur = cur.left;
            }
            cur = stack.top();
            stack.pop();
            printf();
            cur = cur.right;
        }

    }
}

//动态规划---数字三角形



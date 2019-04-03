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

//动态规划---数字三角形--记忆递归
int dynamic(int i , int j){
    if(!d(i,j)) return d(i,j);
    return d(i, j) = i = n? a[i][j] : max(dynamic(i+1, j), dynamic(i+1, j+1));
}


//动态规划--有向图--嵌套矩形
memset(d, -1, sizeof(d))
int dynamic(int s){
    int & ans = d[s];
    if(ans != -1)
        return ans;
    ans = 0;
    for(int j = 0; j<n ;j++){
        if(map[i][j])
            ans = max(ans, dynaamic(j) + 1)    
    }
}

//回溯法--八皇后
void search (int cur){
    if(cur== n) tot++;
    for(int i = 0; i<n;i++){
        if(!flag[0][i] && !flag[1][cur+i] && !flag[2][cur - i +n]){
            flag[0][i] = flag[1][cur+i] = flag[2][cur - i +n] = 1;
            search(cur++);
            flag[0][i] = flag[1][cur+i] = flag[2][cur - i +n] = 0;            
        }
    }
}

//多段图最短路
int ans = INF;
for(int i = n-1; i>=0;i--){
    for(int j = 0; j<m ;j++){
        if( i == n-1){
             d[i][j] = a[i][j];
        }
       else{
            row[2] = {j-1, j, j+1};
            if(j = 0) row[0] = m-1;
            if(j = m-1) row[2] = 0;
            sort(row, row+3);
            d[i][j] = INF;
            for(int k= 0 ; k<3;k++){
                int vis= d[row[k]][j] + a[i][j];
                if(d[i][j]>vis){
                    d[i][j] = vis;
                    next[i]= row[k];
                }
            }
       }
    }
    if(j == 0 && d)
}
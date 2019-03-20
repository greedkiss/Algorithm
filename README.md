# Algorithm
learn from zero to hero</br>
string str---</br>
< strchr(string, char)</br>
< strcpy(string, string)</br>
< strcmp(a, b)</br>
< strcat(a, b)</br>
< sprintf(string, "%d%d",a ,b)</br>
< strlen(string)</br>
< scanf("%s", str) this indicate the address of str and that must be an array of char</br>
< strrchr(str, char) from end to begin, find whether there is a char of the string meet the char we input</br>
</br>
the space and sth will not be readed if you use the scanf ,otherwise , the only method to have it is using getchar()</br>
this is a function , you can use it like</br>
int c;</br>
c= getchar();</br>
to judge whether it ends, using != EOF</br>
while((c = getchar())!=EOF)</br>
Graduate entrance exam!</br>
while(scanf("%d %d %d", &a, &b ,&c) == 3)
注意能用到全局变量的话就不用指针</br>
#include<algorithm></br>
sort(a, a+n, method)</br>
如果是两个参数从小到大排序</br>
lower_bound(a, a+n , x) - a</br>
查找x在a中返回偏移值</br>
#include<vector></br>
vector <int> a[maxn]</br>
就是一个二维数组，push_back()数组最后添加数据，pop_back()删除最后的数据，resize(h)删除h后的数组元素，size()返回数组长度，insert()插入元素到任意位置</br>
>>>>>>>>>>>>树  
高度k -->  结点总数pow(2,k) - 1, 叶子节点pow(2, k-1)  
设标号为i, 左节点 2i, 右节点2i+1  


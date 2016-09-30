/*
 1.建立具有三个进程控制块节点的队列   !
 2.要求进程控制块队列按优先权从小到大排序
 3.能将新节点插入到链表的正确位置
 4.能删除给定条件的节点（比如：删除PID=n 的节点）
 5.每次操作后界面总能显示按顺序输出的节点信息

*/
#include "types.h"
#include "work.h"
#include "pages.h"
#include <windows.h>

void systemInit();
int main(){
    int i;
    systemInit();//初始化系统
    while(1){
        MenuPage();
    }
    return 0;
}
//申请三个节点加入到link里面
void systemInit(){
    system("mode con cols=45 lines=35");
    node *orNode1;node *orNode2;node *orNode3;node *first;
    InitNode(&orNode1,10,5,3);
    InitNode(&orNode2,20,6,2);
    InitNode(&orNode3,30,7,2);
    InitNode(&first,0,0,0);
    link = (Link *)malloc(sizeof(Link));
    link->first = first;
    InsertNode(orNode3);
    InsertNode(orNode2);
    InsertNode(orNode1);
}

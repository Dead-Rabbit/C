int InsertNode(node *newNode){
    //如果链表中没有任何节点
    if(link->first->next == NULL){
        link->first->next = newNode;
        return 0;
    }
    //比较进行插入
    node *point = link->first;
    while(point->next != NULL){
        if(newNode->prio <= point->next->prio){
            newNode->next = point->next;
            point->next = newNode;
            return 0;
        }
        point = point->next;
    }
    point->next = newNode;
    return 0;
}
int deleteById(int id){
    //若表为空
    if(link->first->next == NULL)
        return 0;
    node *point = link->first->next;
    node *prePoint = link->first;
    while(point != NULL){
        if(point->id == id){
            prePoint->next = point->next;
            return 1;
        }
        point = point->next;
        prePoint = prePoint->next;
    }
    return 2;
}
int deleteByState(int state){
    int num = 0;
    if(link->first->next == NULL)
        return 0;
    node *point = link->first->next;
    node *prePoint = link->first;
    while(point != NULL){
        if(point->state == state){
            prePoint->next = point->next;
            num++;
        }else{
            prePoint = prePoint->next;
        }
        point = point->next;
    }
    if(num == 0)
        return 2;
    return 1;
}
int deleteByPrio(int prio){
    int num = 0;
    if(link->first->next == NULL)
        return 0;
    node *point = link->first->next;
    node *prePoint = link->first;
    while(point != NULL){
        if(point->prio == prio){
            prePoint->next = point->next;
            num++;
        }else{
            prePoint = prePoint->next;
        }
        point = point->next;
    }
    if(num == 0)
        return 2;
    return 1;
}

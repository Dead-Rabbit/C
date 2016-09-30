/*
┼ ─ │ ┌ ┐ └ ┘ ├ ┤ ┬ ┴
*/
void MenuPage(){
    fflush(stdin);
    system("cls");
    char choose;
    printf("┌────────────────────┐\n");
    printf("│               1.创建进程               │\n");
    printf("├────────────────────┤\n");
    printf("│               2.杀死进程               │\n");
    printf("├────────────────────┤\n");
    printf("│               3.退出程序               │\n");
    printf("└────────────────────┘\n");
    printf("输入选择:\n\n");
    printf("*********************************************\n");
    showLink();
    gotoxy(10,7);
    scanf("%c",&choose);
    switch(choose){
        case '1':CreatePate();break;
        case '2':DeletePage();break;
        case '3':exit(0);break;
    }
}
void CreatePate(){
    fflush(stdin);
    int id,prio,state;
    system("cls");
    printf("┌────────────────────┐\n");
    printf("│            进程ID:                     │\n");
    printf("├────────────────────┤\n");
    printf("│            优先级：                    │\n");
    printf("├────────────────────┤\n");
    printf("│              状态：                    │\n");
    printf("└────────────────────┘\n\n\n");
    printf("*********************************************\n");
    showLink();
    gotoxy(22,1);
    scanf("%d",&id);
    gotoxy(22,3);
    scanf("%d",&prio);
    gotoxy(22,5);
    scanf("%d",&state);
    node *newNode;InitNode(&newNode,id,prio,state);
    InsertNode(newNode);
}
void DeletePage(){
    fflush(stdin);
    system("cls");
    char choose;
    printf("┌────────────────────┐\n");
    printf("│               1.根据ID                 │\n");
    printf("├────────────────────┤\n");
    printf("│               2.根据优先级             │\n");
    printf("├────────────────────┤\n");
    printf("│               3.根据状态               │\n");
    printf("├────────────────────┤\n");
    printf("│               4.返回上级               │\n");
    printf("└────────────────────┘\n");
    printf("输入选择:\n\n");
    printf("*********************************************\n");
    showLink();
    gotoxy(10,9);
    scanf("%c",&choose);
    switch(choose){
        case '1':ByIdPage();break;
        case '2':ByPrioPage();break;
        case '3':ByStatePage();break;
        case '4':MenuPage();break;
    }
}
void ByIdPage(){
    fflush(stdin);
    int id;
    system("cls");
    printf("┌────────────────────┐\n");
    printf("│            进程ID:                     │\n");
    printf("└────────────────────┘\n\n");
    printf("*********************************************\n");
    showLink();
    gotoxy(22,1);
    scanf("%d",&id);
    deleteById(id);
}
void ByPrioPage(){
    fflush(stdin);
    int prio;
    system("cls");
    printf("┌────────────────────┐\n");
    printf("│            进程优先级:                 │\n");
    printf("└────────────────────┘\n\n");
    printf("*********************************************\n");
    showLink();
    gotoxy(26,1);
    scanf("%d",&prio);
    deleteByPrio(prio);
}
void ByStatePage(){
    fflush(stdin);
    int state;
    system("cls");
    printf("┌────────────────────┐\n");
    printf("│            进程状态:                   │\n");
    printf("└────────────────────┘\n\n");
    printf("*********************************************\n");
    showLink();
    gotoxy(24,1);
    scanf("%d",&state);
    deleteByState(state);
}
void showLink(){
    node *point;
    point = link->first->next;
    printf("┌──────┬──────┬──────┐\n");
    printf("│   进程ID   │   优先级   │    状态    │\n");
    while(point != NULL){
        printf("├──────┼──────┼──────┤\n");
        printf("│%12d│%12d│%12d│\n",point->id,point->prio,point->state);
        point = point->next;
    }
    printf("└──────┴──────┴──────┘\n");
}

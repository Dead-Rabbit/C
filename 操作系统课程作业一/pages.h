/*
�� �� �� �� �� �� �� �� �� �� ��
*/
void MenuPage(){
    fflush(stdin);
    system("cls");
    char choose;
    printf("��������������������������������������������\n");
    printf("��               1.��������               ��\n");
    printf("��������������������������������������������\n");
    printf("��               2.ɱ������               ��\n");
    printf("��������������������������������������������\n");
    printf("��               3.�˳�����               ��\n");
    printf("��������������������������������������������\n");
    printf("����ѡ��:\n\n");
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
    printf("��������������������������������������������\n");
    printf("��            ����ID:                     ��\n");
    printf("��������������������������������������������\n");
    printf("��            ���ȼ���                    ��\n");
    printf("��������������������������������������������\n");
    printf("��              ״̬��                    ��\n");
    printf("��������������������������������������������\n\n\n");
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
    printf("��������������������������������������������\n");
    printf("��               1.����ID                 ��\n");
    printf("��������������������������������������������\n");
    printf("��               2.�������ȼ�             ��\n");
    printf("��������������������������������������������\n");
    printf("��               3.����״̬               ��\n");
    printf("��������������������������������������������\n");
    printf("��               4.�����ϼ�               ��\n");
    printf("��������������������������������������������\n");
    printf("����ѡ��:\n\n");
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
    printf("��������������������������������������������\n");
    printf("��            ����ID:                     ��\n");
    printf("��������������������������������������������\n\n");
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
    printf("��������������������������������������������\n");
    printf("��            �������ȼ�:                 ��\n");
    printf("��������������������������������������������\n\n");
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
    printf("��������������������������������������������\n");
    printf("��            ����״̬:                   ��\n");
    printf("��������������������������������������������\n\n");
    printf("*********************************************\n");
    showLink();
    gotoxy(24,1);
    scanf("%d",&state);
    deleteByState(state);
}
void showLink(){
    node *point;
    point = link->first->next;
    printf("���������������Щ������������Щ�������������\n");
    printf("��   ����ID   ��   ���ȼ�   ��    ״̬    ��\n");
    while(point != NULL){
        printf("���������������੤�����������੤������������\n");
        printf("��%12d��%12d��%12d��\n",point->id,point->prio,point->state);
        point = point->next;
    }
    printf("���������������ة������������ة�������������\n");
}

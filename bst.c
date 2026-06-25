#include<stdio.h>
#include<stdlib.h>
 
struct tree
{
    int data;
    struct tree *left,*right;
};

typedef struct tree *node;

node create(int x)
{
    node temp = (node)malloc(sizeof(struct tree));
    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
node insert(node head,int x)
{
    if(head == NULL)
    {
        printf("inserted\n");
        return create(x);
    }
    
    if(x < head->data)
        head->left = insert(head->left,x);
    else if(x > head->data)
    {
        head->right = insert(head->right,x);
    }
    else
    printf("element already exist\n");
    return head;
}

node search(node head, int x)
{
    if(head == NULL)
    {
        return NULL;
    }
    if(head->data == x)
    return head;
    
    if(x > head->data)
    {
        return search(head->right,x);
    }
    else 
    {
        return search(head->left , x);
    }
}

void inorder(node head)
{
    if(head == NULL)
        return;

    inorder(head->left);
    printf("%d ", head->data);
    inorder(head->right);
}

node min(node head)
{
    while(head->left != NULL)
    {
        head = head->left;
    }
    return head;
}


node del(node head,int x)
{
    if(head == NULL)
    {
        printf("tree is empty\n");
        return head;
    }
    
    if(x > head->data)
    {
        head->right = del(head->right,x);
    }
    else if(x < head->data)
    {
        head->left = del(head->left,x);
    }
    else
    {
        if(head->left ==  NULL)
        {
            node temp = head->right;
            free(head);
            return temp;
        }
        else if(head->right == NULL)
        {
            node temp = head->left;
            free(head);
            return temp;
        }
        else
        {
            node temp = min(head->right);
            head->data = temp->data;
            head->right =  del(head->right,temp->data);
        }
    }
    return head;
}


void main()
{
    node head = NULL;
    int ch,x;
    while(1)
    {
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.search\n");
        printf("4.Inorder\n");
        printf("5.exit\n");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1:
            printf("Enter the value : ");
            scanf("%d",&x);
            head = insert(head,x);
            break;
            
            case 2:
            printf("Enter the value : ");
            scanf("%d",&x);
            head = del(head,x);
            printf("Deleted\n");
            break;
             
            case 3:
            printf("Enter the value : ");
            scanf("%d",&x);
            node v = search(head,x);
            if(v == NULL)
            printf("not found\n");
            else
            printf("found\n");
            break;
            
            case 4:
            inorder(head);
            printf("\n");
            break;
            
            case 5:
            exit(0);
            
            default :
            printf("invalid\n");
        }
    }
}
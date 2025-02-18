int top = -1;
inp_array[5];
void push();
void pop();
void show();
int stackDemo()
{
    int choice;

    while (1)
    {
        printf("\nPerform operations on the stack:\n");
        printf("1.Push the element\n2.Pop the element\n3.Show\n4.End");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:push();break;
            case 2:pop();break;
            case 3:show();break;
            case 4:exit(0);
            default:printf("Invalid choice!!\n");
        }
    }
}

void push()
{
    int x;

    if (top == 5 - 1)
    {
        printf("Overflow!!");
    }
    else
    {
        printf("\nEnter the element to be added onto the stack: ");
        scanf("%d", &x);
        top++;
        inp_array[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nPopped element: %d", inp_array[top]);
        top--;
    }
}

void show()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for (int i = top; i >= 0; --i)
            printf("%d\n", inp_array[i]);
    }
}


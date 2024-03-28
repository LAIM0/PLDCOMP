
int main()
{
    int x = 10;
    int *ptr = &x;
    int **ptr2 = &ptr;

    return **ptr2;
}
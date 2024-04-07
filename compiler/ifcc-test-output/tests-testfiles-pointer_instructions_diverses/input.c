int main()
{
    int x = 1;
    int *ptr = &x;
    int value = ptr[2];
    ptr[3] = 5;
    int value2 = *ptr;
    ++(*ptr);
    *ptr = 10;
    int *q = &(*ptr);
    if (ptr == q)
    {
        int *next = ptr + 1;
    }
    return x;
}
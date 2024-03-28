int main()
{
    int i = 1;
    int j = 0;
    int *p;
    int *q;
    p = &i;
    q = p;
    *q = 2;
    j = *p;
    return j;
}
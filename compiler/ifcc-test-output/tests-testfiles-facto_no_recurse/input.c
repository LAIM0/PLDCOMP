int facto(int n)
{
    int r = 0;
    if (n == 1)
    {
        r = 1;
    }
    else
    {
        r = n * facto(n - 1);
    }
    return r;
}

int main()
{
    int n = 4;
    return facto(n);
}
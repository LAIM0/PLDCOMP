int function1(int x, int y)
{
    int res = x + y;
    return res;
}
int function2(int x, int y)
{
    int res = x - y;
    return res;
}

int main()
{
    int x = 2;
    int y = 3;
    int a = function1(x, y);
    int b = function2(x, y);
    return a + b / 2;
}
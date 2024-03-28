int main()
{
    int nombres[5] = {10, 20, 30, 40, 50};
    int *ptr = nombres; // Equivalent à &nombres[0]
    return *(ptr + 3);
}
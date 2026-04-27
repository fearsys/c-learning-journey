int main()
{
    int* p; /* wild pointer */
    int a = 10;
    /* p is not a wild pointer now*/
    p = &a;
    /* This is fine. Value of a is changed */
    *p = 12;
}
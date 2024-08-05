int get_pgcd(int a, int b)
{
    int pgcd = 0;
 
    while(1)
    {
        pgcd = a % b;
        if(pgcd == 0)
        {
            pgcd = b;
            break;
        }
        a = b;
        b = pgcd;
    }
 
    return pgcd;
}
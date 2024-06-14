int ft_iterative_factorial(int nb)
{
    int temp;

    if (!nb || nb < 0 || nb > 12)
        return (0);
    if (nb == 0)
        return (1);

    temp = nb;
    while (temp > 1)
    {
        nb *= temp - 1;
        temp--;
    }
    return (nb);
}
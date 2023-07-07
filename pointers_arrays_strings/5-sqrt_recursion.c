int res_sqrt_recursion(int i, int n)
{
	if (i * i == n)
	{
		return i;
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return res_sqrt_recursion(i + 1, n);
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return res_sqrt_recursion(0, n);
}

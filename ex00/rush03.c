void ft_putchar(char c);

int in_left_col(int c)
{
	if (c==0)
		return 1;
	return 0;
}

int in_walls(int x, int y, int c, int r)
{
	if (c==0 || c==x-1)
		return 1;
	if (r==0 || r==y-1)
		return 1;
	return 0;
}

int in_corner(int x, int y, int c, int r)
{
	if (c==0)
		if (r== 0 || r==y-1)
			return 1;
	if (c==x-1)
		if (r==0 || r==y-1)
			return 1;
	return 0;
}

void rush(int x,int y)
{
	int c;
	int r;
	r=0;
	while (r < y)
	{
		c=0;
		while (c < x)
		{
			if (in_walls(x,y,c,r))
			{
				if (!in_corner(x,y,c,r))
					ft_putchar('B');
				else if (in_left_col(c))
					ft_putchar('A');
				else 
					ft_putchar('C');
			}
			else
				ft_putchar(' ');
			c++;

		}
		ft_putchar('\n');
		r++;
	}
}


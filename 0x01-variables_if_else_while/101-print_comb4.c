int main(void)
{
	int num, num2, num3;

	for (num = 0; num < 10; num++)
	{
		for (num2 = 1; num2 < 10; num2++)
		{
			for (num3 = 1; num3 < 10; num3++)
			{

			if (num2 > num && num3 > num2)
				{
				putchar(num + '0');
				putchar(num2 + '0');
				if (num == 7 && num2 == 8 && num3 ==9)
				{
				putchar(10);
				break;
				}
			else
				{
					putchar(',');
					putchar(' ');
				}
			}
		
		      }
	}
}
	return (0);
}

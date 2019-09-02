void range(int seat[], int size)
{
	int i, j, temp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (seat[i]>seat[j])
			{
				temp = seat[i];
				seat[i] = seat[j];
				seat[j] = temp;
			}
		}
	}
}

void range_two(int seat[], int size, int num[])
{
	int i, j, temp, tem;

	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (seat[i]>seat[j])
			{
				temp = seat[i];
				seat[i] = seat[j];
				seat[j] = temp;

				tem = num[i];
				num[i] = num[j];
				num[j] = tem;
			}
		}
	}
}

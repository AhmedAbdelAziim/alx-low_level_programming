#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2
 * dimensional array of integers.
 * @width: int
 * @height: int
 * Return: array
 */
int **alloc_grid(int width, int height)
{
	int **tab, i, e;

	tab = malloc(sizeof(*tab) * height);

	if (width <= 0 || height <= 0 || tab == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			tab[i] = malloc(sizeof(**tab) * width);
			if (tab[i] == 0)
			{
				while (i--)
					free(tab[i]);
				free(tab);
				return (NULL);
			}
			for (e = 0; e < width; e++)
				tab[i][e] = 0;
		}
	}
	return (tab);
}

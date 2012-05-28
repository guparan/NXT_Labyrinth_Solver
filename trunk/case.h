
Case case_creerCase(int x, int y)
{
	Case c;
	c.x=x;
	c.y=y;
	return c;
}

void case_initCase(Case &c)
{
	c.x = -1;
	c.y = -1;
}

void case_setCase(Case &c, int x, int y)
{
	c.x = x;
	c.y = y;
}

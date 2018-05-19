#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <list>
#include <bitset>
#include <vector>
#include <sstream>
using namespace std;

// l - latime tabla joc, h - inaltime table joc, n - numar piese tetris; p - informatii despre piese
void f(unsigned char l, unsigned char h, unsigned char n, unsigned char p[][4])
{
	//static char m[999][999], r;
	static int  j, k, i, c, z, b, f, y, v, q, m[999][999], r;
	while (i < h*l)
		i < h ? m[i][0] = m[i][l + 1] = 124 : 1, m[h][i + 1] = i < l ? 45 : 0, ++i;
	while (z < n)
	{
		for (y = p[z][0], v = p[z][1], q = p[z][2], r = p[z++][3], c = i = 0; !c & y < l - v + 2; i++)
			for (f = y; f < v + y; )
				if (m[i][f++])
					for (k = i, c = 1, i < q ? z = n : 1; k && k > i - q; --k)
						for(f=y;f<v+y; m[k - 1][f++] = r);
			D:
			for (b = l; b && m[h - 1][b--];);
			for (i = h; !b && i ;i-- )
				for (j = l; j; m[i - 1][j] = m[i - 2][j--]);
			if(!b) goto D ;
	}
	for (i = 0; i <= h; ++i, cout << endl)
		for (j = 0; j < l + 2; !m[i][j] & i < h ? m[i][j] = 46 : 1, cout << (char)m[i][j++]);
}

int main(int argc, char **argv)
{
	int l, h;

	unsigned char p[7][4];

	l = 5; h = 4;
	p[0][0] = 1; p[0][1] = 4; p[0][2] = 1; p[0][3] = 'X';

	p[1][0] = 1; p[1][1] = 2; p[1][2] = 2; p[1][3] = 'O';

	p[2][0] = 1; p[2][1] = 2; p[2][2] = 1; p[2][3] = '#';
	p[3][0] = 5; p[3][1] = 1; p[3][2] = 3; p[3][3] = '*';
	//p[2][0] = 5; p[2][1] = 1; p[2][2] = 4; p[2][3] = '*';

	/*p[0][0] = 1; p[0][1] = 1; p[0][2] = 4; p[0][3] = '.';

	p[1][0] = 3; p[1][1] = 2; p[1][2] = 2; p[1][3] = '0';

	p[2][0] = 1; p[2][1] = 2; p[2][2] = 2; p[2][3] = '#';

	p[3][0] = 1; p[3][1] = 1; p[3][2] = 3; p[3][3] = '*';

	p[4][0] = 1; p[4][1] = 2; p[4][2] = 2; p[4][3] = '~';

	p[5][0] = 5; p[5][1] = 2; p[5][2] = 3; p[5][3] = '&';

	p[6][0] = 1; p[6][1] = 1; p[6][2] = 1; p[6][3] = '%';*/

	f(l, h, 4, p);

	
	system("pause");
	return 0;
}


#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <list>
#include <bitset>
#include <vector>

using namespace std;

const unsigned char MAX_CUPE = 255;

static unsigned char m = 5;					// linii
static unsigned char n = 5;					// coloane
static unsigned char c = 2;					// cupe
static unsigned char p[MAX_CUPE][2];	// pozitii cupe
static unsigned long long g = 0;			// variabila ajutatoare

void f(char h, char w)
{
	int v[99][99], i, z = 0;
	static int t, o, O, L, W, x, y, X, Y, r, R;

	string a[8] = { "A lovit jucatorul " ,". Total lovituri: ",". Cupa curenta: "," (hit)",". Pozitie curenta (" ,"Jocul s-a incheiat. ","A castigat jucatorul "," lovituri\n" };
	
	g++ == 0 ? r = 1, L = 0, W = 0, x = 1, y = 1, X = 1, Y = 1, t = 0, o = 1, O = 1, R = 1 : 1;

	for (i = 0; i < c; i++)
		p[i][0] < 2 && p[i][1] < 2 ? z++ : v[p[i][0]][p[i][1]] = i + 1;
	if(c)
		if (!t && o)
		{
			x + h <= m && y + w <= n && x + h > 0 && y + w > 0 && v[x + h][y + w] <= r ? x += h, y += w : 1;
			
			cout << a[0] + '1' + a[1] << ++L<<a[2]<<r;
			if (v[x][y] == r) {
				r++ == c - z ? o = 0 : 1;
				cout << a[3];
			}
			cout << a[4] << x << ',' << y << ")\n";

			O ? t = 1 : 0;
		}
		else if (t && O)
		{
			X + h <= m && Y + w <= n && X + h > 0 && Y + w > 0 && v[X + h][Y + w] <= R ? X += h, Y += w : 1;

			cout << a[0] + '2' + a[1] << ++W << a[2] << R;
			if (v[X][Y] == R)
			{
				R++ == c - z ? O = 0 : 1;
				cout << a[3];
			}
			cout << a[4] << X << ',' << Y << ")\n";
			o ? t = 0 : 1;
		}
	if (!o && !O || !c)
		L == W ? cout << a[5] + "Egalitate\n" : L < W ? cout << a[5] + a[6] + '1' + " cu " << L << a[7] : cout << a[5] + a[6] + '2' + " cu " << W << a[7];
}

int main()
{
	p[0][0] = 2, p[0][1] = 2;
	p[1][0] = 4, p[1][1] = 4;
	f(1, 1);
	f(2, 2);
	f(1, 0);
	f(-1, -1);
	f(1, 2);
	f(4, 0);
	f(2, 1);
	f(0, 1);
	f(2, 2);
	/*p[0][0] = 2, p[0][1] = 2;
	p[1][0] = 2, p[1][1] = 5;
	p[2][0] = 2, p[2][1] = 7;
	p[3][0] = 4, p[3][1] = 9;
	p[4][0] = 6, p[4][1] = 3;
	p[5][0] = 6, p[5][1] = 5;
	p[6][0] = 9, p[6][1] = 2;
	p[7][0] = 9, p[7][1] = 5;
	p[8][0] = 9, p[8][1] = 7;
	p[9][0] = 9, p[9][1] = 9;*/



	/*f(1, 1);
	f(1, 1);
	f(0, 3);
	f(0, 3);
	f(0, 2);
	f(0, 2);
	f(2, 2);
	f(2, 2);
	f(2, -6);
	f(2, -6);
	f(0, 2);
	f(0, 2);
	f(3, -3);
	f(3, -3);
	f(0, 3);
	f(0, 3);
	f(0, 2);
	f(0, 2);
	f(0, 2);
	f(0, 2);
	*/
	/*f(0, 1);
	f(0,1);
	f(1,2 );

	f(1, 7);
	f(7, 0);
	f(6, 0);
	f(0, 6);
	f(1, 1);
	*/

	/*p[0][0] = 8, p[0][1] = 1;

	f(1, 7);
	f(7, 0);
	f(6, 0);
	f(0, 6);
	f(1, 1);
	*/





	//p[1][0] = 4, p[1][1] = 4;


	/*p[0][0] = 13, p[0][1] = 7;
	p[1][0] = 2, p[1][1] = 2;
	p[2][0] = 12, p[2][1] = 8;
	p[3][0] = 14, p[3][1] = 7;
	p[4][0] = 5, p[4][1] = 3;
	p[5][0] = 12, p[5][1] = 8;
	p[6][0] = 2, p[6][1] = 4;
	p[7][0] = 6, p[7][1] = 5;
	p[8][0] = 8, p[8][1] = 9;
	p[9][0] = 5, p[9][1] = 10;
	p[10][0] = 2, p[10][1] = 11;
	f(1, 1);
	f(7, 0);
	f(-2, 7);
	f(4, 5);
	f(3, -2);
	f(-1, 0);
	f(0, -1);
	f(3, 1);
	f(-1, 5);
	f(2, -4);
	f(6, 3);
	f(-4, 2);
	f(6, 3);
	f(2, -1);
	f(3, 2);
	f(1, -2);
	f(3, 4);
	f(-2, 1);
	f(5, 2);
	f(-3, 1);
	f(1, 1);
	f(-2, -3);
	f(-5, -3);
	f(-9, -1);
	f(2, 2);
	f(1, 3);
	f(3,- 4);
	f(2, 3);
	f(3, -4);
	f(2, 1);
	f(-1, 2);
	f(4, 3);
	f(1, -2);
	f(1, 2);
	f(-1, 2);
	f(3, 2);
	f(2, 3);
	f(-3, 4);
	f(3, 3);
	f(4, 7);*/

	/*p[1][0] = 4, p[1][1] = 4;*/

	/*f(0, 1);
	f(0, 1);
	f(0, 1);
	f(0, 1);
	f(0, 1);
	f(0, 1); f(0, 1); f(0, 1); f(0, 1); f(0, 1); f(0, 1); f(0, 1); f(0, 1); f(0, 1); f(0, 1); f(0, 1); f(0, 1); f(0, 1);
	f(0, 1); f(0, 1); f(0, 1); f(0, 1); f(0, 1); f(0, 1); f(0, 1); f(0, 1); f(0, 1); f(0, 1); f(0, 1); f(0, 1); f(0, 1); f(0, 1);
	f(0, 1); f(0, 1); f(0, 1); f(0, 1); f(0, 1); f(0, 1); f(0, 1); f(0, 1); f(0, 1); f(0, 1); f(0, 1);*/



	system("pause");
	return 0;
}
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
										// h - numarul de linii, w - numarul de coloane
void f(char h, char w)
{

	static int t, L, W, x, y, X, Y, r, R, v[99][99];
	string  j = " (hit)", k = ". Pozitie curenta (", q = "Jocul s-a incheiat. ";
	!g ?  L = W=t = 0, x = y =r= X = Y = R = 1 : 1;
	
	for(;g<c;)
		p[g][0] < 2 & p[g][1] < 2 ? c-- : v[p[g][0]][p[g][1]] = 1+g++ ;

		c && r <= c | R <= c ?  cout << "A lovit jucatorul " << (t ? '2' : '1') << ". Total lovituri: " << (t ? ++W : ++L) << ". Cupa curenta: " << (t ? R : r),
		!t ?
		x + h <= m & y + w <= n & x > -h & y > -w & v[x + h][y + w] <= r ? x += h, y += w : 1,
		v[x][y] == r ? cout << j,  r++ : 1,
		cout << k << x << ',' << y << ")\n" ,R<=c ? t = 1 : 0 :
		t ?
		X + h <= m & Y + w <= n & X > -h & Y > -w & v[X + h][Y + w] <= R ? X += h, Y += w : 1,
		v[X][Y] == R ? cout << j, R++ : 1,
		cout << k << X << ',' << Y << ")\n", r<=c ? t = 0 : 1 : 1 :1 ;	
		
	if (r>c & R>c)
		L == W ? cout << q + "Egalitate\n" : cout << q +  "A castigat jucatorul " + (L < W ? '1' : '2') + " cu " << (L < W ? L : W) << " lovituri\n";

}


int main(int argc, char **argv)
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

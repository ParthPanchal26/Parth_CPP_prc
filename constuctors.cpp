#include<iostream>
using namespace std;
class point{
	private :
		int x, y;
	public :
		point()					// Default constructor
		{
			x=0;
			y=0;
		}
		point(int x1, int y1)	// Parameterized constructor
		{
			x=x1;
			y=y1;
		}
		point(point &p)			// Copy constructor
		{
			x=p.x;
			y=p.y;
		}
		putpoint(){ 
			cout << " X = " << x << " Y =" << y << endl;
		}
	
		
};
int main()
{
	cout << "Default constructor : " << endl;
	point p1;
	p1.putpoint();
	
	cout << "Parameterized constructor : " << endl;	
	point p2(7, 8);
	p2.putpoint();
	
	cout << "copy constructor : " << endl;	
	point p3(p2);
	p3.putpoint();
	return 0;
}



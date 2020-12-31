/*
The equation used in this program is taken from the bellow book.
"Projection of Points Within a Given Range: A General Mathematical Equation"
Written by Animesh Sahu
© 2020 Animesh Sahu
https://www.anispy.com/
https://play.google.com/store/books/details?id=locBEAAAQBAJ
https://www.amazon.com/dp/B08BYY4VM2
https://www.amazon.com/author/animeshsahu
*/
#include<stdio.h>
main(){
	int N,Rl,Ru,E,A,Np;
	float Af;
	printf("Projection of Points Within a Given Range: A General Mathematical Equation\n");
	printf("Written by Animesh Sahu\n");
	printf("© 2020 Animesh Sahu\n");
	printf("Enter the number you want to project N = ");
	scanf("%d",&N);
	printf("Enter the lower limt of the range = ");
	scanf("%d",&Rl);
	printf("Enter the upper limt of the range = ");
	scanf("%d",&Ru);
	// Number of elements E
	E=Ru-Rl+1;
	printf("Number of elements within the given range E = %d\n",E);
	//multiplication factor A
	Af=(N-Rl)/(E);
	A=(int)(Af);
	if(Af<0){
		A=A-1;
	}
	printf("Multiplication factor A = %d\n",A);
	//projected number
	Np=N-A*E;
	printf("Projected number of N = %d within the given range %d to %d is = %d\n",N,Rl,Ru,Np);

}

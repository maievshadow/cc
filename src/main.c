#include "../head/a.h"
int main()
{

	int a[2][2] = {
		{1,2},
		{3,4},
	};

	int (*pa)[2] = a;
	int *pb;

	for(int i = 0; i< 2; i++){
		for( int j =0;j<2; j++){
			pb = &pa[i][j];
			//printf(" %d ", pa[i][j]);
			printf(" %d ", *pb);
		}
		printf("\n");
	}

	//tt();
}

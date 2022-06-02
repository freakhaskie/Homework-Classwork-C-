#include <stdio.h>
#include <stdlib.h>


int write(float* arr, int n, const char* fname) 
{
	FILE* fp = fopen(fname, "wb");
	
	if (fp == NULL) 
	{
		fprintf(stderr,"Error in open file %s for writing", fname);
		return -1;
	}
	int res = fwrite(arr, sizeof(*arr), n, fp);
	fclose(fp);
	return res;
}


int read(const char* fname) 
{
	FILE* fp = fopen(fname, "rb");
	
	if (fp == NULL) 
	{
		fprintf(stderr, "Error in open file %s for reading", fname);
		return -1;
	}
	printf("Reading file:");
	float x;
	int count = 0;
	
	while (!feof(fp)) 
	{
		fread(&x, sizeof(float), 1, fp);
		count++;
		printf("%f", x);
	}
	fclose(fp);
	return count;	
}

int main() 
{
	float* mas;
	printf("n = ");
	int n;
	scanf("%d", &n);
	mas = (float*)malloc(n * sizeof(float)); 
	
	for (int i = 0; i < n; i++) 
	{
		printf("a[%d] = ", i);
		scanf("%f", &mas[i]);
	}
	char fname[20];
	printf("File:");
	scanf("%s", fname);
	write(mas, n, fname);
	read(fname);
}

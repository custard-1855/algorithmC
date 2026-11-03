#include <stdio.h>
#include <time.h> 

#define amax 10000


int rand(void);

void gen_data(int a[], int n)     /* n個の整数をランダムに生成し、配列aに格納する */
{
     int i;

     for (i = 0; i <= n; i++) { 
       a[i] = rand();
     }
}

 
void print_result(int a[], int n)           /* ソート結果を出力する */
{
    int i;

    for (i = 0; i <= n; i++) {
      printf("%d\n",a[i]);
    }
}

void swap(int *a, int *b)
{ 
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void partition(int a[], int p, int q, int *jp, int *ip) /* a[p..q]を分割する */
{
    int i, j, s;

    i = p; 
  	j = q; 
  	s = a[p];
    while (i <= j){
       while (a[i] < s) ++i;
       while (a[j] > s) --j;
       if (i <= j){
          swap(&a[i], &a[j]);
          ++i;
    		  --j;
       }
    }
    *jp = j;
	  *ip = i; 
}

void qsort(int a[], int p, int q) /* a[p..q]をソートする*/
{
    int i, j;

    if (p < q){
       partition(a, p, q, &j, &i);
       qsort(a, p, j);
       qsort(a, i, q);
    }
}

 int main()
{
  int a[amax+1];
  int p, q;
  clock_t c1, c2;

  p = 1;
  q= amax;
  
  gen_data(a, q);
  c1 = clock();
  qsort(a, p, q);
  c2 = clock();
  print_result(a, q);
  printf("time: %ld\n", c2 - c1);
}

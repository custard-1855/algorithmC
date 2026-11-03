#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#define amax 10000
#define smax 10000


void gen_data(int a[], int n)     /* n個の整数をランダムに生成し、配列aに格納する */
{
     int i;

     for (i = 1; i <= n; i++) { 
       a[i] = rand();
     }
}

 
void print_result(int a[], int n)           /* ソート結果を出力する */
{
    int i;

    for (i = 1; i <= n; i++) {
      printf("%d\n", a[i]);
    }
}

struct interval {
	int l;
	int r;
};

typedef struct stack {
    struct interval box[smax+1];
    int  top;
};

void initialize(struct stack *s)  /* スタックの初期化 */
{
    s->top = 0;
}

void push(struct stack *s, struct interval item)   /* スタックへ要素の挿入 */
{
    s->box[++s->top] = item;
}

void pop(struct stack *s)    /* スタックから要素の削除 */
{
    --s->top;
}

int empty(struct stack *s)         /* FALSE=0  TRUE=1 */
{
    return(s->top == 0);
}


struct interval top(struct stack *s)     /* スタックの先頭要素 */
{
    return(s->box[s->top]);
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
		  j--;
       }
    }
    *jp = j;
	*ip = i; 
}




void qsort2(int a[], int n)  /* a[1..n]をソートする */
{   
	struct interval intvl = {1, n};
    struct stack s; 
    int p, q, i, j;


    initialize(&s);
    push(&s, intvl);
    while (!empty(&s)){
        intvl = top(&s);
        pop(&s);
        p = intvl.l;
        q = intvl.r;
        partition(a, p, q, &j, &i);
        if (p < j){
            intvl.l = p;
            intvl.r = j;
            push(&s, intvl);
        }
        if (i < q){
            intvl.l = i;
            intvl.r = q;
            push(&s, intvl);
        }
    }
}

 int main()
{
  int a[amax+1];
  int n;
  clock_t c1, c2;
  
  n=1000;
  gen_data(a, n);
  c1 = clock();
  qsort2(a, n);
  c2 = clock();
  print_result(a, n);
  printf("time: %ld\n", c2 - c1);
}

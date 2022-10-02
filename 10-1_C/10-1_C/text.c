#define _CRT_SECURE_NO_WARNINGS 1
//typedef int ElementType;
//
//#include <stdio.h>
//#include <stdlib.h>
//
//#define ERROR 1e8
//
//typedef enum { push, pop, end } Operation;
//typedef enum { false, true } bool;
//typedef int Position;
//struct SNode {
//    ElementType* Data;
//    Position Top1, Top2;
//    int MaxSize;
//};
//typedef struct SNode* Stack;
//
//Stack CreateStack(int MaxSize);
//bool Push(Stack S, ElementType X, int Tag);
//ElementType Pop(Stack S, int Tag);
//
//Operation GetOp();  /* details omitted */
//void PrintStack(Stack S, int Tag); /* details omitted */
//
//int main()
//{
//    int N, Tag, X;
//    Stack S;
//    int done = 0;
//
//    scanf("%d", &N);
//    S = CreateStack(N);
//    while (!done) {
//        switch (GetOp()) {
//        case push:
//            scanf("%d %d", &Tag, &X);
//            if (!Push(S, X, Tag)) printf("Stack %d is Full!\n", Tag);
//            break;
//        case pop:
//            scanf("%d", &Tag);
//            X = Pop(S, Tag);
//            if (X == ERROR) printf("Stack %d is Empty!\n", Tag);
//            break;
//        case end:
//            PrintStack(S, 1);
//            PrintStack(S, 2);
//            done = 1;
//            break;
//        }
//    }
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//Stack CreateStack(int MaxSize)
//{
//    struct SNode* Stack = (struct SNode*)malloc(sizeof(struct SNode));
//    Stack->Data = (int*)malloc(sizeof(int) * MaxSize);
//    Stack->Top1 = -1;
//    Stack->Top2 = MaxSize;
//    Stack->MaxSize = MaxSize;
//    return Stack;
//
//}
//
//bool Push(Stack S, ElementType X, int Tag)
//{
//    if (S->Top1 - S->Top2 == 1) {
//        printf("Stack Full\n");
//        return ERROR;
//    }
//    if (Tag == 1) {
//        S->Top1++;
//        S->Data[S->Top1] = X;
//    }
//    else {
//        S->Top2--;
//        S->Data[S->Top2] = X;
//    }
//}
//
//ElementType Pop(Stack S, int Tag)
//{
//    if (Tag == 1) {
//        if (S->Top1 == -1) {
//            printf("Stack 1 Empty\n");
//            return ERROR;
//        }
//        else {
//            return S->Data[S->Top1];
//            S->Top1--;
//        }
//    }
//    else {
//        if (S->Top2 == S->MaxSize) {
//            printf("Stack 2 Empty\n");
//            return ERROR;
//        }
//        else {
//            return S->Data[S->Top2];
//            S->Top2++;
//        }
//    }
//}


//Stack CreateStack(int MaxSize)
//{
//    struct SNode* Stack = (struct SNode*)malloc(sizeof(struct SNode));
//    Stack->Data = (int*)malloc(sizeof(int) * MaxSize);
//    Stack->Top1 = 0;
//    Stack->Top2 = MaxSize - 1;
//    Stack->MaxSize = MaxSize;
//    return Stack;
//
//}
//
//bool Push(Stack S, ElementType X, int Tag)
//{
//    if (S->Top1 - S->Top2 == 1) {
//        printf("Stack Full\n");
//        return false;
//    }
//    if (Tag == 1) {
//        //S->Top1++;
//        S->Data[S->Top1++] = X;
//    }
//    else {
//        //S->Top2--;
//        S->Data[S->Top2--] = X;
//    }
//    return true;
//}
//
//ElementType Pop(Stack S, int Tag)
//{
//    if (Tag == 1) {
//        if (S->Top1 == 0) {
//            printf("Stack 1 Empty\n");
//            return ERROR;
//        }
//        else {
//            //S->Top1--;
//            return S->Data[--S->Top1];
//            //S->Top1--;
//        }
//    }
//    else {
//        if (S->Top2 == S->MaxSize - 1) {
//            printf("Stack 2 Empty\n");
//            return ERROR;
//        }
//        else {
//            // S->Top2++;
//            return S->Data[++S->Top2];
//            //S->Top2++;
//        }
//    }
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct Queue {
//	int* Data;
//	int font, rear;
//	int size;
//}Queue;
//
//struct Stack {
//	int* Data;
//	int top;
//	int MaxSize;
//};
//
//struct Stack* InitiStack(int size) {
//	struct Stack* Stack = (struct Stack*)malloc(sizeof(struct Stack));
//	Stack->Data = (int*)malloc(sizeof(int) * size);
//	Stack->top = 0;
//	Stack->MaxSize = size;
//	return Stack;
//}
//
//struct Queue* InitiQue(int len) {
//	struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
//	queue->Data = (int*)malloc(sizeof(int) * len);
//	queue->font = 0;
//	queue->rear = 0;
//	queue->size = 0;
//	return queue;
//}
//
//void chaSongZhi(int* arr, int len, int n, int k) {
//	struct Queue* queue;
//	struct Stack* stack;
//	queue = InitiQue(len);
//	stack = InitiStack(n);
//	int size = len; int i = 0; int num = 0;
//	while (size) {
//		//i = i % len;
//		if (stack->top == 0) {
//			//小盒子为空，从推送器上面去
//			if (queue->font - queue->rear == 0) {
//				//松枝上面也没有，就直接插上去
//				queue->Data[queue->rear++] = arr[i++];
//				--size;
//				++queue->size;//队列大小加1
//				++num;
//				if (num % k == 0 ) {
//					//如果空的小盒子里面且松枝已经满了 或者没有松枝了
//					for (int j = queue->font; j < queue->rear; j++) {
//						if (j == queue->rear - 1) printf("%d\n", queue->Data[j]);
//						else printf("%d ", queue->Data[j]);
//					}
//					num = 0;
//					queue->font = queue->rear;
//				}
//			}
//			/*else if (queue->font == queue->rear && queue->font == len) {
//				break;
//			}*/
//			else {
//				//松枝上面有，要判断插入的数字是否满足条件
//				if (arr[i] > queue->Data[queue->rear - 1]) {
//					//不满足插入条件 将数字放入到小盒子当中
//					stack->Data[stack->top++] = arr[i++];
//				}
//				else {
//					//满足条件
//					queue->Data[queue->rear++] = arr[i++];
//					--size;
//					++queue->size;//队列大小加1
//					num++;
//					if (num % k == 0) {
//						//如果空的小盒子里面且松枝已经满了 或者没有松枝了
//						for (int j = queue->font; j < queue->rear; j++) {
//							if (j == queue->rear - 1) printf("%d\n", queue->Data[j]);
//							else printf("%d ", queue->Data[j]);
//						}
//						num = 0;
//						queue->font = queue->rear;
//					}
//				}
//			}
//		}
//		else {
//			//小盒子不为空，
//			if (stack->top == n) {
//				//小盒子满了
//				if (queue->font - queue->rear == 0) {
//					queue->Data[queue->rear++] = stack->Data[--stack->top];
//					--size;
//					++queue->size;
//					++num;
//					if (num % k == 0 ) {
//						//如果空的小盒子里面且松枝已经满了 或者没有松枝了
//						for (int j = queue->font; j < queue->rear; j++) {
//							if (j == queue->rear - 1) printf("%d\n", queue->Data[j]);
//							else printf("%d ", queue->Data[j]);
//						}
//						num = 0;
//						queue->font = queue->rear;
//					}
//				}
//				else {
//
//					if (stack->Data[stack->top - 1] <= queue->Data[queue->rear - 1]) {
//						//小盒子的顶上元素符合条件，插入
//						queue->Data[queue->rear++] = stack->Data[--stack->top];
//						--size;
//						++queue->size;
//						num++;
//						if (num % k == 0 ) {
//							//如果空的小盒子里面且松枝已经满了 或者没有松枝了
//							for (int j = queue->font; j < queue->rear; j++) {
//								if (j == queue->rear - 1) printf("%d\n", queue->Data[j]);
//								else printf("%d ", queue->Data[j]);
//							}
//							num = 0;
//							queue->font = queue->rear;
//						}
//					}
//					else if (stack->Data[stack->top - 1] > queue->Data[queue->rear - 1] && arr[i] <= queue->Data[queue->rear - 1]&&i<len) {
//						//小盒子顶部不符合，但是arr里面的满足
//						queue->Data[queue->rear++] = arr[i++];
//						--size;
//						++queue->size;//队列大小加1
//						num++;
//						if (num % k == 0) {
//							//如果空的小盒子里面且松枝已经满了 或者没有松枝了
//							for (int j = queue->font; j < queue->rear; j++) {
//								if (j == queue->rear - 1) printf("%d\n", queue->Data[j]);
//								else printf("%d ", queue->Data[j]);
//							}
//							num = 0;
//							queue->font = queue->rear;
//						}
//					}
//					else {
//						//都不满足
//						if (queue->rear - queue->font == 0) {
//							//队列为空
//							queue->Data[queue->rear++] = stack->Data[--stack->top];
//							--size;
//							++queue->size;//队列大小加1
//							num++;
//						}
//						else if (i == len) {
//							for (int j = queue->font; j < queue->rear; j++) {
//								if (j == queue->rear - 1) printf("%d\n", queue->Data[j]);
//								else printf("%d ", queue->Data[j]);
//							}
//							num = 0;
//							queue->font = queue->rear;
//						}
//						else {
//							for (int j = queue->font; j < queue->rear; j++) {
//								if (j == queue->rear - 1) printf("%d\n", queue->Data[j]);
//								else printf("%d ", queue->Data[j]);
//							}
//							num = 0;
//							queue->font = queue->rear;
//							queue->size++;
//						}
//					}
//				}
//			}
//
//			else {
//				//小盒子美满
//				if (queue->font - queue->rear == 0) {
//					queue->Data[queue->rear++] = stack->Data[--stack->top];
//					--size;
//					++queue->size;
//					num++;
//				}
//				else {
//					if (stack->Data[stack->top - 1] <= queue->Data[queue->rear - 1]) {
//						//小盒子的顶上元素符合条件，插入
//						queue->Data[queue->rear++] = stack->Data[--stack->top];
//						--size;
//						++queue->size;
//						num++;
//						for (int j = queue->font; j < queue->rear; j++) {
//							if (j == queue->rear - 1) printf("%d\n", queue->Data[j]);
//							else printf("%d ", queue->Data[j]);
//						}
//						num = 0;
//						queue->font = queue->rear;
//					}
//					else if (stack->Data[stack->top - 1] > queue->Data[queue->rear - 1]&& arr[i]<= queue->Data[queue->rear - 1] && i < len) {
//						//小盒子顶部不符合，但是arr里面的满足
//						queue->Data[queue->rear++] = arr[i++];
//						--size;
//						++queue->size;//队列大小加1
//						num++;
//						if (num % k == 0) {
//							//如果空的小盒子里面且松枝已经满了 或者没有松枝了
//							for (int j = queue->font; j < queue->rear; j++) {
//								if (j == queue->rear - 1) printf("%d\n", queue->Data[j]);
//								else printf("%d ", queue->Data[j]);
//							}
//							num = 0;
//							queue->font = queue->rear;
//						}
//					}
//					else {
//						//都不满足
//						if (queue->rear - queue->font == 0) {
//							//队列为空
//							queue->Data[queue->rear++] = stack->Data[--stack->top];
//							--size;
//							++queue->size;//队列大小加1
//							num++;
//						}
//						else if (i == len) {
//							for (int j = queue->font; j < queue->rear; j++) {
//								if (j == queue->rear - 1) printf("%d\n", queue->Data[j]);
//								else printf("%d ", queue->Data[j]);
//							}
//							num = 0;
//							queue->font = queue->rear;
//						}
//						else {
//							stack->Data[stack->top++] = arr[i++];
//						}
//					}
//				}
//			}
//		}
//		if (size == 0) {
//			for (int j = queue->font; j < queue->rear; j++) {
//				if (j == queue->rear - 1) printf("%d\n", queue->Data[j]);
//				else printf("%d ", queue->Data[j]);
//			}
//		}
//	}
//}
//
//int main() {
//
//	int m, n, k;
//	int arr[1000];
//	scanf("%d %d %d", &m, &n, &k);
//	for (int i = 0; i < m; i++) {
//		scanf("%d", &arr[i]);
//	}
//	chaSongZhi(arr, m, n, k);
//
//	return 0;
//}

//7 5 3
//7 6 1 3 2 5 4
//3 1 5 4 2 6 7
//7 6 5 4 3 2 1



#include <stdio.h>
#include <stdlib.h>

typedef struct Queue {
	int* Data;
	int font, rear;
	int size;
}Queue;

struct Stack {
	int* Data;
	int top;
	int MaxSize;
};

struct Stack* InitiStack(int size) {
	struct Stack* Stack = (struct Stack*)malloc(sizeof(struct Stack));
	Stack->Data = (int*)malloc(sizeof(int) * size);
	Stack->top = 0;
	Stack->MaxSize = size;
	return Stack;
}

struct Queue* InitiQue(int len) {
	struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
	queue->Data = (int*)malloc(sizeof(int) * len);
	queue->font = 0;
	queue->rear = 0;
	queue->size = 0;
	return queue;
}

struct Queue* createQue(struct Queue* q, int len) {
	int num = 0;
	for (int i = 0; i < len; i++) {
		scanf("%d", &num);
		q->Data[q->rear++] = num;
	}
	return q;
}

int getElem(struct Stack* stack, int elem) {
	int num = 0;
	while (num != stack->top) {
		if (stack->Data[num++] == elem) {
			return --num;
		}
	}
	return 0;
}
//7 5 1 3 2 6 4     7 6 1 3 2 5 4
//7 3 1
//7 6 2 1 4 3 5

int isSuccessFinishWork(struct Queue* queue,struct Stack* stack,int n){
	int i = 1;
	while (queue->font != queue->rear) {
		if (queue->Data[queue->font] != i) {
			//颜色不符合要求
			if (stack->top == stack->MaxSize) {
				//栈已经满了
				if (stack->Data[stack->top-1] != i) {
					return 0;
				}
				else {
					stack->Data[--stack->top];
					i++;
				}
				
			}
			else {
				//栈没有满
				if (stack->top != 0) {
					int pos = getElem(stack, i);
					if (pos != 0) {
						//在栈中找到了想要的元素
						if (pos != stack->top - 1) {
							//元素不是栈顶元素 
							return 0;
						}
						else {
							stack->Data[--stack->top];
							i++;
							//queue->font++;
						}
					}
					else {
						//没有找到
						stack->Data[stack->top++] = queue->Data[queue->font++];
					}
				}
				else {
					stack->Data[stack->top++] = queue->Data[queue->font++];
				}
			}
		}
		else {
			//颜色符合要求
			++i;
			queue->font++;
		}
	}
	while (stack->top != 0) {
		if (stack->Data[--stack->top] != i) {
			return 0;
		}
		i++;
	}
	return 1;
}

int main() {


	int n, m, k; int ret = 0;
	scanf("%d %d %d", &n, &m, &k);
	struct Stack* stack;
	struct Queue* queue;
	for (int i = 0; i < k; i++) {
		stack = InitiStack(m);
		queue = InitiQue(n);
		queue = createQue(queue,n);
		ret = isSuccessFinishWork(queue, stack, n);
		if (ret) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}

	return 0;
}
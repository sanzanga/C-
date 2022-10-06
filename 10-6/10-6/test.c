//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//
//struct Queue {
//    int* Data;
//    int rear;
//    int font;
//    int MaxSize;
//};
//
//void InitiQueue(struct Queue* queue, int n) {
//    queue->Data = (int*)malloc(sizeof(int) * n);
//    queue->rear = 0; queue->font = 0;
//    queue->MaxSize = n;
//}
//
//int main() {
//
//    int n, num;
//    scanf("%d", &n);
//    struct Queue* queueA = (struct Queue*)malloc(sizeof(struct Queue));
//    struct Queue* queueB = (struct Queue*)malloc(sizeof(struct Queue));
//    InitiQueue(queueA, n);
//    InitiQueue(queueB, n);
//
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &num);
//        if (num % 2 == 0) {
//            //偶数客户
//            queueB->Data[queueB->rear++] = num;
//        }
//        else {
//            //奇数客户
//            queueA->Data[queueA->rear++] = num;
//        }
//    }
//    int count = 0;
//    while (queueA->rear != queueA->font && queueB->rear != queueB->font) {
//        printf("%d ", queueA->Data[queueA->font++]);
//        ++count;
//        if (queueA->rear == queueA->font) break;
//        printf("%d ", queueA->Data[queueA->font++]);
//        ++count;
//        if (queueA->rear == queueA->font) break;
//        printf("%d ", queueB->Data[queueB->font++]);
//        ++count;
//        if (queueB->rear == queueB->font) break;
//    }
//
//    while (queueA->rear != queueA->font) {
//        if (count == n - 1) {
//            printf("%d", queueA->Data[queueA->font++]);
//        }
//        else {
//            count++;
//            printf("%d ", queueA->Data[queueA->font++]);
//        }
//    }
//
//    while (queueB->rear != queueB->font) {
//        if (count == n - 1) {
//            printf("%d", queueB->Data[queueB->font++]);
//        }
//        else {
//            count++;
//            printf("%d ", queueB->Data[queueB->font++]);
//        }
//    }
//
//    return 0;
//}
//
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
//				if (num % k == 0) {
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
//				else {
//
//					if (stack->Data[stack->top - 1] <= queue->Data[queue->rear - 1]) {
//						//小盒子的顶上元素符合条件，插入
//						queue->Data[queue->rear++] = stack->Data[--stack->top];
//						--size;
//						++queue->size;
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
//					else if (stack->Data[stack->top - 1] > queue->Data[queue->rear - 1] && arr[i] <= queue->Data[queue->rear - 1] && i < len) {
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
//					else if (stack->Data[stack->top - 1] > queue->Data[queue->rear - 1] && arr[i] <= queue->Data[queue->rear - 1] && i < len) {
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
//	int arr[1001];
//	scanf("%d %d %d", &m, &n, &k);
//	for (int i = 0; i < m; i++) {
//		scanf("%d", &arr[i]);
//	}
//	chaSongZhi(arr, m, n, k);
//
//	return 0;
//}


//bool AddQ(Queue Q, ElementType X)
//{
//    if (Q->MaxSize == Q->Count) {
//        //队列已经满了
//        printf("Queue Full\n");
//        return ERROR;
//    }
//    Q->Data[(Q->Front + Q->Count++) % Q->MaxSize] = X;
//    return true;
//}
//ElementType DeleteQ(Queue Q)
//{
//    if (Q->Count == 0) {
//        //队列为空
//        printf("Queue Empty\n");
//        return ERROR;
//    }
//    int num = Q->Data[Q->Front];
//    Q->Front = (Q->Front + 1) % Q->MaxSize;
//    --Q->Count;
//    return num;
//}

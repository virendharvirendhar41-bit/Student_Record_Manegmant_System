#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct ST
{
	int roll;
	char name[20];
	float mark;
	struct ST *next;
}ST;

void add(ST**);
void delete(ST**);
void display(ST*);
void sort(ST**,ST*);
void modify(ST**);
void save(ST*);
void ex(ST*);



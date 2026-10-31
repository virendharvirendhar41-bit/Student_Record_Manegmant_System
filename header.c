#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct ST
{
	int roll;
	char name[20];
	float mark;
	struct ST *next;
}ST;

void add_end(ST**);
void delete(ST**);
void display(ST*);
void sort(ST**);
void modify(ST**);
void save(ST**);



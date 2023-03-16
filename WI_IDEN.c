// The second accepted version. Dynamic allocation using a dual LL.

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

typedef struct LL {
	char c;
	struct LL* prev;
	struct LL* next;
} LL;

void print(LL* head) {
	while (head) {
		putchar(head->c);
		head = head->next;
	}
	putchar('\n');
}

int scan(LL** head, LL** tail) {	
	*head = calloc(1, sizeof(LL));		
	*tail = *head;
	char c = getchar();
	(*head)->c = c;
	int i = 1;
	while ((c = getchar()) != '\n' && c != EOF) {
		i++;
		(*tail)->next = calloc(1, sizeof(LL));
		(*tail)->next->c = c;
		(*tail)->next->prev = *tail;
		*tail = (*tail)->next;
	}
	return i;
}

void removeNode(LL* n, LL** head, LL** tail) {
	if (n == *head) *head = n->next;
	if (n == *tail) *tail = n->prev;
	if (n->prev)
		n->prev->next = n->next;
	if (n->next) 
		n->next->prev = n->prev;
	free(n);
}

void freeLL(LL* head) {
	LL* next;
	while(head) {
		next = head->next;
		free(head);
		head = next;
	}
}

int eq(char a, char b) {
	return tolower(a) == tolower(b);
}

int issamogloska(char c) {
	return eq(c, 'A') || eq(c, 'E') 
	|| eq(c, 'I') || eq(c, 'O') || eq(c, 'U')
	|| eq(c, 'Y');
}

int main() {
	int n, len;
	LL *head, *tail;
	
	scanf("%d\n", &n);
	len = scan(&head, &tail);
	
	
	LL* p = tail;
	while (p && len > n) {
		LL* pp = p->prev;
		if (!isalnum(p->c) && p->c != '$') {
			len--;
			removeNode(p, &head, &tail);
		}
		p = pp;
	}

	p = tail;
	while (p && len > n) {
		LL* pp = p->prev;
		if (isdigit(p->c)) {
			len--;
			removeNode(p, &head, &tail);
		}
		p = pp;
	}

	int f = 0;
	p = head;
	while (p && len > n) {
		LL* pp = p->next;
		if(issamogloska(p->c)) {
			if (f) {
				len--;
				removeNode(p, &head, &tail);
			}
			f = 1;	
		}
		p = pp;
	}

	p=tail->prev;
	while (p && len > n) {
		LL* pp = p->prev;
		len--;
		removeNode(p, &head, &tail);
		p = pp;
	}

	print(head);
	freeLL(head);
}

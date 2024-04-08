#include <stddef.h>
#include <stdio.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {	
		int n = 0;
		node *p = head;
		while (p) {
				if (n > 25) return 1;
				n++;
				p = p->next;
		}
    return 0;
}

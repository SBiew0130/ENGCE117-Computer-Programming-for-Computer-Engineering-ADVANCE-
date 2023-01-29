//Banthita Sutham 65543206020-1 section 1
//https://www.youtube.com/watch?v=-akARwUHgCE
#include <stdio.h>
#include <string.h>

struct Node {
	int data ;
	struct Node* next ;
} ;

void AddNode( struct Node **walk, int data ) ;
void Update( struct Node **walk, int data, int newdata ) ;
void ShowAll( struct Node *walk );

int main () {
	struct Node *start ;
	start = NULL ;
	AddNode( &start, 10) ;
	AddNode( &start, 20) ;
	AddNode( &start, 30) ;
	AddNode( &start, 40) ;
	
	ShowAll( start ) ;
	Update( &start, 10, 99 ) ;
	ShowAll( start ) ;
	Update( &start, 10, 98 ) ;
	ShowAll( start ) ;
}

void AddNode( struct Node **walk, int data  ) {
	while( *walk != NULL ) {
		walk = &(*walk) -> next ; 
	}
	*walk = new struct Node ;
	(*walk) -> data = data ;
	(*walk) -> next = NULL ;
}

void Update( struct Node **walk, int data, int newdata ) {
	while( *walk != NULL ) {
		if((*walk) -> data == data ) {
			break ;
		}
		walk = &(*walk) -> next ;
	}
	if((*walk) != NULL ) {
		(*walk) -> data = newdata ;
	}
}

void ShowAll( struct Node *walk ) {
	while( walk != NULL ) {
		printf( " %d ", walk -> data ) ;
		walk = walk -> next ;
	}
	printf("\n") ;
	printf( "" ) ;
}

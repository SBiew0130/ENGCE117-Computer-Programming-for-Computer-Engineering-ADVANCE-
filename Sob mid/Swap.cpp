//Banthita Sutham 65543206020-1 section 1
//https://www.youtube.com/watch?v=-akARwUHgCE
#include <stdio.h>
#include <string.h>

struct Node {
	int data ;
	struct Node* next ;
} ;

void AddNode( struct Node **walk, int data ) ;
void Swap( struct Node **walk, int data, int temp ) ;
void ShowAll( struct Node *walk ) ;

int main () {
	struct Node *start ;
	start = NULL ;
	AddNode( &start, 10) ;
	AddNode( &start, 20) ;
	AddNode( &start, 30) ;
	AddNode( &start, 40) ;
	
	ShowAll( start ) ;
	Swap( &start, 20, 30 ) ;
	ShowAll( start ) ;
	Swap( &start, 40, 10 ) ;
	ShowAll( start ) ;
}

void AddNode( struct Node **walk, int data ) {
	while( *walk != NULL ) {
		walk = &(*walk) -> next ;
	}
	*walk = new struct Node ;
	(*walk) -> data = data ;
	(*walk) -> next = NULL ;
}

void Swap( struct Node **walk, int data, int temp ) {
	while( *walk != NULL) {
		if((*walk) -> data == data ) {
			(*walk) -> data = temp ;
		}
		else if((*walk) -> data == temp ) {
			(*walk) -> data = data ;
		}
		walk = &(*walk) -> next ;
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


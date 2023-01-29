//Banthita Sutham 65543206020-1 section 1
//https://www.youtube.com/watch?v=-akARwUHgCE
#include <stdio.h>
#include <string.h>

struct Node {
	int data ;
	struct Node* next ;
} ;

void AddNode( struct Node **walk, int data ) ;
void ShowBack( struct Node **walk ) ;
void ShowAll( struct Node *walk );

int main () {
	struct Node *start ;
	start = NULL ;
	AddNode( &start, 10) ;
	AddNode( &start, 20) ;
	AddNode( &start, 30) ;
	AddNode( &start, 40) ;
	
	ShowAll( start ) ;
	ShowBack( &start ) ;
}

void AddNode( struct Node **walk, int data  ) {
	while( *walk != NULL ) {
		walk = &(*walk) -> next ; 
	}
	*walk = new struct Node ;
	(*walk) -> data = data ;
	(*walk) -> next = NULL ;
}

void ShowBack( struct Node **walk ) {
	struct Node *nb 		=  NULL ;
	struct Node *now		= *walk ;
	struct Node *next 		=  NULL ;
	
	while( now != NULL ) {
		next 		= now -> next ;
		now -> next = nb ;
		nb 			= now ;
		now 		= next ;
	}
	ShowAll( nb ) ;
}

void ShowAll( struct Node *walk ) {
	while( walk != NULL ) {
		printf( " %d ", walk -> data ) ;
		walk = walk -> next ;
	}
	printf("\n") ;
	printf( "" ) ;
}

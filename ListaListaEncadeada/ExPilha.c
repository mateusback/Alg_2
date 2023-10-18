#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

#define EXIT 0
#define ADD_ALPHA 1
#define ADD_OMEGA 2
#define ADD_BY_VALUE 3
#define REMOVE 4
#define PRINT_LIST 5
#define REMOVE_ALL 6
#define MAIOR_VALOR 7
#define MEDIA 8

typedef struct node{
	int data;
	struct node *next;
}Node;

void addAlpha(Node **list, int data){
	Node *newElement = (Node*)malloc(sizeof(Node));
	if(newElement){
		newElement -> data = data;
		newElement -> next = *list;
		*list = newElement;
	} else{
		printf("Error\n");
	}
}

void addOmega(Node **list, int data){
	Node *newElement = (Node*)malloc(sizeof(Node));
	if(list == NULL){
		newElement -> data = data;
		newElement -> next = *list;
		*list = newElement;
		return;
	} else{
		Node *aux = *list;
		while(aux->next!=NULL){
			aux = aux->next;
		}
		newElement->data = data;
		newElement->next = NULL;
		aux->next = newElement;
	}
}

void addByValue(Node **list, int data, int dataSearch){
	Node *newElement = (Node*)malloc(sizeof(Node));
	if(newElement){
		if(*list==NULL){
			newElement->data = data;
			newElement->next = NULL;
			*list = newElement;
			return;
			
		} else{
			Node *aux = *list;
			while(aux->next && aux->data!=dataSearch){
				aux = aux -> next;
			}
			newElement->next = aux->next;
			newElement->data = data;
			aux->next = newElement;
		}
	}	
}

void remove(Node **list, int data){
	Node *aux = *list;
	if(aux!=NULL){
		if(aux->data == data){
			*list = aux -> next;
			free(aux);
		}else{
			while(aux->next && aux->next->data!=data){
				aux = aux->next;
			}
			if(aux->next){
				Node *remove = aux->next;
				aux->next = remove->next;
				free(remove);
			}
		}
	}
}

void removeAll(Node **list){
	Node *listCurrent = *list;
	while(listCurrent!=NULL){
		Node *aux = listCurrent;
		listCurrent = listCurrent->next;
		remove(list, aux->data);
	}
}

void printList(Node *list){
	printf("[ ");
	while(list){
		printf("%d, ", list ->data);
			list = list->next;
		}
		printf("]\n ");
	}
	
int maiorValor(Node **list){
	Node *listCurrent = *list;
	int aux = 0;
	int maiorValor = 0;
		while(listCurrent!=NULL){
			aux = listCurrent->data;
			if(aux > maiorValor){
				maiorValor = aux;
			}
			listCurrent = listCurrent->next;
	}
	return maiorValor;
}

int mediaLista(Node **list){
	Node *listCurrent = *list;
	int cont = 0;
	int media = 0;
		while(listCurrent!=NULL){
			cont++
			media += listCurrent->data
			listCurrent = listCurrent->next;
	}
	return media/cont;
}	

void runMenu(Node *list){
	int option, data, dataReference;
	do{
		printf("-----------------------------------------------------------------\n");
		printf("Escolha uma das funcionalidades:\n");
		printf("-----------------------------------------------------------------\n");
		printf("1 - Adicionar elemento no inicio da lista\n");
		printf("2 - Adicionar elemento no fim da lista\n");
		printf("3 - Adicionar elemento no meio da lista, com um numero de referencia\n");
		printf("4 - Remover um elemento da lista, com um numero de referencia\n");
		printf("5 - Imprimir a lista\n");
		printf("6 - Remover todos os Elementos\n");
		printf("7 - Encontrar o maior valor na lista\n");
		printf("8 - Encontrar a média dos valores da lista\n");
		printf("0 - Sair\n");
		scanf("%d", &option);
		switch (option){
			case ADD_ALPHA:
				system("cls");
				printf("Informe o numero que deseja adicionar no inicio da lista: ");
				scanf("%d", &data);
				addAlpha(&list, data);
				printList(list);
				break;
			case ADD_OMEGA:
				system("cls");
				printf("Informe o numero que deseja adicionar no fim da lista: ");
				scanf("%d", &data);
				addOmega(&list, data);
				break;
			case ADD_BY_VALUE:
				system("cls");
				printf("Informe o numero que deseja adicionar na lista: ");
				scanf("%d", &data);
				printf("Informe o valor da lista para usar como referencia: ");
				scanf("%d", &dataReference);
				addByValue(&list, data, dataReference);
				break;
			case REMOVE:
				system("cls");
				printf("Informe um valor para remover da lista: ");
				scanf("%d", &data);
				remove(&list, data);
				break;
			case PRINT_LIST:
				system("cls");
				printf("Lista:\n");
				printList(list);
				break;
			case REMOVE_ALL:
				system("cls");
				removeAll(&list);
				printList(list);
				break;
			case MAIOR_VALOR:
				system("cls");
				printf("Maior valor na lista: %d\n", maiorValor(&list));
				break;
			case MEDIA:
				system("cls");
				print("Média dos valores na lista: %d\n", mediaLista(&list));
				break;
			default:
				printf("Funcao nao implementada\n");
				break;
		}
	}while(option != EXIT);
		exit(1);
}

int main(){
	Node *list = NULL;
	
	runMenu(list);
	
	return 0;
}
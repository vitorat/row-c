//Author: Vitor tolomelli

#include<stdio.h>
#include<stdlib.h>


main() {
	
	int size;
	int top, option, value, i;

	top = -1;
	
	printf("--------->Type the row size<---------\n");
	scanf("%d", &size);
	
	int row[size];
	
	printf("--------->Row started as empty<------\n");
	printf("\nType an option:  1 - Insert, 2 - Remove, 3 - End\n");
	scanf("%d", &option);

	while(option!=3){

		if(option==1){
			if(top == (size-1)){
				printf("______________________Full row______________________\n");
				printf("\nType an option:  1 - Insert, 2 - Remove, 3 - End\n");
 				scanf("%d", &option);
		}
			else{
				printf("----------->Type a value<------------\n");
		        scanf("%d", &value);
		        top++;
		        row[top]=value;
		        printf("------------->Allocated<-------------\n");
			}

		}

		if(option==2){
			if(top==-1){
				printf("__________Empty row, choose another option__________\n");
				printf("\nType an option:  1 - Insert, 2 - Remove, 3 - End\n");
				scanf("%d", &option);
				printf("Type a value\n");
		        scanf("%d", &value);
		        top++;
		        row[top]=value;
		        printf("------------->Allocated<-------------\n");
				}
			else{
				printf("------------>Deallocated<------------\n");
		        for(i = 0; i < size; i++){
					row[i] = row[i+1];
				}
		        top--;

			}
		}
			printf("\n------------->ROW IMAGE<-------------\n");
			for(i=top; i>=0; i=i-1)
                printf(" [%d]  %d\n", i, row[i] );
				printf("Type an option:  1 - Insert, 2 - Remove, 3 - End\n");
				scanf("%d",&option);
		};
		printf("\n");
		system("pause");
	}

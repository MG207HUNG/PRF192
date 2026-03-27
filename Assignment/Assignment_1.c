#include <stdio.h>
#include <string.h>
typedef struct{
	int id;
	char name[50];
	float price;
	int quantity;
}Product;
void writeProducts(const char *filename,int numProducts);
void appendProducts(const char *filename,int numProducts);
void readProducts(const char *filename);
void modifyProducts(const char *filename);
int main(){
	const char *filename = "assignment01.bin";
	int choice, numProducts;
	do{
		printf("\n-- Product Management System --\n");
		printf("1. Write Products\n");
		printf("2. Append Products\n");
		printf("3. Read Products\n");
		printf("4. Modify Products\n");
		printf("5. Exit Products\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);

	switch (choice){
		case 1:
			printf("Enter the number of products to write: ");
			scanf("%d",&numProducts);
			writeProducts(filename, numProducts);
			break;
		case 2:
			printf("Enter the number of products to append: ");
			scanf("%d",&numProducts);
			appendProducts(filename, numProducts);
			break;	
		case 3:
			readProducts(filename);
			break;
		case 4:
			modifyProducts(filename);
			break;
		case 5:
			printf("Exiting....\n");
			break;
		default:
			printf("Invalid choice. Please try again.\n");
		}
	}while(choice != 5);
	return 0;
}

void writeProducts(const char *filename,int numProducts){
	FILE *file = fopen(filename,"wb");
	
	if(file==NULL){
		printf("Error! File might not exist yet. Please write products first.\n");
		return ;
	}
	Product p[numProducts];
	
	for(int i = 0 ; i < numProducts ; i ++){
		printf("\nEnter details for product %d:\n",i+1);
		printf("Product ID: ");
		scanf("%d",&p[i].id);
		while(getchar()!='\n');
		printf("Product Name: ");
		fgets(p[i].name,50,stdin);
		p[i].name[strcspn(p[i].name, "\n")] = 0;
		printf("Price: ");
		scanf("%f",&p[i].price);
		while(getchar()!='\n');
		printf("Quantity: ");
		scanf("%d",&p[i].quantity);
		while(getchar()!='\n');
	}
	fwrite(p, sizeof(Product), numProducts, file);
	printf("\nProducts have been written to the file successfully.\n");
	fclose(file);
}
void appendProducts(const char *filename, int numProducts) {
    FILE *file = fopen(filename,"ab");
    if (file == NULL){
    	printf("Error! File might not exist yet. Please write products first.\n");
    	return ;
	}
	Product p[numProducts];
	for(int i = 0 ; i < numProducts ; i ++){
		printf("\nEnter details for product %d:\n",i+1);
		printf("Product ID: ");
		scanf("%d",&p[i].id);
		while(getchar()!='\n');
		printf("Product Name: ");
		fgets(p[i].name,50,stdin);
		p[i].name[strcspn(p[i].name, "\n")] = 0;
		printf("Price: ");
		scanf("%f",&p[i].price);
		while(getchar()!='\n');
		printf("Quantity: ");
		scanf("%d",&p[i].quantity);
		while(getchar()!='\n');
	}
	fwrite(p, sizeof(Product), numProducts, file);
	printf("\nProducts have been appended to the file successfully.\n");

	fclose(file);
}

void readProducts(const char *filename) {
    FILE *file = fopen(filename,"rb");
   	if (file == NULL){
    	printf("Error! File might not exist yet. Please write products first.\n");
    	return ;
	}
	Product p;
	printf("\nReading products from the file:\n");
	printf("\n-----------------------------------------------------\n");
	printf("Product ID      Product Name        Price    Quantity");
	printf("\n-----------------------------------------------------\n");
	while (fread(&p, sizeof(Product), 1, file) == 1) {
        printf("%-10d %-25s %-10.2f %-10d\n", p.id, p.name, p.price, p.quantity);
    }
    printf("\n-----------------------------------------------------\n");
    fclose(file);
}

void modifyProducts(const char *filename) {
    FILE *file = fopen(filename,"rb+");
	if (file == NULL){
    	printf("Error! File might not exist yet. Please write products first.\n");
    	return ;
	} 
	int n ;
	int found = 0 ;   
	printf("\nEnter the Product ID to modify: ");
	scanf("%d",&n);
	while(getchar()!='\n');
	
	Product p;
	while (fread(&p, sizeof(Product), 1, file) == 1) {
		if(p.id==n){
			found = 1;
			printf("Product found. Enter new details:\n");
			printf("New Product Name: ");
			fgets(p.name,50,stdin);
			p.name[strcspn(p.name, "\n")] = 0;	
			printf("New Price: ");			
			scanf("%f",&p.price);
			printf("New Quantity: ");
			scanf("%d",&p.quantity);
			
			fseek(file, -(long)sizeof(Product), SEEK_CUR);
			fwrite(&p, sizeof(Product), 1, file);
			printf("\nProduct updated successfully.\n");
			break;
		}
	if(!found){
		printf("Product ID %d not found.\n",n);
	}
	fclose(file);
}
}





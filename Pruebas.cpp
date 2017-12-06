#include<stdio.h>

/*int main() {
    int size = 0;
    int status = 1;
    printf("Tamanio de Vector:");
    scanf("%d", &size);
    int items[size]; 
    
    for(int i = 0; i < size; i++) {
        scanf("%d", &items[i]);    
        if(i >= (size/2 + size%2 + 1) && items[i] == items[size - i]) {
            status = 0;
        }
    }
    printf("%d",status);
}*/

int main() {
    int size, order = 0, result = 1;
    //ASC | DESC
    printf("Tamanio de Vector:");
    scanf("%d", &size);
    int items[size]; 
    
    for(int i = 0; i < size; i++) {
        scanf("%d", &items[i]); 
        //orderBy 
        if(order == 0 & i > 0) {
            order = items[i] > items[i-1] ? 1 : -1;
        }
        
        //Ordernado 
        if(order != 0 && result == 1) {
            result = (order == 1 && items[i] > items[i-1]) || (order == -1 && items[i] < items[i-1]) ? 1 : 0;
        }
    }
    printf("%d", (result == 1 ? order : 0));
}

/*int main() {
    int key, pos;
    char base[] = "Soy Una Cabena"; 
    char cat[80]; ///Cadena Ingresada
    printf("%s", base);
    printf("\nInsert str:"); //Cambiar por getline etc ['\0']
    scanf("%79s", cat); 
    printf("Pos [0,%d]:", sizeof(base) -1);
    scanf("%d", &pos);
    
    if(pos <= sizeof(base)) {
        for(key= 0; key < sizeof(cat); key++) {
            if(cat[key] == '\0') {
                break;
            }
        }
        for(int i = 0; i <  sizeof(base); i++) {
            if(i == pos) {
                printf("%s", cat);
            }
            printf("%c", base[i]);
        }
    } else {
        printf("\n%s",base);    
    }
}*/




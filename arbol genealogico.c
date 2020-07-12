#include <stdio.h>
#include <stdlib.h>

int main() {
	int op;
	printf("\nBRAVO HERNANDEZ CLAUDIA ISABEL\n");
	printf("\nArbol Genealogico\n");
	printf("\n1. Familiares de Generacion 1\n");
	printf("\n2. Familiares de Generacion 2\n");
	printf("\n3. Familiares de Generacion 3\n");
	printf("\n4. Familiares de Generacion 4\n");
	printf("\n5. Familiares de Generacion 5\n");
	printf("\n6. Familiares de Generacion 6\n");
	printf("\n7.Familiares de Generacion 7 \n");
	
	scanf("%d,&op");
	switch(op)
	{
		case 1:
			printf("\nFamiliares de Generacion 1");
			printf("Abulos Maternos");
			printf("Ines Lopez Marcos");
			printf("Alicia Bravo Bravo");
			printf("Maria Luisa Bravo Martinez");
			printf("Silvia Bravo Martinez");
			printf("Fernanda Lopez Marcos ");
			printf("Juana Marcos Lopez");
			printf("Rosa Isela Marcos Lopez");
			
			break;
		case 2:
			printf("\nFamiliares de Generacion 2");
            printf("Abuelos Paterno");
            printf("Macario Lopez Marcos");
            printf("Ricardo Bravo Bravo");
            printf("Fidencio Hernandez Cruz");
            printf("Ernesto Hernandez Cruz");
            printf("Pedro Hernandez Cruz");
            printf("Paco Hernandez Cruz");
			break;
	    case  3 :
            printf ("Familiares de Generacion 3\n");
            printf("Mi papa y hermanos");
            printf("Ricardo Bravo Bravo");
            printf("Angelica Bravo Bravo");
            printf("Gustavo Bravo Martinez");
            printf("Guillermo Bravo Martinez");
            printf("Maria Guadalupe Bravo Martinez");
            
            printf("Mi Mama y hermanas");
            printf("Beatriz Adriana Hernandez Lopez ");
            printf("Lourdes Hernandez Lopez ");
            printf("Arian Hernandez Lopez");
            break ;
        case  4 :
            printf ("Familiares de Generacion 4\n");
            printf("Primos de toda mi familia");
            printf("Gabriela Hernandez Bravo");
            printf("Yessica Hernandez Bravo");
            printf("Melina Nicole Jauregui Bravo");
            printf("Gustavo Jauregui Bravo");
            printf("Mauricio Jauregui Bravo");
            printf("Ricardo Bravo Herrera");
            printf("Giovanni Catilla Bravo");
            printf("Fernana Hernandez Bravo");
            break ;
        case  5 :
            printf ("Familiares de Generacion 5 \n");
            printf("Mis sobrinas");
            printf("Alexa Bravo Villanueva");
            printf("Doroti Bravo Olvera");
            printf("Sofia Bravo Gonzalez");
            printf("Alexandra Bravo Ortega");
            break ;
        case  6 :
            printf ("Familiares de Generacion 6 \n");
            printf("Mi Familia por parte de mi padre biologico por fuera ");
            printf("Maria Alejandra Santamarina Bravo");
            printf("Beatriz Ximena Santamarina Bravo");
            printf("Alejandro Martinez Bravo");
            printf("Andres Olvera Bravo");
            printf("Mafe Sanvodal Bravo");
            printf("Ricardo Osegueda Bravo");
            break;
        case  7 :
            printf ("Familiares de Generacion 7 \n");
            printf("Mi Familia por parte de mi padre biologico por fuera: hermanos fuera del matrimonio");
            printf("Maria Alejandra Santamarina Bravo");
            printf("Beatriz Ximena Santamarina Bravo");
            printf("Alejandro Martinez Bravo");
            printf("Andres Olvera Bravo");
            printf("Mafe Sanvodal Bravo");
            printf("Ricardo Osegueda Bravo");
	}
	return 0;
}

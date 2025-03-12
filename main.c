#include <stdio.h>

typedef struct {
    unsigned int matricola;
    int eta;
    float voti;
    float media;
} Classe;

int main(void)
{
    Classe MiaClasse[20];

    for (int i = 0; i < 20; i++)
    {
        do {
            printf("Inserisci nome studente: ");
            scanf("%u", &MiaClasse[i].matricola);
        } while (MiaClasse[i].matricola < 100000 || MiaClasse[i].matricola > 999999);
        do {
            printf("Eta': ");
            scanf("%d", &MiaClasse[i].eta);
        } while ( MiaClasse[i].eta < 13);
        do {
            printf("Voti: ");
            scanf("%f", &MiaClasse[i].voti);
        } while ( MiaClasse[i].eta < 13);
        MiaClasse[0].media += MiaClasse[i].voti;
    }

    MiaClasse[0].media = MiaClasse[0].media / 20;

    for (int i = 0; i<20; i++){
        printf("Studente: %u\n", MiaClasse[i].matricola);
        printf("Eta: %d\n", MiaClasse[i].eta);
        printf("Voto: %f\n", MiaClasse[i].voti);
    }

    printf("Media Generale: %f", MiaClasse[0].media);
    printf("Gli studenti sopra la media: ");
    for (int i = 0; i < 20; i++) {
        if (MiaClasse[i].voti > MiaClasse[0].media) {
            printf("%u, %d, %f.\n", MiaClasse[i].matricola, MiaClasse[i].eta, MiaClasse[i].voti);
        }
    }

}

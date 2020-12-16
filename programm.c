#include <stdio.h>
#define SEK_PRO_MIN 60
#define SEK_PRO_STD 3600
int main() {
    int ze, zahl7, zahl8, zahl9, auswahl1;
    long auswahl, sekunden, minuten, stunden, zahl1, zahl2, zahl3, zahl4, zahl5;
    long w = 0;
    long z = 100;
    char c, x;
    do {
        printf("1-Auswahl1\n");
        printf("2-Auswahl2\n");
        printf("3-Auswahl3\n");
        printf("4-Auswahl4\n");
        printf("5-Auswahl5\n");
        printf("6-Auswahl6\n");
        printf("7-Auswahl7\n");
        printf("\nDeine Auswahl ist: ");
        scanf("%d", &auswahl);
        switch (auswahl) {
            case 1 :
                printf("\nGeben sie ihre Sekunden ein: ");
                scanf("%d", &sekunden);
                stunden = sekunden / SEK_PRO_STD;
                sekunden = sekunden - (stunden * SEK_PRO_STD);
                minuten = sekunden / SEK_PRO_MIN;
                sekunden = sekunden - (minuten * SEK_PRO_MIN);
                printf("Stunden: %d Minuten %d Sekunden %d\n", stunden,
                       minuten, sekunden);
                break;
            case 2 :
                printf("\nErste Nummer: ");
                scanf("%d", &zahl1);
                printf("\nZweite Nummer");
                scanf("%d", &zahl2);
                if (zahl1 < zahl2) {
                    printf("Zahl 2 ist groesser\n");
                } else if (zahl1 == zahl2) {
                    printf("Beide Zahlen sind gleich groß\n");
                } else {
                    printf("Zahl 2 ist groesser\n");
                }
                break;
            case 3 :
                printf("\nGeben sie ihre Nummer ein : ");
                scanf("%d", &zahl3);
                for (int i = 0; i <= 10; i++) {
                    if (zahl3 % 2) {
                        zahl4 = zahl4 + zahl3;
                        zahl3++;
                        printf("%d\n", zahl3);
                    } else {
                        zahl3++;
                        printf("%d\n", zahl3);
                    }
                }
                printf("%d\n", zahl4);
                break;
            case 4 :
                while (w < 10) {
                    printf("\nGeben sie ihre Zahl ein : ");
                    scanf("%d", &zahl5);
                    z = z - zahl5;
                    if (z <= 0) {
                        printf("Ihre Zahl ist negativ\n");
                        break;
                    } else {
                        printf("Ihre Zahl ist %d\n", z);
                        printf("");
                        printf("");
                        w++;
                    }
                }
                break;
            case 5 :
                printf("\nGeben sie ihr Zeichen ein ae=132 oe=148 ue=129");
                scanf("%d", &ze);
                switch (ze) {
                    case 132 :
                        printf("Sie haben %c eingegeben\n", 228);
                        break;
                    case 148 :
                        printf("Sie haben %c eingegeben\n", 148);
                        break;
                    case 129 :
                        printf("Sie haben %c eingegeben\n", 129);
                        break;
                    default :
                        printf("%i\n", ze);
                }
                break;
            default:
                printf("Falsche Auswahl");
                break;
            case 6 :
                do {
                    printf("1- +\n");
                    printf("2- -\n");
                    printf("3- *\n");
                    printf("4- /4\n");
                    printf("5-Auswahl5\n");
                    printf("\nDeine Auswahl ist: ");
                    scanf("%d", &auswahl1);
                    printf("\nGeben sie ihre erste Zahl ein: ");
                    scanf("%d", &zahl7);
                    printf("\nGeben sie ihre zweite Zahl ein: ");
                    scanf("%d", &zahl8);

                    switch (auswahl1) {
                        case 1 :
                            zahl9=zahl7+zahl8;
                            printf("Ihr Ergebnis ist: %d\n", zahl9);
                            break;
                        case 2 :
                            zahl9=zahl7-zahl8;
                            printf("Ihr Ergebnis ist: %d\n", zahl9);
                            break;
                        case 3 :
                            zahl9 =zahl7*zahl8;
                            printf("Ihr Ergebnis ist: %d\n", zahl9);
                            break;
                        case 4 :
                            zahl9 = zahl7/zahl8;
                            printf("Ihr Ergebnis ist: %d\n", zahl9);
                            break;
                        default:
                            printf("Ungültige Auswahl\n");
                            break;
                    }
                } while (auswahl1!=5);
                break;
        }
    }while (auswahl!=7);
    return 0;
}
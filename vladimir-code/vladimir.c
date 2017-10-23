#include "vladimir.h"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int *caminho, *custos;


// Função de loading
void loading() {

	int i = 0;

	while(i < 2) {

		system("clear");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

		printf("\t\t\t\t\t\t ██▓     ▒█████   ▄▄▄      ▓█████▄  ██▓ ███▄    █   ▄████ \n");
		printf("\t\t\t\t\t\t▓██▒    ▒██▒  ██▒▒████▄    ▒██▀ ██▌▓██▒ ██ ▀█   █  ██▒ ▀█▒\n");
		printf("\t\t\t\t\t\t▒██░    ▒██░  ██▒▒██  ▀█▄  ░██   █▌▒██▒▓██  ▀█ ██▒▒██░▄▄▄░\n");
		printf("\t\t\t\t\t\t▒██░    ▒██   ██░░██▄▄▄▄██ ░▓█▄   ▌░██░▓██▒  ▐▌██▒░▓█  ██▓\n");
		printf("\t\t\t\t\t\t░██████▒░ ████▓▒░ ▓█   ▓██▒░▒████▓ ░██░▒██░   ▓██░░▒▓███▀▒    ██▓   \n");
		printf("\t\t\t\t\t\t░ ▒░▓  ░░ ▒░▒░▒░  ▒▒   ▓▒█░ ▒▒▓  ▒ ░▓  ░ ▒░   ▒ ▒  ░▒   ▒     ▒▓▒   \n");
		printf("\t\t\t\t\t\t░ ░ ▒  ░  ░ ▒ ▒░   ▒   ▒▒ ░ ░ ▒  ▒  ▒ ░░ ░░   ░ ▒░  ░   ░     ░▒      \n");
		printf("\t\t\t\t\t\t░ ░   ░ ░ ░ ▒    ░   ▒    ░ ░  ░  ▒ ░   ░   ░ ░ ░ ░   ░     ░    ░    ░    \n");
		printf("\t\t\t\t\t\t░  ░    ░ ░        ░  ░   ░     ░           ░       ░ \n");
		printf("\t\t\t\t\t\t                            ░                             \n");

		usleep(600000);
		system("clear");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

		printf("\t\t\t\t\t\t ██▓     ▒█████   ▄▄▄      ▓█████▄  ██▓ ███▄    █   ▄████ \n");
		printf("\t\t\t\t\t\t▓██▒    ▒██▒  ██▒▒████▄    ▒██▀ ██▌▓██▒ ██ ▀█   █  ██▒ ▀█▒\n");
		printf("\t\t\t\t\t\t▒██░    ▒██░  ██▒▒██  ▀█▄  ░██   █▌▒██▒▓██  ▀█ ██▒▒██░▄▄▄░\n");
		printf("\t\t\t\t\t\t▒██░    ▒██   ██░░██▄▄▄▄██ ░▓█▄   ▌░██░▓██▒  ▐▌██▒░▓█  ██▓\n");
		printf("\t\t\t\t\t\t░██████▒░ ████▓▒░ ▓█   ▓██▒░▒████▓ ░██░▒██░   ▓██░░▒▓███▀▒    ██▓  ██▓  \n");
		printf("\t\t\t\t\t\t░ ▒░▓  ░░ ▒░▒░▒░  ▒▒   ▓▒█░ ▒▒▓  ▒ ░▓  ░ ▒░   ▒ ▒  ░▒   ▒     ▒▓▒  ▒▓▒  \n");
		printf("\t\t\t\t\t\t░ ░ ▒  ░  ░ ▒ ▒░   ▒   ▒▒ ░ ░ ▒  ▒  ▒ ░░ ░░   ░ ▒░  ░   ░     ░▒   ░▒     \n");
		printf("\t\t\t\t\t\t░ ░   ░ ░ ░ ▒    ░   ▒    ░ ░  ░  ▒ ░   ░   ░ ░ ░ ░   ░     ░    ░    ░    \n");
		printf("\t\t\t\t\t\t░  ░    ░ ░        ░  ░   ░     ░           ░       ░ \n");
		printf("\t\t\t\t\t\t                            ░                             \n");

		usleep(600000);
		system("clear");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

		printf("\t\t\t\t\t\t ██▓     ▒█████   ▄▄▄      ▓█████▄  ██▓ ███▄    █   ▄████ \n");
		printf("\t\t\t\t\t\t▓██▒    ▒██▒  ██▒▒████▄    ▒██▀ ██▌▓██▒ ██ ▀█   █  ██▒ ▀█▒\n");
		printf("\t\t\t\t\t\t▒██░    ▒██░  ██▒▒██  ▀█▄  ░██   █▌▒██▒▓██  ▀█ ██▒▒██░▄▄▄░\n");
		printf("\t\t\t\t\t\t▒██░    ▒██   ██░░██▄▄▄▄██ ░▓█▄   ▌░██░▓██▒  ▐▌██▒░▓█  ██▓\n");
		printf("\t\t\t\t\t\t░██████▒░ ████▓▒░ ▓█   ▓██▒░▒████▓ ░██░▒██░   ▓██░░▒▓███▀▒    ██▓  ██▓  ██▓ \n");
		printf("\t\t\t\t\t\t░ ▒░▓  ░░ ▒░▒░▒░  ▒▒   ▓▒█░ ▒▒▓  ▒ ░▓  ░ ▒░   ▒ ▒  ░▒   ▒     ▒▓▒  ▒▓▒  ▒▓▒ \n");
		printf("\t\t\t\t\t\t░ ░ ▒  ░  ░ ▒ ▒░   ▒   ▒▒ ░ ░ ▒  ▒  ▒ ░░ ░░   ░ ▒░  ░   ░     ░▒   ░▒   ░▒   \n");
		printf("\t\t\t\t\t\t░ ░   ░ ░ ░ ▒    ░   ▒    ░ ░  ░  ▒ ░   ░   ░ ░ ░ ░   ░     ░    ░    ░    \n");
		printf("\t\t\t\t\t\t░  ░    ░ ░        ░  ░   ░     ░           ░       ░ \n");
		printf("\t\t\t\t\t\t                            ░                             \n");

		usleep(600000);


		i++;

	}

	usleep(250000);
	system("clear");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n"ANSI_COLOR_RED);


	printf("\t\t\t██▒   █▓ ██▓    ▄▄▄      ▓█████▄  ██▓ ███▄ ▄███▓ ██▓ ██▀███      ▒█████      ██▒   █▓ ▄▄▄       ███▄ ▄███▓ ██▓███   ██▓ ██▀███   ▒█████  \n");
	printf("\t\t\t▓██░   █▒▓██▒   ▒████▄    ▒██▀ ██▌▓██▒▓██▒▀█▀ ██▒▓██▒▓██ ▒ ██▒   ▒██▒  ██▒   ▓██░   █▒▒████▄    ▓██▒▀█▀ ██▒▓██░  ██▒▓██▒▓██ ▒ ██▒▒██▒  ██▒\n");
	printf("\t\t\t ▓██  █▒░▒██░   ▒██  ▀█▄  ░██   █▌▒██▒▓██    ▓██░▒██▒▓██ ░▄█ ▒   ▒██░  ██▒    ▓██  █▒░▒██  ▀█▄  ▓██    ▓██░▓██░ ██▓▒▒██▒▓██ ░▄█ ▒▒██░  ██▒\n");
	printf("\t\t\t  ▒██ █░░▒██░   ░██▄▄▄▄██ ░▓█▄   ▌░██░▒██    ▒██ ░██░▒██▀▀█▄     ▒██   ██░     ▒██ █░░░██▄▄▄▄██ ▒██    ▒██ ▒██▄█▓▒ ▒░██░▒██▀▀█▄  ▒██   ██░\n");
	printf("\t\t\t  ▒▀█░  ░██████▒▓█   ▓██▒░▒████▓ ░██░▒██▒   ░██▒░██░░██▓ ▒██▒   ░ ████▓▒░      ▒▀█░   ▓█   ▓██▒▒██▒   ░██▒▒██▒ ░  ░░██░░██▓ ▒██▒░ ████▓▒░\n");
	printf("\t\t\t  ░ ▐░  ░ ▒░▓  ░▒▒   ▓▒█░ ▒▒▓  ▒ ░▓  ░ ▒░   ░  ░░▓  ░ ▒▓ ░▒▓░   ░ ▒░▒░▒░       ░ ▐░   ▒▒   ▓▒█░░ ▒░   ░  ░▒▓▒░ ░  ░░▓  ░ ▒▓ ░▒▓░░ ▒░▒░▒░ \n");
	printf("\t\t\t  ░ ░░  ░ ░ ▒  ░ ▒   ▒▒ ░ ░ ▒  ▒  ▒ ░░  ░      ░ ▒ ░  ░▒ ░ ▒░     ░ ▒ ▒░       ░ ░░    ▒   ▒▒ ░░  ░      ░░▒ ░      ▒ ░  ░▒ ░ ▒░  ░ ▒ ▒░ \n");
	printf("\t\t\t   ░░    ░ ░    ░   ▒    ░ ░  ░  ▒ ░░      ░    ▒ ░  ░░   ░    ░ ░ ░ ▒          ░░    ░   ▒   ░      ░   ░░        ▒ ░  ░░   ░ ░ ░ ░ ▒  \n");
	printf("\t\t\t   ░      ░  ░     ░  ░   ░     ░         ░    ░     ░            ░ ░           ░        ░  ░       ░             ░     ░         ░ ░  \n");
	printf("\t\t\t   ░                     ░                                                      ░                                                       \n");

            usleep(800000);

            printf("\n\n\n"ANSI_COLOR_RESET);

	printf("\t\t\t\t\t\t\t\t\t┌─┐┬─┐┌─┐┌─┐┌─┐  ┌─┐┌┐┌┌┬┐┌─┐┬─┐\n");
	printf("\t\t\t\t\t\t\t\t\t├─┘├┬┘├┤ └─┐└─┐  ├┤ │││ │ ├┤ ├┬┘\n");
	printf("\t\t\t\t\t\t\t\t\t┴  ┴└─└─┘└─┘└─┘  └─┘┘└┘ ┴ └─┘┴└─  ");


            // Espera o usuário digitar ENTER
	getchar();
}

// Introducao do jogo
void introducao() {

	system("clear");

	printf("\n\n\n\n\n"ANSI_COLOR_RED);

	printf("\t\t\t\t\t\t██▓ ███▄    █ ▄▄▄█████▓ ██▀███   ▒█████  ▓█████▄  █    ██  ▄████▄   ▄▄▄       ▒█████  \n");
	printf("\t\t\t\t\t\t▓██▒ ██ ▀█   █ ▓  ██▒ ▓▒▓██ ▒ ██▒▒██▒  ██▒▒██▀ ██▌ ██  ▓██▒▒██▀ ▀█  ▒████▄    ▒██▒  ██▒\n");
	printf("\t\t\t\t\t\t▒██▒▓██  ▀█ ██▒▒ ▓██░ ▒░▓██ ░▄█ ▒▒██░  ██▒░██   █▌▓██  ▒██░▒▓█    ▄ ▒██  ▀█▄  ▒██░  ██▒\n");
	printf("\t\t\t\t\t\t░██░▓██▒  ▐▌██▒░ ▓██▓ ░ ▒██▀▀█▄  ▒██   ██░░▓█▄   ▌▓▓█  ░██░▒▓▓▄ ▄██▒░██▄▄▄▄██ ▒██   ██░\n");
	printf("\t\t\t\t\t\t░██░▒██░   ▓██░  ▒██▒ ░ ░██▓ ▒██▒░ ████▓▒░░▒████▓ ▒▒█████▓ ▒ ▓███▀ ░ ▓█   ▓██▒░ ████▓▒░\n");
	printf("\t\t\t\t\t\t░▓  ░ ▒░   ▒ ▒   ▒ ░░   ░ ▒▓ ░▒▓░░ ▒░▒░▒░  ▒▒▓  ▒ ░▒▓▒ ▒ ▒ ░ ░▒ ▒  ░ ▒▒   ▓▒█░░ ▒░▒░▒░ \n");
	printf("\t\t\t\t\t\t▒ ░░ ░░   ░ ▒░    ░      ░▒ ░ ▒░  ░ ▒ ▒░  ░ ▒  ▒ ░░▒░ ░ ░   ░  ▒     ▒   ▒▒ ░  ░ ▒ ▒░ \n");
	printf("\t\t\t\t\t\t▒ ░   ░   ░ ░   ░        ░░   ░ ░ ░ ░ ▒   ░ ░  ░  ░░░ ░ ░ ░          ░   ▒   ░ ░ ░ ▒  \n");
	printf("\t\t\t\t\t\t░           ░             ░         ░ ░     ░       ░     ░ ░            ░  ░    ░ ░  \n");

	printf("\n\n\n\n\n\n\n"ANSI_COLOR_RESET);

	printf("\t\t\t\t Vladimir tem a pele branca, dentes muito longos e tem 600 anos, mas isso não é problema, porque Vladimir é um vampiro.\n");
	printf("\t\t\t\t Vladimir adora viajar, mas por ser um vampiro, ele passa por três problemas sempre que vai viajar: \n\n");
	printf("\t\t\t\t » Primeiro, ele só pode viajar de trem, porque ele tem que levar seu caixão com ele. \n");
	printf("\n\t\t\t\t » Segundo, ele só pode viajar do anoitecer até o amanhecer, ou seja, das 6 da noite até às 6 da manhã. Durante o dia, \n \t\t\t\t ele tem que ficar dentro da estação de trem. \n");
	printf("\n\t\t\t\t » Terceiro, ele tem que ter algo para comer com ele. Ele precisa de um litro de sangue por dia, que ele bebe ao meio-dia,\n \t\t\t\t 12:00, dentro de seu caixão \n");

	printf("\n\n\n\n\n\n\n");

	printf("\t\t\t\t\t\t\t\t\t Pressione ENTER para continuar ");

    // Espera o usuário digitar ENTER
	getchar();
}

// Menu principal
int menu(){

    char op1, op2, op3;
    int i=0;//,seled=0;
    char sel = 0;

        op1 = ' ';
        op2 = ' ';
        op3 = ' ';

        //scanf("%d", &sel);

    while(sel!=13){

        system("clear");

        switch(i){
            case 0:
            op1 = '*';
            op2 = ' ';
            op3 = ' ';
            break;
            case 1:
            op1 = ' ';
            op2 = '*';
            op3 = ' ';
            break;
            case 2:
            op1 = ' ';
            op2 = ' ';
            op3 = '*';
            break;
        }

        printf("\n\n");
        printf(ANSI_COLOR_RED "\t\t      ██▒   █▓ ██▓    ▄▄▄      ▓█████▄  ██▓ ███▄ ▄███▓ ██▓ ██▀███      ▒█████      ██▒   █▓ ▄▄▄       ███▄ ▄███▓ ██▓███   ██▓ ██▀███   ▒█████  \n");
        printf("\t\t     ▓██░   █▒▓██▒   ▒████▄    ▒██▀ ██▌▓██▒▓██▒▀█▀ ██▒▓██▒▓██ ▒ ██▒   ▒██▒  ██▒   ▓██░   █▒▒████▄    ▓██▒▀█▀ ██▒▓██░  ██▒▓██▒▓██ ▒ ██▒▒██▒  ██▒\n");
        printf("\t\t      ▓██  █▒░▒██░   ▒██  ▀█▄  ░██   █▌▒██▒▓██    ▓██░▒██▒▓██ ░▄█ ▒   ▒██░  ██▒    ▓██  █▒░▒██  ▀█▄  ▓██    ▓██░▓██░ ██▓▒▒██▒▓██ ░▄█ ▒▒██░  ██▒\n");
        printf("\t\t       ▒██ █░░▒██░   ░██▄▄▄▄██ ░▓█▄   ▌░██░▒██    ▒██ ░██░▒██▀▀█▄     ▒██   ██░     ▒██ █░░░██▄▄▄▄██ ▒██    ▒██ ▒██▄█▓▒ ▒░██░▒██▀▀█▄  ▒██   ██░\n");
        printf("\t\t        ▒▀█░  ░██████▒▓█   ▓██▒░▒████▓ ░██░▒██▒   ░██▒░██░░██▓ ▒██▒   ░ ████▓▒░      ▒▀█░   ▓█   ▓██▒▒██▒   ░██▒▒██▒ ░  ░░██░░██▓ ▒██▒░ ████▓▒░\n");
        printf("\t\t        ░ ▐░  ░ ▒░▓  ░▒▒   ▓▒█░ ▒▒▓  ▒ ░▓  ░ ▒░   ░  ░░▓  ░ ▒▓ ░▒▓░   ░ ▒░▒░▒░       ░ ▐░   ▒▒   ▓▒█░░ ▒░   ░  ░▒▓▒░ ░  ░░▓  ░ ▒▓ ░▒▓░░ ▒░▒░▒░ \n");
        printf("\t\t        ░ ░░  ░ ░ ▒  ░ ▒   ▒▒ ░ ░ ▒  ▒  ▒ ░░  ░      ░ ▒ ░  ░▒ ░ ▒░     ░ ▒ ▒░       ░ ░░    ▒   ▒▒ ░░  ░      ░░▒ ░      ▒ ░  ░▒ ░ ▒░  ░ ▒ ▒░ \n");
        printf("\t\t          ░░    ░ ░    ░   ▒    ░ ░  ░  ▒ ░░      ░    ▒ ░  ░░   ░    ░ ░ ░ ▒          ░░    ░   ▒   ░      ░   ░░        ▒ ░  ░░   ░ ░ ░ ░ ▒  \n");
        printf("\t\t           ░      ░  ░     ░  ░   ░     ░         ░    ░     ░            ░ ░           ░        ░  ░       ░             ░     ░         ░ ░  \n"ANSI_COLOR_RESET );

        printf( "\n\n\n\n\n\n\n");

        printf("\t     ██████ ▄▄▄█████▓ ▄▄▄       ██▀███  ▄▄▄█████▓\n");
        printf("\t     ▒██    ▒ ▓  ██▒ ▓▒▒████▄    ▓██ ▒ ██▒▓  ██▒ ▓▒\n");
        printf(ANSI_COLOR_RED"\t%c%c%c"ANSI_COLOR_RESET "  ░ ▓██▄   ▒ ▓██░ ▒░▒██  ▀█▄  ▓██ ░▄█ ▒▒ ▓██░ ▒░\n", op1, op1, op1);
        printf(ANSI_COLOR_RED"\t%c%c%C"ANSI_COLOR_RESET "    ▒   ██▒░ ▓██▓ ░ ░██▄▄▄▄██ ▒██▀▀█▄  ░ ▓██▓ ░ \n", op1, op1, op1);
        printf(ANSI_COLOR_RED"\t%c%c%c"ANSI_COLOR_RESET "  ▒██████▒▒  ▒██▒ ░  ▓█   ▓██▒░██▓ ▒██▒  ▒██▒ ░ \n", op1, op1, op1);
        printf("\t     ▒ ▒▓▒ ▒ ░  ▒ ░░    ▒▒   ▓▒█░░ ▒▓ ░▒▓░  ▒ ░░   \n");
        printf("\t     ░ ░▒  ░ ░    ░      ▒   ▒▒ ░  ░▒ ░ ▒░    ░    \n");
        printf("\t     ░  ░  ░    ░        ░   ▒     ░░   ░   ░      \n");
        printf("\t           ░                 ░  ░   ░              \n");

        printf("\n\n\n");

        printf("\t     ▄████▄   ██▀███  ▓█████ ▓█████▄  ██▓▄▄▄█████▓ ▒█████    ██████  \n");
        printf("\t     ▒██▀ ▀█  ▓██ ▒ ██▒▓█   ▀ ▒██▀ ██▌▓██▒▓  ██▒ ▓▒▒██▒  ██▒▒██    ▒ \n");
        printf(ANSI_COLOR_RED"\t%c%c%c"ANSI_COLOR_RESET "  ▒▓█    ▄ ▓██ ░▄█ ▒▒███   ░██   █▌▒██▒▒ ▓██░ ▒░▒██░  ██▒░ ▓██▄   \n", op2, op2, op2);
        printf(ANSI_COLOR_RED"\t%c%c%C"ANSI_COLOR_RESET "  ▒▓▓▄ ▄██▒▒██▀▀█▄  ▒▓█  ▄ ░▓█▄   ▌░██░░ ▓██▓ ░ ▒██   ██░  ▒   ██▒ \n", op2, op2, op2);
        printf(ANSI_COLOR_RED"\t%c%c%c"ANSI_COLOR_RESET "  ▒ ▓███▀ ░░██▓ ▒██▒░▒████▒░▒████▓ ░██░  ▒██▒ ░ ░ ████▓▒░▒██████▒▒ \n", op2, op2, op2);
        printf("\t     ░ ░▒ ▒  ░░ ▒▓ ░▒▓░░░ ▒░ ░ ▒▒▓  ▒ ░▓    ▒ ░░   ░ ▒░▒░▒░ ▒ ▒▓▒ ▒ ░   \n");
        printf("\t       ░  ▒     ░▒ ░ ▒░ ░ ░  ░ ░ ▒  ▒  ▒ ░    ░      ░ ▒ ▒░ ░ ░▒  ░ ░    \n");
        printf("\t     ░  ░  ░    ░        ░   ▒     ░░   ░   ░      \n");
        printf("\t           ░                 ░  ░   ░              \n");

        printf("\n\n\n");

        printf("\t     ▓█████ ▒██   ██▒ ██▓▄▄▄█████▓\n");
        printf("\t     ▓█   ▀ ▒▒ █ █ ▒░▓██▒▓  ██▒ ▓▒\n");
        printf(ANSI_COLOR_RED"\t%c%c%c"ANSI_COLOR_RESET"  ▒███   ░░  █   ░▒██▒▒ ▓██░ ▒░\n", op3, op3, op3);
        printf(ANSI_COLOR_RED"\t%c%c%C"ANSI_COLOR_RESET"  ▒▓█  ▄  ░ █ █ ▒ ░██░░ ▓██▓ ░ \n", op3, op3, op3 );
        printf(ANSI_COLOR_RED"\t%c%c%c"ANSI_COLOR_RESET"  ░▒████▒▒██▒ ▒██▒░██░  ▒██▒ ░ \n", op3, op3, op3 );
        printf("\t     ░░ ▒░ ░▒▒ ░ ░▓ ░░▓    ▒ ░░   \n");
        printf("\t      ░ ░  ░░░   ░▒ ░ ▒ ░    ░    \n");
        printf("\t        ░    ░    ░   ▒ ░  ░      \n");
        printf("\t        ░  ░ ░    ░   ░           \n");

        system ("/bin/stty raw");
        sel = getchar();
        system ("/bin/stty cooked");



        switch(sel){
            case 66:// Para baixo
                i++;
                if(i>2) i =0;
            break;
            case 65:// Para cima
                i--;
                if(i<0) i = 2;
            break;
            default:
                printf("Nope. Nope. Nope.\n");
        }

    }
    system("clear");
    return i;

}

// Função de mostrar os mapas
int mapas(){

    char op1, op2, op3;
    int i=0;
    char sel = 0;
    while(sel != 13){
    system("clear");

        switch(i){
            case 0:
            op1 = '*';
            op2 = ' ';
            op3 = ' ';

            break;
            case 1:
            op1 = ' ';
            op2 = '*';
            op3 = ' ';

            break;
            case 2:
            op1 = ' ';
            op2 = ' ';
            op3 = '*';

            break;
        }

        printf(ANSI_COLOR_RED"\n\n\t\t\t\t\t\t\t\t\t ███▄ ▄███▓ ▄▄▄       ██▓███   ▄▄▄        ██████ \n");
        printf("\t\t\t\t\t\t\t\t\t▓██▒▀█▀ ██▒▒████▄    ▓██░  ██▒▒████▄    ▒██    ▒ \n");
        printf("\t\t\t\t\t\t\t\t\t▓██    ▓██░▒██  ▀█▄  ▓██░ ██▓▒▒██  ▀█▄  ░ ▓██▄   \n");
        printf("\t\t\t\t\t\t\t\t\t▒██    ▒██ ░██▄▄▄▄██ ▒██▄█▓▒ ▒░██▄▄▄▄██   ▒   ██▒\n");
        printf("\t\t\t\t\t\t\t\t\t▒██▒   ░██▒ ▓█   ▓██▒▒██▒ ░  ░ ▓█   ▓██▒▒██████▒▒\n");
        printf("\t\t\t\t\t\t\t\t\t░ ▒░   ░  ░ ▒▒   ▓▒█░▒▓▒░ ░  ░ ▒▒   ▓▒█░▒ ▒▓▒ ▒ ░\n");
        printf("\t\t\t\t\t\t\t\t\t░  ░      ░  ▒   ▒▒ ░░▒ ░       ▒   ▒▒ ░░ ░▒  ░ ░\n");
        printf("\t\t\t\t\t\t\t\t\t░      ░     ░   ▒   ░░         ░   ▒   ░  ░  ░  \n");
        printf("\t\t\t\t\t\t\t\t\t       ░         ░  ░               ░  ░      ░  \n"ANSI_COLOR_RESET);
        printf("\n\n\n\n\n\n\n");

        printf("\t  ┌─┐┬─┐┬┌┬┐┌─┐┬┬─┐┌─┐  ┌┬┐┬─┐┌─┐ ┬┌─┐┌┬┐┌─┐          "ANSI_COLOR_RED"Vladimir sai de Kentucky - USA e vai para o Stanley Hotel - Colorado - USA\n"ANSI_COLOR_RESET);
        printf(ANSI_COLOR_RED"\t%c "ANSI_COLOR_RESET"├─┘├┬┘││││├┤ │├┬┘│ │   │ ├┬┘├─┤ │├┤  │ │ │\n", op1);
        printf("\t  ┴  ┴└─┴┴ ┴└─┘┴┴└─└─┘   ┴ ┴└─┴ ┴└┘└─┘ ┴ └─┘"ANSI_COLOR_RED"          No trajeto ele pode passar por 5 estações \n\n\n"ANSI_COLOR_RESET);


        printf("\t  ┌─┐┌─┐┌─┐┬ ┬┌┐┌┌┬┐┌─┐  ┌┬┐┬─┐┌─┐ ┬┌─┐┌┬┐┌─┐         "ANSI_COLOR_RED"Vladimir sai de sua casa na Pensilvânia - USA e vai para New Orleans - USA \n"ANSI_COLOR_RESET);
        printf(ANSI_COLOR_RED"\t%c "ANSI_COLOR_RESET"└─┐├┤ │ ┬│ ││││ │││ │   │ ├┬┘├─┤ │├┤  │ │ │\n", op2);
        printf("\t  └─┘└─┘└─┘└─┘┘└┘─┴┘└─┘   ┴ ┴└─┴ ┴└┘└─┘ ┴ └─┘"ANSI_COLOR_RED"         No trajeto ele pode passar por 7 estações \n\n\n"ANSI_COLOR_RESET);


        printf("\t  ┌┬┐┌─┐┬─┐┌─┐┌─┐┬┬─┐┌─┐  ┌┬┐┬─┐┌─┐ ┬┌─┐┌┬┐┌─┐        "ANSI_COLOR_RED"Vladimir sai de Glasgow - Escócia e vai para o Castelo de seu amigo Drácula, na Transilvânia - Romênia \n"ANSI_COLOR_RESET);
        printf(ANSI_COLOR_RED"\t%c "ANSI_COLOR_RESET" │ ├┤ ├┬┘│  ├┤ │├┬┘│ │   │ ├┬┘├─┤ │├┤  │ │ │\n", op3);
        printf("\t   ┴ └─┘┴└─└─┘└─┘┴┴└─└─┘   ┴ ┴└─┴ ┴└┘└─┘ ┴ └─┘"ANSI_COLOR_RED"        No trajeto ele pode passar por 11 estações \n\n\n"ANSI_COLOR_RESET);


        if (i == 0) { printf("\n \t"); system("cat 1.txt"); }
        else if (i == 1) { printf("\n \t\t\t"); system("cat 2.txt"); }
        else if (i == 2) { printf("\n \t\t\t\t\t"); system("cat 3.txt"); }

        system ("/bin/stty raw");
        sel = getchar();
        system ("/bin/stty cooked");



        switch(sel){
            case 66:// Para baixo
                i++;
                if(i>2) i =0;
            break;
            case 65:// Para cima
                i--;
                if(i<0) i = 2;
            break;
            default:
                printf("Nope. Nope. Nope.\n");
        }
    }
    system("clear");
    return i;
}

// Função start
void imprime_viagem(int **pesos) {
    system("sl");
    int tempo=0, tempo_sangue=0;

    int i =0;

    tempo = 18;


    while(caminho[i+1]!=0 && caminho[i+1]<=11){
        if(tempo >=18 && tempo <=24||tempo >=0 && tempo <=6) {

        	system("clear");

            printf("\n\n\n\n");

            system("cat viajando.txt"); printf("\n\n\n");


            printf("\t\t\t\t\t  ___                         ___ \n");
            printf("\t\t\t\t\t |   |-----------------------|   |\n");
            printf("\t\t\t\t\t | %i | -  -  -  -  -  -  -   | %i |\n", caminho[i], caminho[i+1]);
            printf("\t\t\t\t\t |___|-----------------------|___|\n");
            printf("\n\n \t\t\t\t\tIndo da estação %d para a estação %d \n\n", caminho[i], caminho[i+1]);
            tempo_sangue = pesos[caminho[i]-1][caminho[i+1]-1] + tempo_sangue;
            tempo = pesos[caminho[i]-1][caminho[i+1]-1] + tempo;
            printf("\t\t\t\t\tTempo até a estação %i: %i horas\n", caminho[i+1],tempo);
            sleep(2);
            i++;
        }
        else if(tempo > 24)  tempo = 24-tempo;
        else {
            printf("\n\n\n\n\n\n\t\t\t\t\t   Está de dia! Vladimir precisa esperar na estação!\n");
            printf(ANSI_COLOR_RED"\n\n\n\n");
            system("cat dorm.txt");
            printf(""ANSI_COLOR_RESET);
            tempo_sangue = tempo_sangue + (18-tempo);
            tempo = 18;
            system("sleep 4s");
        }
    }

    if(tempo > 24)   tempo = tempo-24;
    sleep(1);
    system("clear");
    printf(ANSI_COLOR_RED"\n\n\n\n");
    system("cat cheguei.txt");
    printf(""ANSI_COLOR_RESET);
    // Ascii art do vladimir falando (CHEGUEI)
    printf("\n\n\t Tempo de viagem: %d horas \n\n \t Horário de chegada: %d h \n\n\t Sangue consumido: %d L", tempo_sangue, tempo, ((tempo_sangue/24)+1));
    usleep(200000);
    printf("\n\n\n\n\n\t Digite ENTER para retornar ao menu  ");
    getchar();
}


void start(int **grafo) {

	system("clear");

	// Mostra as cidades disponíveis e pega o trajeto escolhido
	int trajeto_escolhido = mapas();

	start_game(grafo,trajeto_escolhido);

}


// Função que inicia o game
void start_game (int **grafo,int trajeto) {
	system("clear");
	if (trajeto == 0) {

		int duracao_total;

		add_mapa_1(grafo,5);

		duracao_total = dijkstra(5,1,5,custos);

		imprime_viagem(grafo);

	}

	else if (trajeto == 1) {

		int duracao_total;

		add_mapa_2(grafo,7);

		duracao_total = dijkstra(7,1,7,custos);

		imprime_viagem(grafo);
	}

	else if (trajeto == 2) {

		int duracao_total;

		add_mapa_3(grafo,11);

		duracao_total = dijkstra(11,1,11,custos);

		imprime_viagem(grafo);

	}
}



// Função de créditos
void credits() {

	char a[]="Responsaveis pelo programa";
	char b[]="Bryan Santos";
	char c[]="Mateus Bernardo";
	char d[]="Mathias Gonçalves";
	char enter[] = "Pressione ENTER para continuar";

	system("clear");

	system("cat creditos.txt");

	printf("\n\n\n\t\t%s\n\n", a);
	system("sleep 1s");
	printf("\t\t» %s\n\n", b);
	system("sleep 1s");
	printf("\t\t» %s\n\n", c);
	system("sleep 1s");
	printf("\t\t» %s\n\n", d);
	system("sleep 2s");
	printf("\n\n\t\t%s\n", enter);

	getchar();

}


/* *********************************** Grafos ***************************************** */



// Algoritmo de busca do caminho mínimo
int dijkstra(int vertices,int origem,int destino,int *custos) {
	int i,v, cont = 0, k=0;
	int *ant, *tmp;
	int *z;    		 // vertices para os quais se conhece o caminho minimo
	double min;
	double dist[vertices]; // vetor com os custos dos caminhos


	/* aloca as linhas da matriz */
	ant = calloc (vertices, sizeof(int *));
	tmp = calloc (vertices, sizeof(int *));

	if (ant == NULL) {
		printf ("** Erro: Memoria Insuficiente **");
		exit(-1);
	}

	z = calloc (vertices, sizeof(int *));

	if (z == NULL) {
		printf ("** Erro: Memoria Insuficiente **");
		exit(-1);
	}

	for (i = 0; i < vertices; i++) {
		if (custos[(origem - 1) * vertices + i] !=- 1) {
			ant[i] = origem - 1;
			dist[i] = custos[(origem-1)*vertices+i];
		}
		else {
			ant[i]= -1;
			dist[i] = HUGE_VAL;
		}
		z[i]=0;
	}

	z[origem-1] = 1;
	dist[origem-1] = 0;

	/* Laco principal */
	do {

		/* Encontrando o vertice que deve entrar em z */
		min = HUGE_VAL;
		for (i=0;i<vertices;i++)
			if (!z[i])
				if (dist[i]>=0 && dist[i]<min) {
					min=dist[i];v=i;
				}

		/* Calculando as distancias dos novos vizinhos de z */
		if (min != HUGE_VAL && v != destino - 1) {
			z[v] = 1;
			for (i = 0; i < vertices; i++)
				if (!z[i]) {
					if (custos[v*vertices+i] != -1 && dist[v] + custos[v*vertices+i] < dist[i]) {
						dist[i] = dist[v] + custos[v*vertices+i];
						ant[i] =v;
					}
				}
		}

	} while (v != destino - 1 && min != HUGE_VAL);

	caminho = (int*) calloc (cont, sizeof(int));

	/* Mostra o Resultado da busca */
	if (min != HUGE_VAL){
		i = destino;
		i = ant[i-1];

		while (i != -1) {
			tmp[cont] = i+1;
			cont++;
			i = ant[i];
		}

		for (i = cont; i > 0 ; i--) {
			caminho[k] = tmp[i-1];
			k++;
		}

		caminho[k] = destino;

	}

	return dist[destino-1];
}


// Mapa 01: 5 vértices
int **add_mapa_1(int **grafo,int vertices) {

	srand(time(NULL));

   	int origem, destino, custo;

   	if (!custos) free(custos);
   	custos = (int *) malloc(sizeof(int)*vertices*vertices);
   	for (int i = 0; i <= vertices * vertices; i++)
   		custos[i] = -1;

    // Construindo o grafo

    // Custo em horas (tempo de viagem até uma estação)

    origem = 1;
    destino = 2;
    custo = (rand()% 30+10);

    custos[(origem-1) * vertices + destino - 1] = custo;
    grafo[destino-1][origem-1] = custo;

    origem = 1;
    destino = 3;
    custo =  (rand()%30+10);

    custos[(origem-1) * vertices + destino - 1] = custo;
    grafo[origem-1][destino-1] = custo;

    origem = 1;
    destino = 4;
    custo =  (rand()%30+10);

    custos[(origem-1) * vertices + destino - 1] = custo;
    grafo[origem-1][destino-1] = custo;

    origem  = 2;
    destino = 3;
    custo = (rand()% 20 + 5);

    custos[(origem-1) * vertices + destino - 1] = custo;
    grafo[origem-1][destino-1] = custo;

    origem  = 3;
    destino = 5;
    custo = (rand()% 20 + 5);

    custos[(origem-1) * vertices + destino - 1] = custo;
    grafo[origem-1][destino-1] = custo;

    origem  = 4;
    destino = 5;
    custo = (rand()% 20 + 5);

    custos[(origem-1) * vertices + destino - 1] = custo;
    grafo[origem-1][destino-1] = custo;

    return grafo;

}


// Mapa 02: 07 vértices
int **add_mapa_2(int **grafo,int vertices) {

	srand(time(NULL));

	int origem, destino, custo;

   	if (!custos) free(custos);
   	custos = (int *) malloc(sizeof(int)*vertices*vertices);
   	for (int i = 0; i <= vertices * vertices; i++)
    	   custos[i] = -1;

            // Construindo o grafo

            origem = 1;
            destino = 2;
            custo = (rand()% 20 + 5);

            custos[(origem-1) * vertices + destino - 1] = custo;
            grafo[origem-1][destino-1] = custo;

            origem = 1;
            destino = 3;
            custo = (rand()% 30+10);

            custos[(origem-1) * vertices + destino - 1] = custo;
            grafo[origem-1][destino-1] = custo;

            origem = 2;
            destino = 4;
            custo = (rand()% 20 + 5);

            custos[(origem-1) * vertices + destino - 1] = custo;
            grafo[origem-1][destino-1] = custo;

            origem  = 2;
            destino = 6;
            custo = (rand()% 20 + 5);

            custos[(origem-1) * vertices + destino - 1] = custo;
            grafo[origem-1][destino-1] = custo;

            origem  = 3;
            destino = 5;
            custo = (rand()% 20 + 5);

            custos[(origem-1) * vertices + destino - 1] = custo;
            grafo[origem-1][destino-1] = custo;

            origem = 3;
            destino = 4;
            custo = (rand()% 20 + 5);

            custos[(origem-1) * vertices + destino - 1] = custo;
            grafo[origem-1][destino-1] = custo;

            origem = 4;
            destino = 7;
            custo = (rand()% 20 + 5);

            custos[(origem-1) * vertices + destino - 1] = custo;
            grafo[origem-1][destino-1] = custo;

            origem = 5;
            destino = 6;
            custo = (rand()% 20 + 5);

            custos[(origem-1) * vertices + destino - 1] = custo;
            grafo[origem-1][destino-1] = custo;

            origem  = 5;
            destino = 7;
            custo = (rand()% 20 + 5);

            custos[(origem-1) * vertices + destino - 1] = custo;
            grafo[origem-1][destino-1] = custo;

            origem  = 6;
            destino = 7;
            custo = (rand()% 20 + 5);

            custos[(origem-1) * vertices + destino - 1] = custo;
            grafo[origem-1][destino-1] = custo;

            return grafo;

}


// Mapa 03: 09 vértices
int **add_mapa_3(int **grafo,int vertices) {

    srand(time(NULL));
	int origem, destino, custo;

   	if (!custos) free(custos);
   	custos = (int *) malloc(sizeof(int)*vertices*vertices);
   	for (int i = 0; i <= vertices * vertices; i++)
    	custos[i] = -1;

            // Construindo o grafo


            // Partindo do vértice 1

            origem = 1;
            destino = 2;
            custo = ((rand()% 30) + 10);

            custos[(origem-1) * vertices + destino - 1] = custo;
            grafo[origem-1][destino-1] = custo;

            origem = 1;
            destino = 3;
            custo = (rand()% 20 + 5);

            custos[(origem-1) * vertices + destino - 1] = custo;
            grafo[origem-1][destino-1] = custo;

            origem  = 1;
            destino = 4;
            custo = (rand()% 20 + 5);

            custos[(origem-1) * vertices + destino - 1] = custo;
            grafo[origem-1][destino-1] = custo;

            // Partindo do vértice 2

            origem = 2;
            destino = 5;
            custo = (rand()% 20 + 5);

            custos[(origem-1) * vertices + destino - 1] = custo;
            grafo[origem-1][destino-1] = custo;

            origem = 2;
            destino = 6;
            custo = (rand()% 20 + 5);

            custos[(origem-1) * vertices + destino - 1] = custo;
            grafo[origem-1][destino-1] = custo;

            // Partindo do vértice 3

            origem = 3;
            destino = 5;
            custo = (rand()% 20 + 5);

            custos[(origem-1) * vertices + destino - 1] = custo;
            grafo[origem-1][destino-1] = custo;

            // Partindo do vértice 4

            origem  = 4;
            destino = 7;
            custo = (rand()% 20 + 5);

            custos[(origem-1) * vertices + destino - 1] = custo;
            grafo[origem-1][destino-1] = custo;

            // Partindo do vértice 5

            origem  = 5;
            destino = 8;
            custo = (rand()% 20 + 5);

            custos[(origem-1) * vertices + destino - 1] = custo;
            grafo[origem-1][destino-1] = custo;

            origem = 5;
            destino = 9;
            custo = (rand()% 20 + 5);

            custos[(origem-1) * vertices + destino - 1] = custo;
            grafo[origem-1][destino-1] = custo;

            // Partindo do vértice 6

            origem  = 6;
            destino = 8;
            custo = (rand()% 20 + 5);

            custos[(origem-1) * vertices + destino - 1] = custo;
            grafo[origem-1][destino-1] = custo;

            // Partindo do vértice 7

            origem = 7;
            destino = 6;
            custo = (rand()% 20 + 5);

            custos[(origem-1) * vertices + destino - 1] = custo;
            grafo[origem-1][destino-1] = custo;

            // Partindo do vértice 8

            origem  = 8;
            destino = 10;
            custo = (rand()% 20 + 5);

            custos[(origem-1) * vertices + destino - 1] = custo;
            grafo[origem-1][destino-1] = custo;

            // Partindo do vértice 9

            origem  = 9;
            destino = 10;
            custo = (rand()% 20 + 5);

            custos[(origem-1) * vertices + destino - 1] = custo;
        	grafo[origem-1][destino-1] = custo;

        	// Partindo do vértice 10

            origem  = 10;
            destino = 11;
            custo = (rand()% 20 + 5);

            custos[(origem-1) * vertices + destino - 1] = custo;
           	grafo[origem-1][destino-1] = custo;

   			return grafo;
}


/*
PROJETO FINAL FEITO POR:
    ALUNO:                                     MATR�CULA:                                  CURSO:
        CAIO MANOEL COSTA LEONARDO                  UC22200020                                  CI�NCIA DA COMPUTA��O
        LUCAS ALVES SAMPAIO                         UC22103084                                  CI�NCIA DA COMPUTA��O
        THIAGO  YURI SOUSA DIAS ALVES               UC22200046                                  CI�NCIA DA COMPUTA��O
*/

#include <stdio.h>                                                                                                                                                                          //A Biblioteca Geral � inclu�da

int main(){                                                                                                                                                                                 //Com a fun��o principal aberta, inicia-se de fato o c�digo
                                                                                                                                                                                            //SESS�O 1
    int homensTotal, mulheresTotal, sessao, pessoas1,contadorPessoas1, idade1, inteira1, meia1, arrecadacaoTotal1, valorMeia1, valorInteira1;                                               //Nomea-se todas as vari�veis inteiras da SESS�O 1, por�m sem valores definidos
    int  homens1 = 0, mulheres1 = 0, contadorIdade1 = 0, feminino1 = 0, masculino1 = 0, criancas1 = 0, adolescentes1 = 0, adultos1 = 0, idosos1 = 0, erro1 = 0;                             //Todas as vari�veis usadas para quantificar dados durante a coleta, s�o setados como zero 
    char sexo1;                                                                                                                                                                             //Nomea-se a vari�vel respons�vel por definir o Sexo da SESS�O 1
                                                                                                                                                                                            //SESS�O 2
    int pessoas2,contadorPessoas2, idade2, inteira2, meia2, arrecadacaoTotal2, valorMeia2, valorInteira2;                                                                                   //Nomea-se todas as vari�veis inteiras da SESS�O 2, por�m sem valores definidos
    int homens2 = 0, mulheres2 = 0, contadorIdade2 = 0, feminino2 = 0, masculino2 = 0, criancas2 = 0, adolescentes2 = 0, adultos2 = 0, idosos2 = 0, erro2 = 0;                              //Todas as vari�veis usadas para quantificar dados durante a coleta, s�o setados como zero
    char sexo2;                                                                                                                                                                             //Nomea-se a vari�vel respons�vel por definir o Sexo da SESS�O 2

    printf("PROJETO FINAL por:\n");
    printf(" Caio Manoel -\t UC22200020 -\t Ciencia da Computacao\n Lucas Alves -\t UC22103084 -\t Ciencia da Computacao\n Thiago Yuri -\t UC22200046 -\t Ciencia da Computacao\n\a");
    printf("____________________________________________________________________________________________________________\n\n\n");                                                           //� mostrado ao usu�rio os criadores do c�digo
    
    
    printf("CINEMA DOS CRIA\n");                                                                                                                                                            //Come�a a intera��o com o usu�rio


    printf("Informe a quantidade de sessoes:");                                                                                                                                             //Solicita-se o n�mero de sess�es
    scanf("%d", &sessao);

    while (sessao!=2){                                                                                                                                                                      //Valida a quantidade de exatas DUAS SESS�ES

        printf("Somente duas sessoes sao aceitas\nInforme novamente:");
        scanf("%d", &sessao);

    }

    printf("SESSAO 1 - NOTURNO\nQuantas pessoas assistiram:");                                                                                                                              //SESS�O 1 - Come�a a coleta de dados
    scanf("%d", &pessoas1);
    fflush(stdin);
    
    while (pessoas1<=9){                                                                                                                                                                    //Valida a quantidade de pessoas na sess�o (deve haver pelo menos 10 pessoas)

        printf("Minimo por sessao = 10\nInforme novamente:");
        scanf("%d", &pessoas1);
        fflush(stdin);

    }
        
    for (contadorPessoas1 = 1; contadorPessoas1 <= pessoas1; contadorPessoas1++){                                                                                                           //Essa repeti��o garante que os dados (sexo e idade) de cada pessoa seja coletado

        printf("PESSOA  %d\n Se identifica como Masculino(M) ou Feminino(F) e Idade(3 a 100anos):\n exemplo: Macho de 89 anos = M89\n", contadorPessoas1);
        scanf("%c%d", &sexo1, &idade1);
        fflush(stdin);

        switch (sexo1){                                                                                                                                                                     /*O sexo � classificado atrav�s de quatro letras
                                                                                                                                                                                                                            M/m = Masculino
                                                                                                                                                                                                                            F/f = Feminino
                                                                                                                                                                                            Qualquer caracter diferente disso soma um erro e aviso o usu�rio do erro*/
            case 'f': feminino1++; break;
            case 'F': feminino1++; break;
            case 'm': masculino1++; break;
            case 'M': masculino1++; break;
            default: printf("\nSexo Invalido\n"); erro1++; break;

        }
           
      
        if(idade1 < 3 || idade1 > 100){                                                                                                                                                     /*A idade � classificada em quatro intervalos
                                                                                                                                                                                                                            3 a 13 = Crian�a
                                                                                                                                                                                                                            14 a 17 = Adolescente
                                                                                                                                                                                                                            18 a 64 = Adulto
                                                                                                                                                                                                                            65 a 100 = Idoso
                                                                                                                                                                                            Qualquer n�mero fora do intervalo de 3 a 100 soma um erro e avisa o usu�rio*/
        printf("\nIdade Invalida\n");erro1++; 
       
            }
        else if (idade1 >= 3 && idade1 <= 13){
                criancas1++;
            }
        else if (idade1 >= 14 && idade1 <= 17){
                adolescentes1++;
            }
        else if ( idade1 >= 18 && idade1 <= 64){
                adultos1++;

                if(sexo1 == 'm' || sexo1 == 'M'){
                    homens1++;
                }
                else if (sexo1 == 'f' || sexo1 == 'F'){
                    mulheres1++;
                }
            }
        else if (idade1 >= 65 && idade1 <= 100){
                idosos1++;

                if(sexo1 == 'm' || sexo1 == 'M'){
                    homens1++;
                }
                else if (sexo1 == 'f' || sexo1 == 'F'){
                    mulheres1++;
                }
            }

        if (erro1 != 0)                                                                                                                                                                     //Caso haja algum erro, o programa zera todas as Vari�veis Quantificadoras e reinicia a coleta de dados da sess�o 
        {

            contadorPessoas1 = 0;
            feminino1 = 0;
            masculino1 = 0;
            criancas1 = 0;
            adolescentes1 = 0;
            adultos1 = 0;
            idosos1 = 0;
            printf("Reinicie a coleta de dados da sessao\n");

        }
        
        erro1 = 0;

    }

    meia1 = (criancas1 + adolescentes1);                                                                                                                                                    //Opera��o para descobrir a quantidade de pessoas que usaram a Meia
    inteira1 = (adultos1 + idosos1);                                                                                                                                                        //Opera��o para descobrir a quantidade de pessoas que usaram a Inteira
    valorMeia1 = meia1 * 25;                                                                                                                                                                //Opera��o para descobrir o valor em Reais arrecadado com a venda de meias
    valorInteira1 = inteira1 * 50;                                                                                                                                                          //Opera��o para descobrir o valor em Reais arrecadado com a venda de inteiras
    arrecadacaoTotal1 = valorInteira1 + valorMeia1;                                                                                                                                         //Opera��o para descobrir o valor total em Reais arrecadado com os ingressos

    printf("__________________________________________________________________________________________________________\n\n\n");
    printf("SESSAO 1: Bob Esponja\n");                                                                                                                                                      
    printf("\t\t\t\t\t\t    |---------|\n");
    printf("\t\t\t\t\t\t    |  O   O  |\n");
    printf("\t\t\t\t\t\t|---|   _   |---|\n");
    printf("\t\t\t\t\t\t|   |  |U|  |   |\n");
    printf("\t\t\t\t\t\t    |___|\n");
    printf("\t\t\t\t\t\t    |_|_|_|\n");
    printf("\t\t\t\t\t\t       |   |  \n");
    printf("\t\t\t\t\t\t     _|   |_\n");
    printf("\n\tInteira - R$50,00\n\tMeia - R$25,00\n");
    printf("Homens que assistiram:%d\nMulheres que assistiram:%d\n", masculino1, feminino1);
    printf("Publico por Faixa Etaria:\n Criancas:%d\n Adolescentes:%d\n Adultos:%d\n Idosos:%d\n", criancas1, adolescentes1, adultos1, idosos1);
    
     if (inteira1 > meia1) {
        printf("Valor Arrecadado:%d\nForam vendidas mais Inteiras (%d) do que Meias (%d)\n\n\n", arrecadacaoTotal1, inteira1, meia1);
        }
        else if (inteira1 < meia1){
        printf("Valor Arrecadado:%d\nForam vendidas mais Meias (%d) do que Inteiras (%d)\n\n\n", arrecadacaoTotal1, meia1, inteira1);
        }
        else printf("Inteiras e Meias foram igualemente vendidas\n\n\n");                                                                                                                   /*Informa os todos os dados da SESS�O 1
                                                                                                                                                                                            Homens que viram
                                                                                                                                                                                            Mulheres que viram
                                                                                                                                                                                            Crian�as que viram
                                                                                                                                                                                            Adolescentes que viram
                                                                                                                                                                                            Adultos que viram
                                                                                                                                                                                            Idosos que viram
                                                                                                                                                                                            Valor total arrecadado
                                                                                                                                                                                            Quantidade de Inteiras vendidas
                                                                                                                                                                                            Quantidade de Meias vendidas
                                                                                                                                                                                            Informa a se mais Meias ou Inteiras foram vendidas ou se houve empate*/



    printf("____________________________________________________________________________________________________________\n");



printf("SESSAO 2 - VESPERTINO\nQuantas pessoas assistiram:");                                                                                                                               //SESS�O 2 - Come�a a coleta de dados
    scanf("%d", &pessoas2);
    fflush(stdin);
    
    while (pessoas2<=9){                                                                                                                                                                     //Valida a quantidade de pessoas na sess�o (deve haver pelo menos 10 pessoas)

        printf("Minimo por sessao = 10\nInforme novamente:");
        scanf("%d", &pessoas2);
        fflush(stdin);

    }
        
    for (contadorPessoas2 = 1; contadorPessoas2 <= pessoas2; contadorPessoas2++){                                                                                                           //Essa repeti��o garante que os dados (sexo e idade) de cada pessoa seja coletado. Aqui temos um exemplo do 

        printf("PESSOA  %d\n Se identifica como Masculino(M) ou Feminino(F) e Idade(3 a 100anos):\n exemplo: Macho de 89 anos = M89\n", contadorPessoas2);
        scanf("%c%d", &sexo2, &idade2);
        fflush(stdin);

        switch (sexo2){                                                                                                                                                                      /*O sexo � classificado atrav�s de quatro letras
                                                                                                                                                                                                                            M/m = Masculino
                                                                                                                                                                                                                            F/f = Feminino
                                                                                                                                                                                            Qualquer caracter diferente disso soma um erro e aviso o usu�rio do erro*/

            case 'f': feminino2++; break;
            case 'F': feminino2++; break;
            case 'm': masculino2++; break;
            case 'M': masculino2++; break;
            default: printf("\nSexo Invalido\n"); erro2++; break;

        }
           
      
        if(idade2 < 3 || idade2 > 100){                                                                                                                                                     /*A idade � classificada em quatro intervalos
                                                                                                                                                                                                                            3 a 13 = Crian�a
                                                                                                                                                                                                                            14 a 17 = Adolescente
                                                                                                                                                                                                                            18 a 64 = Adulto
                                                                                                                                                                                                                            65 a 100 = Idoso
                                                                                                                                                                                            Qualquer n�mero fora do intervalo de 3 a 100 soma um erro e avisa o usu�rio*/
        printf("\nIdade Invalida\n");erro2++; 
       
            }
        else if (idade2 >= 3 && idade2 <= 13){
                criancas2++;
            }
        else if (idade2 >= 14 && idade2 <= 17){
                adolescentes2++;
            }
        else if ( idade2 >= 18 && idade2 <= 64){
                adultos2++;

                if(sexo2 == 'm' || sexo2 == 'M'){
                    homens2++;
                }
                else if (sexo2 == 'f' || sexo2 == 'F'){
                    mulheres2++;
                }
    
            }
        else if (idade2 >= 65 && idade2 <= 100){
                idosos2++;

                if(sexo2 == 'm' || sexo2 == 'M'){
                    homens2++;
                }
                else if (sexo2 == 'f' || sexo2 == 'F'){
                    mulheres2++;
                }

            }

        if (erro2 != 0)                                                                                                                                                                      //Caso haja algum erro, o programa zera todas as Vari�veis Quantificadoras e reinicia a coleta de dados da sess�o 
        {

            contadorPessoas2 = 0;
            feminino2 = 0;
            masculino2 = 0;
            criancas2 = 0;
            adolescentes2 = 0;
            adultos2 = 0;
            idosos2 = 0;
            printf("Reinicie a coleta de dados da sessao\n");

        }
        
        erro2 = 0;

    }

    meia2 = (criancas2 + adolescentes2);                                                                                                                                                    //Opera��o para descobrir a quantidade de pessoas que usaram a Meia
    inteira2 = (adultos2 + idosos2);                                                                                                                                                        //Opera��o para descobrir a quantidade de pessoas que usaram a Inteira
    valorMeia2 = meia2 * 25;                                                                                                                                                               //Opera��o para descobrir o valor em Reais arrecadado com a venda de meias
    valorInteira2 = inteira2 * 50;                                                                                                                                                          //Opera��o para descobrir o valor em Reais arrecadado com a venda de inteiras
    arrecadacaoTotal2 = valorInteira2 + valorMeia2;                                                                                                                                         //Opera��o para descobrir o valor total em Reais arrecadado com os ingressos

    printf("____________________________________________________________________________________________________________\n");

    printf("SESSAO 2: Joyce Aprova a Turma\n\tInteira - R$50,00\n\tMeia - R$25,00\n");
    printf("Homens que assistiram:%d\nMulheres que assistiram:%d\n", masculino2, feminino2);
    printf("Publico por Faixa Etaria:\n Criancas:%d\n Adolescentes:%d\n Adultos:%d\n Idosos:%d\n", criancas2, adolescentes2, adultos2, idosos2);
    
     if (inteira2 > meia2) {
        printf("Valor Arrecadado:%d\nForam vendidas mais Inteiras (%d) do que Meias (%d)\n\n\n", arrecadacaoTotal2, inteira2, meia2);
        }
        else if (inteira2 < meia2){
        printf("Valor Arrecadado:%d\nForam vendidas mais Meias (%d) do que Inteiras (%d)\n\n\n", arrecadacaoTotal2, meia2, inteira2);
        }
        else printf("Inteiras e Meias foram igualemente vendidas\n\n\n");                                                                                                                   /*Informa os todos os dados da SESS�O 1
                                                                                                                                                                                            Homens que viram
                                                                                                                                                                                            Mulheres que viram
                                                                                                                                                                                            Crian�as que viram
                                                                                                                                                                                            Adolescentes que viram
                                                                                                                                                                                            Adultos que viram
                                                                                                                                                                                            Idosos que viram
                                                                                                                                                                                            Valor total arrecadado
                                                                                                                                                                                            Quantidade de Inteiras vendidas
                                                                                                                                                                                            Quantidade de Meias vendidas
                                                                                                                                                                                            Informa a se mais Meias ou Inteiras foram vendidas ou se houve empate*/

    printf("____________________________________________________________________________________________________________\n");

    homensTotal = homens1 + homens2;                                                                                                                                                        //Calcula a quantidade de pessoas do sexo masculino maiores de idade que foram ao Cinema
    mulheresTotal = mulheres1 + mulheres2;                                                                                                                                                  //Calcula a quantidade de pessoas do sexo feminino maiores de idade que foram ao Cinema

    printf("Homens adultos presentes nas duas sessoes: %d\n", homensTotal);                                                                                                                 //Apresenta os resultados dos calculos acima para o usu�rio
    printf("Mulheres adultas presentes nas duas sessoes: %d\n", mulheresTotal);
    
     if (pessoas1 > pessoas2) {
        printf("sessao noturna(1) teve mais pessoas com: %d\nDo que a sessao vespertina(2) com: %d\n\n\n", pessoas1, pessoas2);
        }
        else if (pessoas1 < pessoas2){
        printf("sessao vespertina teve mais pessoas com: %d\nDo que a sessao noturna com: %d\n\n\n", pessoas2 , pessoas1);
        }
        else printf("A sessoes noturna e vespertina teve a mesma quantidade de publico\n\n\n");                                                                                             //Informa em qual das duas sess�es (NOTURNA 1 ou VESPERTINA 2) houve mais pessoas ou se a mesma quantidade
    
    printf("____________________________________________________________________________________________________________\n");

}

	int a,b;
	
	printf("Digite o seu primeiro numero: ");
	scanf("%d", &a);
	
	printf("Digite o seu segundo numero: ");
	scanf("%d", &b);
	
	
	printf("Os numeros digitados sao: %d %d\n", b, a);


//////////////////// SEGUNDO \\\\\\\\\\\\\\\\\\\\\\\

	double notacao;
	
	printf("Digite a notacao: ");
	scanf("%lf", &notacao);
	
	printf("%lfx10\n", notacao);

////////////////////// TERCEIRO /////////////////

int main(int argc, char *argv[]) {
	
int n, res;
	int bit_64, bit_32, bit_16, bit_8, bit_4, bit_2;
	
	printf("Insira o valor: ");
	scanf("%d", &n);
	
	bit_64 = n%2; /////% resto da divisão
	res = n/2; //// sempre calcular na mão
	
	bit_32 = res%2;
	res = res/2;
	
	bit_16 = res%2;
	res = res/2;
	
	bit_8 = res%2;
	res = res/2;
	
	bit_4 = res%2;
	res = res/2;
	
	bit_2 = res%2;
	res = res/2;
	
	printf("O numero %d em binario = %d%d%d%d%d%d%d", n, res%2,bit_2, bit_4, bit_8, bit_16,bit_32, bit_64);




////////////////////////// QUARTA ///////////////////////////////////




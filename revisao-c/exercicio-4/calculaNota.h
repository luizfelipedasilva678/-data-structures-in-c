int calculaNota(int gabarito[], int respostasAluno[], int tam) {
	int nota = 0, i = 0;
	
	for(i ; i < tam; i++) {
		if(gabarito[i] == respostasAluno[i]) {
			nota++;
		}
	}
	
	return nota;
}

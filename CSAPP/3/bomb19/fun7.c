fun7(char *dollar, long x){
	if(dollar==NULL) return 0xffffffff;
	long eax = *dollar;
	if(eax>x) {
		eax = fun7(*(dollar+2),x);
		eax += eax;
		return eax;
	}
	else if(eax==x){
		eax = 0;
		return 0 ;
	}
	else{  //eax < x
		dollar = *(dollar + 4); //即dollar+16bytes后，那个位置的内存，也是个地址
		eax = fun (dollar, x);
		eax = eax + eax;
		return eax;
	}
}
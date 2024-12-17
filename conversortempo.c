
void conversor_min(int n){
float conversor,conversor2;
if(n<=60){
    printf("%d segundos \n",n);
}
if(n>60 && n<3600){
    conversor= n/60.0;
    printf("%.2f minutos \n",conversor);
}
if(n>=3600){
    conversor2= n/3600.0;
    printf("%.2f horas \n",conversor2);
}
}


//write a program in c using ternary operator largest between three numbers.
int main(){
	int a,b,c;
	printf("Enter three value : ");
	scanf("%d%d%d",&a,&b,&c);
	(a>b&&a>c)?printf("Value of a is %d so a is greter",a):((b>c)?printf("value of b is %d so b is greter",b):printf("value of c is %d so c is greter",c));
	return 0;
}
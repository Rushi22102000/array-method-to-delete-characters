//array method to delete some characters i.e. numbers which we don't want with out using trivial method of swapping
main()
{
	int i=0,j=0,l=0,m=0;
	char s[100]="sc78ho787ol87";
	char s1[100];
	l=strlen(s);
	
	while(i!=l)
	{
	if(isalpha(s[i]))
	{
	s1[j++]=s[i];
	m++;
	}
	i++;}


	
	for(i=0;i<m+2;i++)
	{s[i]=s1[i];}
	printf("%s",s);
	
}

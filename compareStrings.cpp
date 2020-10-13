int main()
{
       char str1[50],str2[50];
	cout<<"Enter the  first string=";
	gets(str1);

	cout<<"Enter the second string=";
	gets(str2);


	int l1=strlen(str1);
	int l2=strlen(str2);

	if(l1==l2)
	{
		cout<<"String are of same length";

	}

	else
	{
		cout<<"String are not of same length";
	}
}

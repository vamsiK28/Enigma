#include<stdio.h>

int rotor(int i, int r, int n)
{
	int m;
	char en,ch, main[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ", rotor2[]="NTZPSFBOKMWRCJDIVLAEYUXHGQ", rotor4[]="PEZUOHXSCVFMTBGLRINQJWAYDK", rotor5[]="ZOUESYDKFWPCIQXHMVBLGNJRAT", rotor3[]="JVIUBHTCDYAKEQZPOSGXNRMWFL", rotor1[]="JGDQOXUSCAMIFRVTPNEWKBLZYH";
	n=i+n;
	n=n%26;
	if(r==1)
		en=rotor1[n];
	else if(r==2)
		en=rotor2[n];
	else if(r==3)
		en=rotor3[n];
	else if(r==4)
		en=rotor4[n];
	else if(r==5)
		en=rotor5[n];
	else
		;
	for(m=0;m<26;m++)
	{
		if(en==main[m])
		break;
	}
	return m;
}

int rotorn(int i, int r, int n)
{
	int m;
	char en,ch, main[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ", rotor2[]="SGMOTFYXPNIRJAHDZLEBVQKWUC", rotor4[]="WNIYBKOFRUZPLSEATQHMDJVGXC", rotor5[]="YSLGDIUPMWHTQVBKNXEZCRJOFA", rotor3[]="KEHIMYSFCALZWUQPNVRGDBXTJO", rotor1[]="JVICSMBZLAUWKREQDNHPGOTFYX";
	n=i+n;
	n=n%26;
	if(r==1)
		en=rotor1[n];
	else if(r==2)
		en=rotor2[n];
	else if(r==3)
		en=rotor3[n];
	else if(r==4)
		en=rotor4[n];
	else if(r==5)
		en=rotor5[n];
	else
		;
	for(m=0;m<26;m++)
	{
		if(en==main[m])
			break;
	}
	return m;
}

int reflector(int i)
{
	int m;
	char reflect[]="EJMZALYXVBWFCRQUONTSPIKHGD", main[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ", en;
	en=reflect[i];
	for(m=0;m<26;m++)
	{
		if(en==main[m])
			break;
	}
	return m;
}

int main()
{
    int i, r1, r2, r3, n1, n2, n3, b1, b2, b3, t;
    char main[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ",ch,en;
    printf("Please enter the settings\n");
    printf("rotor id setting:-");
    printf("\n Rotor slot 1:   ");
    scanf("                   %d",&r1);
    printf("\n Rotor slot 2:   ");
    scanf("                    %d",&r2);
    printf("\n Rotor slot 3:   ");
    scanf("                    %d",&r3);
    printf("\nRotor slot setting preview:-\n");
    printf("Rotor slot 1:  %d\n",r1);
    printf("Rotor slot 2:  %d\n",r2);
    printf("Rotor slot 3:  %d\n",r3);
    printf("choose the rotor number setting:-\n");
    printf("Rotor 1: ");
    scanf("          %d",&n1);
    printf("\nRotor 2: ");
    scanf("          %d",&n2);
    printf("\nRotor 3: ");
    scanf("          %d",&n3);
    printf("\nRotor number setting preview:-\n");
    printf("Rotor 1:  %d\n",n1);
    printf("Rotor 2:  %d\n",n2);
    printf("Rotor 3:  %d\n",n3);
    printf("Rotor break point setting:-");
    printf("\nRotor 1: ");
    scanf("          %d",&b1);
    printf("\nRotor 2: ");
    scanf("          %d",&b2);
    printf("\nRotor 3: ");
    scanf("          %d",&b3);
    printf("\nRotor break point setting preview:-\n");
    printf("Rotor 1:  %d\n",b1);
    printf("Rotor 2:  %d\n",b2);
    printf("Rotor 3:  %d\n",b3);
    printf("you can now proceed, enter 0 to exit\n");
    printf("enter letter in upper caps\n");
    while(1)
    {
    	printf("|Input :    ");
    	scanf(" %c",&ch);
    	for(i=0;i<26;i++)
    	{
    		if(ch==main[i])
    			break;
		}
    	n1=n1%26;
    	n2=n2%26;
    	n3=n3%26;
    	i=rotor(i,r1,n1);
    	i=i-n1;
    	if(i<0)
            i=i+26;
    	i=rotor(i,r2,n2);
    	i=i-n2;
    	if(i<0)
            i=i+26;
    	i=rotor(i,r3,n3);
    	i=i-n3;
    	if(i<0)
            i=i+26;
    	i=reflector(i);
    	i=rotorn(i,r3,n3);
    	i=i-n3;
    	if(i<0)
            i=i+26;
    	if(n2==b2)
    		n3=n3+1;
    	i=rotorn(i,r2,n2);
    	i=i-n2;
    	if(i<0)
            i=i+26;
    	if(n1==b1)
    		n2=n2+1;
    	i=rotorn(i,r1,n1);
    	i=i-n1;
    	if(i<0)
            i=i+26;
    	n1=n1+1;
    	en=main[i];
    	printf("|OUTPUT:    %c\n",en);
    	printf("_____________________________________\n");
	}
}

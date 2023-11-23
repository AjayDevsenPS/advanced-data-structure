#include<stdio.h>
int main()
{
int size,i,choice;
printf("Enter the size of the universal set:");
scanf("%d",&size);
int universal_set[size],universal_set_bit[size],s_set[size],s_set_bit[size],union_set[size],intersection_set;
//making second set
printf("\nEnter the elements of univeral set\n");
for(i=0;i<size;i++)
{
scanf("%d",&universal_set[i]);
}
//making universalset bitwise array
for(i=0;i<size;i++)
{
universal_set_bit[i]=1;
}



//printing the universal set and its bit string
printf("\nThe universal set is\n");
for(i=0;i<size;i++)
{
printf("%d,",universal_set[i]);
}
printf("\nThe universal set bit is:");
for(i=0;i<size;i++)
{
printf("%d",universal_set_bit[i]);
}



//making first set
printf("\nEnter the size of first set");
scanf("%d",&f_size);
f_set[size],f_set_bit[size],s_set[size]
printf("\nEnter the elements of first set\n");
for(i=0;i<f_size;i++)
{
scanf("%d",&f_set[i]);
}


// making first set bit wise array
for(i=0;i<size;i++)
{
 if(universal_set[i]==f_set[i])
	{
	f_set_bit[i]=1;
	}
 else
	{
	f_set_bit[i]=0;
	}
}


//printing first set and bitwise string
printf("\nThe first set is\n");
for(i=0;i<size;i++)
{
printf("%d,",f_set[i]);
}
printf("\nThe first set bit is:");
for(i=0;i<size;i++)
{
printf("%d",f_set_bit[i]);
}




//making second set
printf("\nEnter the elements of second set:\n");
for(i=0;i<size;i++)
{
scanf("%d",&s_set[i]);
}


// making second set bit wise array
for(i=0;i<size;i++)
{
 if(universal_set[i]==s_set[i])
        {
        s_set_bit[i]=1;
        }
 else
	{
	s_set_bit[i]=0;
	}
}

//printing second set and bitwise string
printf("\nThe second set is\n");
for(i=0;i<size;i++)
{
printf("%d,",s_set[i]);
}
printf("\nThe second set bit is:");
for(i=0;i<size;i++)
{
printf("%d",s_set_bit[i]);
}





do{
printf("\n\nEnter your choice:\n1.Union\n2.Intersection\n3.Difference(first-second)\n0.Exit\n");
scanf("%d",&choice);

switch(choice)
{
	case 1:
	for(i=0;i<size;i++)
		{
		if((f_set_bit[i]||s_set_bit[i])==1)
			{
			union_set[i]=1;
			}
		}
	printf("\nThe union set is:\n");
	for(i=0;i<size;i++)
	{
		if(union_set[i]==1)
		{printf("%d,",universal_set[i]);}
	}
	break;

	case 2:
	for(i=0;i<size;i++)
		{
		if(f_set_bit[i]==s_set_bit[i])
			{
			intersection_set[i]=1;
			}
		}
	printf("The intersection set is:\n");
	for(i=0;i<size;i++)
	{
	if(intersection_set[i]==1)
	{printf("%d,",universal_set);}
	}
	break;

	case 3:
	for(i=0;i<n;i++)
	{
		if(f_set_bit[i]==set_set_bit[i])
		{difference_set[i]=0;}

	else
		{difference_set[i]=f_set_bit[i];
	}
	printf("\nThe diffence is:\n");
	for(i=0;i<f_size;i++)
	{
	
	}

	break;


	default:
	printf("Invalid input");
}

}while(choice!=0);



return 1;
}


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Book
{
	char nab[40];
	char aut[20];
	char ui[20];
	int cost,nob,shn;
	struct Book *nxt;
};
struct Book *f,*l;
int max,smax,sbmax;
int Insert()
{
	FILE *fp,*fmax;
	fp=fopen("F:\\file.txt","a");
	if(fp==NULL)
	{
		printf("\nFile doesn't exist");
		return;
	}
	system("cls");
	struct Book *b;
    b=(struct Book*)malloc(sizeof(struct Book));
	b->nxt=NULL;
	printf("\nEnter book name=");
	scanf("%s",&b->nab);
	printf("\nEnter author name=");
	scanf("%s",&b->aut);
	printf("\nEnter book cost=");
	scanf("%d",&b->cost);
	printf("\nEnter number of books=");
	scanf("%d",&b->nob);
	printf("\nEnter shelf number=");
	scanf("%d",&b->shn);
	printf("\nEnter unique id=");
	scanf("%s",&b->ui);
	if(f==NULL)
	{
		f=b;
	}
	else
	{
		l->nxt=b;
	}
	l=b;
	fwrite(b,sizeof(struct Book),1,fp);
	fclose(fp);
	max=max+1;
	fmax=fopen("F:\\fmax.txt","w");
	if(fmax==NULL)
	{
		printf("\nFile doesn't exist");
		return;
	}
	fprintf(fmax,"%d",max);
	fclose(fmax);
	return (max);
}
int Dispb()
{
	struct Book *tmp;
	tmp=f;
	while(tmp!=NULL)
	{
		printf("\n.........................................");
		printf("\n|BOOK NAME         |%s",tmp->nab);
		printf("\n|AUTHOR NAME       |%s",tmp->aut);
		printf("\n|BOOK COST         |%d",tmp->cost);
		printf("\n|NUMBER OF BOOKS   |%d",tmp->nob);
		printf("\n|SHELF NUMBER      |%d",tmp->shn);
		printf("\n|UNIQUE ID         |%s",tmp->ui);
		printf("\n.........................................");
		tmp=tmp->nxt;
	 } 
	 return 0;
}
void fillstructure(int max)
{
	f=l=NULL;
	int i;
	FILE *fp;
	fp=fopen("F:\\file.txt","r");
	struct Book *ff,*fp1;
	ff=(struct Book*)malloc(sizeof(struct Book));
	fread(ff,sizeof(struct Book),1,fp);
	ff->nxt=NULL;
	f=ff;
	l=ff;
	for(i=2;i<=max;i++)
	{
		fp1=(struct Book*)malloc(sizeof(struct Book));
		fread(fp1,sizeof(struct Book),1,fp);
		l->nxt=fp1;
		l=fp1;
	}
	fclose(fp);
}
struct Student
{
	char nas[40];
	char std[5];
	char brn[20];
	char uis[20];
	char mob[10];
	char br[40];
	int roll;
	struct Student *go;
};
struct Student *st,*e;
int sdata()
{
	FILE *fp,*fmax;
	fp=fopen("F:\\Sfile.txt","a");
	if(fp==NULL)
	{
		printf("\nFile doesn't exist");
		return;
	}
	system("cls");
    struct Student *s;
    s=(struct Student*)malloc(sizeof(struct Student));
	s->go=NULL;
	printf("\nEnter student name=");
	scanf("%s",&s->nas);
	printf("\nEnter standard=");
	scanf("%s",&s->std);
	printf("\nEnter branch=");
	scanf("%s",&s->brn);
	printf("\nEnter roll number=");
	scanf("%d",&s->roll);
	printf("\nEnter mobile number=");
	scanf("%s",&s->mob);
	printf("\nEnter unique id=");
	scanf("%s",&s->uis);
	if(st==NULL)
	{
		st=s;
	}
	else
	{
		e->go=s;
	}
	e=s;
	fwrite(s,sizeof(struct Student),1,fp);
	fclose(fp);
	smax=smax+1;
	fmax=fopen("F:\\Sfmax.txt","w");
	if(fmax==NULL)
	{
		printf("\nFile doesn't exist");
		return;
	}
	fprintf(fmax,"%d",smax);
	fclose(fmax);
	return (smax);
	
}
int Disps()
{
	struct Student *tmp;
	tmp=st;
	while(tmp!=NULL)
	{
		printf("\n.........................................");
		printf("\n|STUDENT NAME      |%s",tmp->nas);
		printf("\n|STANDARD          |%s",tmp->std);
		printf("\n|BRANCH            |%s",tmp->brn);
		printf("\n|ROLL NUMBER       |%d",tmp->roll);
		printf("\n|MOBILE NUMBER     |%s",tmp->mob);
		printf("\n|UNIQUE ID         |%s",tmp->uis);
		printf("\n.........................................");
		tmp=tmp->go;
	 } 
	 return 0;
}
void Sfillstructure(int smax)
{
	st=e=NULL;
	int i;
	FILE *fp;
	fp=fopen("F:\\Sfile.txt","r");
	struct Student *ff,*fp1;
	ff=(struct Student*)malloc(sizeof(struct Student));
	fread(ff,sizeof(struct Student),1,fp);
	ff->go=NULL;
	st=ff;
	e=ff;
	for(i=2;i<=smax;i++)
	{
		fp1=(struct Student*)malloc(sizeof(struct Student));
		fread(fp1,sizeof(struct Student),1,fp);
		e->go=fp1;
		e=fp1;
	}
	fclose(fp);
}
int comp(char a[20],char b[20])
{
	int i,result;
	for(i=0;a[i]!='\0'&&b[i]!='\0';i++)
	{
		if(a[i]!=b[i])
		{
			break;
		}
	}
	result=a[i]-b[i];
	return (result);
}
struct Sb
{
	char sn[20];
	char bn[20];
	char da[20];
	char no[10];
	char i[10];
    int pe;
    struct Sb *link;
};
struct Sb *peh,*ba;

int bits()
{
	char sti[20];
	char bi[20];
	char doi[20];
	int period,c,fl=0;
	struct Student *tmp1,*tmp3;
	struct Book *tmp2,*tmp4;
	tmp1=st;
	tmp2=f;
	printf("\nEnter student unique id=");
	scanf("%s",&sti);
	while(tmp1!=NULL)
	{
		c=comp(sti,tmp1->uis);
		if(c==0)
		{
		printf("\n.........................................");
		printf("\n|STUDENT NAME      |%s",tmp1->nas);
		printf("\n|STANDARD          |%s",tmp1->std);
		printf("\n|BRANCH            |%s",tmp1->brn);
		printf("\n|ROLL NUMBER       |%d",tmp1->roll);
		printf("\n|MOBILE NUMBER     |%s",tmp1->mob);
		printf("\n.........................................");
		printf("\nEnter Date Of Issue=");
		scanf("%s",&doi);
		printf("\nEnter required days=");
		scanf("%d",&period);
		fl=1;
		tmp3=tmp1;	
		}	
	    tmp1=tmp1->go;
	}
	if(fl==1)
	{
	printf("\nEnter book unique id=");
	scanf("%s",&bi);
	while(tmp2!=NULL)
	{
		c=comp(bi,tmp2->ui);
		if(c==0)
		{
			if(tmp2->nob!=0)
			{
		tmp2->nob=tmp2->nob-1;
		printf("\nUpdated book data=");	
		printf("\n.........................................");
		printf("\n|BOOK NAME         |%s",tmp2->nab);
		printf("\n|AUTHOR NAME       |%s",tmp2->aut);
		printf("\n|BOOK COST         |%d",tmp2->cost);
		printf("\n|NUMBER OF BOOKS   |%d",tmp2->nob);
		printf("\n|SHELF NUMBER      |%d",tmp2->shn);
		printf("\n.........................................");
		tmp4=tmp2;
		
	       }
	       else
	       {
	       	printf("\nOut of stock.");
	       	fl=0;
		   }
		}
		
		tmp2=tmp2->nxt;
	}
    }
    else
    {
    	printf("\nTry again later.");
	}
	if(fl==1)
	{
	    printf("\n.........................................");
		printf("\n|BOOK NAME         |%s",tmp4->nab);
		printf("\n|AUTHOR NAME       |%s",tmp4->aut);
		printf("\n|BOOK COST         |%d",tmp4->cost);
		printf("\n|STUDENT NAME      |%s",tmp3->nas);
		printf("\n|STANDARD          |%s",tmp3->std);
		printf("\n|BRANCH            |%s",tmp3->brn);
		printf("\n|ROLL NUMBER       |%d",tmp3->roll);
		printf("\n|MOBILE NUMBER     |%s",tmp3->mob);
		printf("\n|DATE OF ISSUE     |%s",doi);	
		printf("\n|RETURN IN         |%d Days",period);
		printf("\n.........................................");
		printf("\nThank you for visit");
		FILE *fp,*fmax;
    	fp=fopen("F:\\Sbfile.txt","a");
	    if(fp==NULL)
	    {
		printf("\nFile doesn't exist");
		return;
    	}
		struct Sb *s;
        s=(struct Sb*)malloc(sizeof(struct Sb));
        strcpy(s->bn,tmp4->nab);//s->bn=tmp4->nab;
        strcpy(s->sn,tmp3->nas);// s->sn=tmp3->nas;
        strcpy(s->da,doi);
        strcpy(s->no,tmp3->mob);
        strcpy(s->i,tmp3->uis);
        s->pe=period;
        if(peh==NULL)
	    {
		peh=s;
	    }
	    else
	    {
		ba->link=s;
	    }
	    ba=s;
	    fwrite(s,sizeof(struct Sb),1,fp);
	    fclose(fp);
	    sbmax=sbmax+1;
    	fmax=fopen("F:\\Sbfmax.txt","w");
    	if(fmax==NULL)
    	{
    		printf("\nFile doesn't exist");
    		return;
    	}
    	fprintf(fmax,"%d",sbmax);
    	fclose(fmax);
    	return (sbmax);
    }
    }
    void Sbfillstructure(int sbmax)
{
	peh=ba=NULL;
	int i;
	FILE *fp;
	fp=fopen("F:\\Sbfile.txt","r");
	struct Sb *ff,*fp1;
	ff=(struct Sb*)malloc(sizeof(struct Sb));
	fread(ff,sizeof(struct Sb),1,fp);
	ff->link=NULL;
	peh=ff;
	ba=ff;
	for(i=2;i<=sbmax;i++)
	{
		fp1=(struct Sb*)malloc(sizeof(struct Sb));
		fread(fp1,sizeof(struct Sb),1,fp);
		ba->link=fp1;
		ba=fp1;
	}
	fclose(fp);
}
int dispsb()
{
	struct Sb *tmps;
	tmps=peh;
	while(tmps!=NULL)
	{
		printf("\n.........................................");
		printf("\n|STUDENT NAME      |%s",tmps->sn);
		printf("\n|BOOK NAME         |%s",tmps->bn);
		printf("\n|DATE OF ISSUE     |%s",tmps->da);
		printf("\n|PERIOD            |%d",tmps->pe);
		printf("\n|MOBILE NUMBER     |%s",tmps->no);
		printf("\n|STUDENT ID        |%s",tmps->i);	
		printf("\n.........................................");
		tmps=tmps->link;
	 } 
	 return 0;
}
void delete(char *y)
{
struct Sb *a,*b,*tmp;
a=b=tmp=peh;
int match;
while(tmp!=NULL)
{
match=comp(y,tmp->i);
while(a!=NULL && match!=0)
{
	b=a;
	a=a->link;
}
tmp=tmp->link;
}
if(a==NULL)
{
	printf("\nElement not found.");
}
else
{
	if(a==peh)
	{
		peh=peh->link;
		sbmax=sbmax-1;
	}
	else if(a==ba)
	{
		ba=b;
		ba->link=NULL;
		sbmax=sbmax-1;
	}
	else
	{
		b->link=a->link;
		sbmax=sbmax-1;
	}
}
}
void fill()
{
	                    struct Book *a;
	                    a=f;
		          	    FILE *fp1,*fp2;
		          	    fp1=fopen("F:\\file.txt","w");
						//fwrite(a,sizeof(struct Book),1,fp1);
					    fclose(fp1);
						//a=a->nxt;
						while(a!=NULL)
						{
							
						fp2=fopen("F:\\file.txt","a");
						
						fwrite(a,sizeof(struct Book),1,fp2);
						a=a->nxt;
						fclose(fp2);
					    }
					 
}
void Sbfill()
{
	                    struct Sb *a;
	                    a=peh;
		          	    FILE *fp1,*fp2;
		          	    fp1=fopen("F:\\Sbfile.txt","w");
						//fwrite(a,sizeof(struct Book),1,fp1);
					    fclose(fp1);
						//a=a->nxt;
						while(a!=NULL)
						{
							
						fp2=fopen("F:\\Sbfile.txt","a");
						
						fwrite(a,sizeof(struct Sb),1,fp2);
						a=a->link;
						fclose(fp2);
					    }
						FILE *fp3;
		          	    fp3=fopen("F:\\Sbfmax.txt","w");
		          	    fprintf(fp3,"%d",sbmax);
		          	    fclose(fp3);
					 
}
void rbook(int n)
{
	struct Book *tmp;
	char bi[20];
	int c,fl;
	tmp=f;
	printf("\nEnter book id=");
	scanf("%s",&bi);
	while(tmp!=NULL)
	{
	   c=comp(bi,tmp->ui);	
	   if(c==0)
	   {
	   	tmp->nob=tmp->nob+n;
	   	printf("\nUpdated book data=");	
		printf("\n.........................................");
		printf("\n|BOOK NAME         |%s",tmp->nab);
		printf("\n|AUTHOR NAME       |%s",tmp->aut);
		printf("\n|BOOK COST         |%d",tmp->cost);
		printf("\n|NUMBER OF BOOKS   |%d",tmp->nob);
		printf("\n.........................................");
		fl=1;
	   }
	   tmp=tmp->nxt;
	}
	if(fl==1)
	{
		printf("\nThank you.visit again.");
	}
	else
	{
		printf("\nWrong id.");
	}
}
int receive()
{
	int a,b,c,fl=1;
	char match[10];
	struct Sb *tmp;
	tmp=peh;
	printf("\n1.Receive new books.\n2.Receive book from student.");
	printf("\nEnter your choice=");
	scanf("%d",&a);
	switch(a)
	{
		case 1:printf("\nEnter no. of books=");
		       scanf("%d",&b);
		       rbook(b);
		       break;
		case 2:printf("\nEnter student unique id=");
		       scanf("%s",&match);
		       while(tmp!=NULL)
		       {
		       	c=comp(match,tmp->i);
		       	if(c==0)
		       	{
		        rbook(1);
		        delete(match);
		        fl=0;
		        }
		        tmp=tmp->link;
		       }
		       if(fl==1)
		       {
		       	printf("\n Wrong id.");
			   }
		       break;
	}
}
int choice()
{
	FILE *fmax;
	fmax=fopen("F:\\fmax.txt","r");
	fscanf(fmax,"%d",&max);
	fclose(fmax);
	FILE *fmax1;
	fmax1=fopen("F:\\Sfmax.txt","r");
	fscanf(fmax1,"%d",&smax);
	fclose(fmax1);
	FILE *fmax2;
	fmax2=fopen("F:\\Sbfmax.txt","r");
	fscanf(fmax2,"%d",&sbmax);
	fclose(fmax2);
	int exc=1,input,who;
    int passi=12345,passu;
	printf("\nSpecify your identity:");
	printf("\n1.Admin \n2.Student \n3.Close");
	printf("\nEnter your choice=");
	scanf("%d",&who);
	if(max>0)
	{
	fillstructure(max);
    }
	if(smax>0)
	{
	Sfillstructure(smax);
    }
    if(sbmax>0)
	{
	Sbfillstructure(sbmax);
    }
	system("cls");
	switch(who)
	{
		case 1:	printf("\n*********************************************************************************");
	            printf("\n                               Welcome Admin                                     ");
	            printf("\n*********************************************************************************");
		        printf("\nEnter your password=");
		        scanf("%d",&passu);
		        system("cls");
		        if(passu!=passi)
		        {
		        	printf("\nWrong password.");
				}
				else
				{
				while(exc==1)
	             {   
	             printf("\n1.Insert Books \n2.Display all books list \n3.Insert new student data \n4.Display student data \n5.Issue book \n6.Receive book \n7.List of book received students\n8.Exit");
		         printf("\nEnter your choice=");
	       	     scanf("%d",&input);
	       	     system("cls");
		         switch(input)
	    	      {
			      case 1:Insert();
			             break;
			      case 2:Dispb();
		                 break;
		          case 3:sdata();
		                 break;
		          case 4:Disps();
		                 break;
		          case 5:bits();
		                 break;
				  case 6:receive();
				         break; 
				  case 7:dispsb();
				         break;     
		          case 8:exc=-1;
		                 fill();
		                 Sbfill();
		                 break;
		          }       
        	     }
                }
                break;
        case 2: system("cls");
		        printf("\n*********************************************************************************");
		        printf("\n                               Welcome Student                                   ");
	            printf("\n*********************************************************************************"); 
				while(exc==1)
	             {   
	             printf("\n1.Display all books list \n2.List of book received students \n3.Exit");
		         printf("\nEnter your choice=");
	       	     scanf("%d",&input);
	       	     system("cls");
		         switch(input)
	    	      {
			        case 1:Dispb();
			               break;
			        case 2:dispsb();
				           break;     
		            case 3:exc=-1;
		                   break;
		          } 
			     }
				 break;
		case 3: exc=0;
		        break;       
	}
	if(exc==0)
	{
		printf("\nThank you");
	}
	if(exc==-1)
	{
	choice();	
	}
	return 0;
}

int main()
{
	printf("\n*********************************************************************************");
	printf("\n                         Welcome To VCS Library                                  ");
	printf("\n*********************************************************************************");
	l=f=NULL;
	choice();
	return 0;
}


#include<iostream>
#define M 10
using namespace std;
typedef struct node
{
      char name[M];
      int prn;
      char type;
      struct node *next;
}NODE;

class pinacle
{
      NODE *head,*last;
public:
pinacle()
      {
            head=NULL;
      }
      void create()
      {
            NODE *t;
            t=new NODE;
            t->next=NULL;
cout<<"\nentername :-";
cin>>t->name;
cout<<"\nenterprn :";
cin>>t->prn;
cout<<"\nentertype :";
cin>>t->type;
            if(head==NULL)
            {
                  head=t;
                  last=t;
            }

            else
            {
                  if(t->type=='p')
                  {
                        t->next=head;
                        head=t;
                  }
                   else if(t->type=='s')
                  {
                        last->next=t;
                        last=t;
                  }
                  else
                  {
                        if(head==last)
                        {
                              head->next=t;
                              last=t;
                        }
                        else
                        {
                              t->next=head->next;
                              head->next=t;

                        }
                  }

            }

      }

      void display()
      {
            NODE *t1;
            t1=head;
            while(t1!=NULL)
            {
                  if(t1->type=='p')
                  {
cout<<"\n---------------------------president";
cout<<"\nname ;"<<t1->name;
cout<<"\nprn :"<< t1->prn;
                  }
                  if(t1->type=='s')
                  {
cout<<"\n---------------------------secretary";
cout<<"\nname ;"<<t1->name;
cout<<"\nprn :"<< t1->prn;
                  }
                  t1=t1->next;
            }
            t1=head;
            while(t1!=NULL)
            {
                  if(t1->type=='m')
                  {
cout<<"\n---------------------------member";
cout<<"\nname ;"<<t1->name;
cout<<"\nprn :"<< t1->prn;
                  }
                  t1=t1->next;
            }
      }
      void changepre()
      {
            head->type='m';
            NODE *t;
            t=new NODE;
            t->type='p';
            t->next=NULL;

cout<<"\nentername :-";
cin>>t->name;
cout<<"\nenterprn :";
cin>>t->prn;
            t->next=head;
            head=t;

      }

      void changesre()
      {
            last->type='m';
            NODE *t;
            t=new NODE;
            t->type='s';
            t->next=NULL;
cout<<"\nentername :-";
cin>>t->name;
cout<<"\nenterprn :";
cin>>t->prn;
            last->next=t;
            last=t;

      }

      void deletep()
      {
            NODE *t;
            t=head;
            head=head->next;
            head->type='p';
            delete t;
      }

      void deletes()
      {
            NODE *t,*t1;
            t=head;
            while(t->next!=last)
            {
                  t=t->next;
            }
            t1=t->next;
            last=t;
            last->type='s';
            last->next=NULL;
            delete t1;

      }

      void deletem()
      {
            NODE *t1,*t2;
            int t;
cout<<"enter prn :";
cin>>t;
            t1=head->next;
            t2=head;
            while(t1!=NULL)
            {
                  if(t==t1->prn)
                  {
                        t2->next=t1->next;
                        delete t1;
cout<<"member dekted";
                        break;
                  }
                  t1=t1->next;
                  t2=t2->next;
            }
            if(t2==last)
            {
cout<< "menber not found";
            }
      }

      void concat(pinacle p)
      {
            last->type='m';
            last->next=p.head;
p.head->type='m';
            last=p.last;
      }
};

int main()
{
      int choice;
pinacle p1,p2;
      while(choice!=9)
      {
cout<<"\n1.add";
cout<<"\n2.display";
cout<<"\n3.change president";
cout<<"\n4.change secretary ";
cout<<"\n5.delete p";
cout<<"\n6.delte s";
cout<<"\n7.delete m";
cout<<"\n8.concat";
cout<<"\n9.exit";
cout<<"\nenterchoice :";
cin>>choice;
            switch(choice)
            {
            case 1:
                  p1.create();
                  break;
            case 2:
                  p1.display();
                  break;
            case 3:
                  p1.changepre();
                  break;
            case 4:
                  p1.changesre();
                  break;
            case 5:
                  p1.deletep();
                  break;
            case 6:
                  p1.deletes();
                  break;
            case 7:
                  p1.deletem();
                  break;
            case 8:
                  int i=0;
                  while(i<6)
                  {
                        p2.create();
i++;
                  }
                  p1.concat(p2);
                  break;
            }
      }
}

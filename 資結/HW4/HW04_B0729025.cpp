#include<iostream>
#include <time.h> 
#include <ctime>
#include <cstdlib>

using namespace std; 

struct pol{
	int coef;
	int exp;
	pol* next;
};

pol* AddNode(int m)
{
	int coef;
	int exp;
		
	cin>>coef>>exp;
	
	pol*head = new pol;//建立一個和pol一樣大小的區塊，命名為head
	
	//建立第一個節點 
	head->coef=coef;
	head->exp=exp;
	head->next=NULL;
	//建立後續節點 
	pol *current=head;//讓current指向head 
	for(int i=1;i<m;i++)
	{
		coef= rand()%50+1;
		exp= rand()%100+1;
		
		//cin>>coef>>exp;
		current->next=new pol;
		current=current->next;
		current->coef=coef;
		current->exp=exp;
		current->next=NULL;
	}
	current=head;
		
}

pol* AddNewNode(pol* poly3, int coef, int exp) 
{
    pol* newnode = new pol; 
    newnode->coef = coef; 
    newnode->exp = exp;
    newnode->next = NULL;
  
    while (poly3 == NULL) 
        return newnode;
  
    pol* p = poly3; 
    while (p->next != NULL)
        p = p->next;
    
	p->next = newnode; 
    return poly3; 
} 

void merge(pol *poly3)
{
	pol *p,*q,*temp;
	p = poly3;
	
	while(p != NULL && p->next != NULL)
	{
		q=p;
		while(q->next != NULL)
		{
			if(p->exp==q->next->exp)
			{
				p->coef=p->coef+q->next->coef;
				temp=q->next;
				q->next=q->next->next;
				delete(temp);
			}
			else q=q->next;
		}
		p=p->next;
	}
	
}

pol* MultiplyPol(pol* poly1, pol* poly2, pol* poly3) 
{ 
	//double START,END;
	//START = clock();
	int coef, exp;
    pol *p, *q; 
    p = poly1; 
    q = poly2; 
    while (p != NULL)
	{ 
        while (q != NULL)
		{ 
            coef = p->coef * q->coef; 
            exp = p->exp + q->exp;
            poly3 = AddNewNode(poly3, coef, exp);
            q = q->next;
        }
        q = poly2; 
        p = p->next; 
    }
    merge(poly3);
    //END = clock();
    //cout<<"time: "<< (END - START) / CLOCKS_PER_SEC <<endl;
    
    return poly3; 
}

void OutputLinkedList(pol* out) 
{ 
    while(out->next != NULL)
	{
		cout<<out->coef<<"x^"<<out->exp<<" + ";
		out=out->next;
			if(out==NULL)
				break;
	}
	
	while(out->next == NULL)
	{
		cout<<out->coef<<"x^"<<out->exp<<endl;
		out=out->next;
			if(out==NULL)
				break;
	}
}
  
int main() 
{
	
	double START,END;
	
    pol *poly1 = NULL;
	pol *poly2 = NULL;
	pol *poly3 = NULL; 

    int m;//多項式的term數
	cout<<"Please input m terms of poly1:";
	cin>>m;
	poly1=AddNode(m);
	cout<<"Poly1: ";
	OutputLinkedList(poly1);
	cout<<endl;
	
	cout<<"Please input n terms of poly2:";
	cin>>m;
	poly2=AddNode(m);
	cout<<"Poly2: ";
	OutputLinkedList(poly2);
	cout<<endl;
  
	START = clock();
    poly3=MultiplyPol(poly1,poly2,poly3);
    END = clock();
	
	cout<<"Result: ";
	OutputLinkedList(poly3);
	
	cout<<"time: "<< (END - START) / CLOCKS_PER_SEC <<endl;

}

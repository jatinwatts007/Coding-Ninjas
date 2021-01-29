
/*************
 Driver program to test below functions
 
int main()
{
    int count1,count2,choice;
    cin >> count1;
    
    int *degree1 = new int[count1];
    int *coeff1 = new int[count1];
    
    for(int i=0;i < count1; i++) {
        cin >> degree1[i];
    }
    
    for(int i=0;i < count1; i++) {
        cin >> coeff1[i];
    }
    
    Polynomial first;
    for(int i = 0; i < count1; i++){
        first.setCoefficient(degree1[i],coeff1[i]);
    }
    
    cin >> count2;
    
    int *degree2 = new int[count2];
    int *coeff2 = new int[count2];
    
    for(int i=0;i < count2; i++) {
        cin >> degree2[i];
    }
    
    for(int i=0;i < count2; i++) {
        cin >> coeff2[i];
    }
    
    Polynomial second;
    for(int i = 0; i < count2; i++){
        second.setCoefficient(degree2[i],coeff2[i]);
    }
    
    cin >> choice;
    
    Polynomial result;
    switch(choice){
            // Add
        case 1:
            result = first + second;
            result.print();
            break;
            // Subtract
        case 2 :
            result = first - second;
            result.print();
            break;
            // Multiply
        case 3 :
            result = first * second;
            result.print();
            break;
            
        case 4 : // Copy constructor
        {
            Polynomial third(first);
            if(third.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
        case 5 : // Copy assignment operator
        {
            Polynomial fourth(first);
            if(fourth.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
    }
    
    return 0;
}
****************/
#include<bits/stdc++.h>

class Polynomial {
    public:
    int *degCoeff;
    int capacity;// Name of your array (Don't change this)
    
    public:
    
    Polynomial()
    {
        degCoeff=new int [5];
		for(int i=0;i<5;i++)
        {
            degCoeff[i]=0;
        }
        capacity=5;
    }
    
    Polynomial(Polynomial const &p)
    {
        this->degCoeff = new int [p.capacity];
        for(int i=0;i<p.capacity;i++)
        {
            this->degCoeff[i]= p.degCoeff[i];
        }
        this->capacity=p.capacity;
    }
    
    
    void setCoefficient(int d,int c)
    {
        while(d>capacity-1)
        {
            int *deg1 = new int [2*capacity];
            for(int i=0;i<capacity;i++)
            {
                deg1[i]=degCoeff[i];
            }
            for(int i=capacity;i<2*capacity;i++)
            {
                deg1[i]=0;
            }
            degCoeff=deg1;
            capacity=2*capacity;
        }
        
        
        degCoeff[d]=c;
    }
    
    Polynomial operator+(Polynomial const &p)
    {
        Polynomial p1;
        int x = min(this->capacity,p.capacity);
        int y = max(this->capacity,p.capacity);
        for(int i=0;i<x;i++)
        {
            if(this->degCoeff[i]!=0 && p.degCoeff[i]!=0)
            {
                p1.setCoefficient(i,this->degCoeff[i]+p.degCoeff[i]);
            }else {
                if(this->degCoeff[i]!=0)
                {
                    p1.setCoefficient(i,this->degCoeff[i]);
                }
                if(p.degCoeff[i]!=0)
                {
                   p1.setCoefficient(i,p.degCoeff[i]); 
                }
            }
        }
        if(this->capacity==x)
        {
            for(int i=x;i<y;i++)
            {
                if(p.degCoeff[i]!=0)
                {
                   p1.setCoefficient(i,p.degCoeff[i]); 
                }
            }
        }else{
            for(int i=x;i<y;i++)
            {
                if(this->degCoeff[i]!=0)
                {
                   p1.setCoefficient(i,this->degCoeff[i]); 
                }
            }
        }
        
        return p1;
    }
    
    Polynomial operator-(Polynomial const &p)
    {
        Polynomial p1;
        int x = min(this->capacity,p.capacity);
        int y = max(this->capacity,p.capacity);
        for(int i=0;i<x;i++)
        {
            if(this->degCoeff[i]!=0 && p.degCoeff[i]!=0)
            {
                p1.setCoefficient(i,this->degCoeff[i]+(-p.degCoeff[i]));
            }else {
                if(this->degCoeff[i]!=0)
                {
                    p1.setCoefficient(i,this->degCoeff[i]);
                }
                if(p.degCoeff[i]!=0)
                {
                   p1.setCoefficient(i,-p.degCoeff[i]); 
                }
            }
        }
        
        
        if(this->capacity==x)
        {
            for(int i=x;i<y;i++)
            {
                if(p.degCoeff[i]!=0)
                {
                   p1.setCoefficient(i,-p.degCoeff[i]); 
                }
            }
        }else{
            for(int i=x;i<y;i++)
            {
                if(this->degCoeff[i]!=0)
                {
                   p1.setCoefficient(i,this->degCoeff[i]); 
                }
            }
        }
        
        return p1;
    }
    
    
    Polynomial  operator*(Polynomial const &p)
    {
        Polynomial p1;
        for(int i=this->capacity-1;i>=0;i--)
        {
            for(int j=p.capacity-1;j>=0;j--)
            {
                if(this->degCoeff[i]!=0 && p.degCoeff[j]!=0)
                {
                    if(p1.degCoeff[i+j]!=0)
                    {
                        p1.setCoefficient(i+j,p1.degCoeff[i+j]+this->degCoeff[i]*p.degCoeff[j]);
                    }else
                    p1.setCoefficient(i+j,this->degCoeff[i]*p.degCoeff[j]);
                }
            }
        }
        
        return p1;
    }
    
    void operator=(Polynomial const &p)
    {
        this->degCoeff = new int [p.capacity];
        for(int i=0;i<p.capacity;i++)
        {
            this->degCoeff[i]= p.degCoeff[i];
        }
        this->capacity=p.capacity;
    }
    
    void print()
    {
        for(int i=0;i<this->capacity;i++)
        {
            if(this->degCoeff[i]!=0)
            {
                cout<<degCoeff[i]<<"x"<<i<<" ";
            }
        }
    }
    // Complete the class
    
};

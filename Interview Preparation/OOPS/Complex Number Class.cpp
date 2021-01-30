/**********
 
Following is the main function we are using internally.
Refer this for completing the ComplexNumbers class.
 
 
int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }
    
}
 
 ************/


class ComplexNumbers {
    // Complete this class
    int i;
    int r;
    
    public:
    
    ComplexNumbers(int r,int i){
        this->i=i;
        this->r=r;
    }
    
    void print()
    {
        cout<<r<<" "<<"+ "<<"i"<<i;
    }
    
    void plus(ComplexNumbers c)
    {
        this->i=this->i+c.i;
        this->r = this->r+c.r;
    }
    
    
    void multiply(ComplexNumbers c)
    {
        int x = (this->r*c.r)+((this->i*c.i)*-1);
        int y = (this->r*c.i)+(this->i*c.r);
        this->i=y;
        this->r = x;
    }
    
    
    
    
    
    
};

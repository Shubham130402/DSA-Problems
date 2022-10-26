class ractangle{
    private:
    int length;
    int bredth;
    public:
    reactangle();
    reactangle(int l, int b);
    reactangle(reactangle &r);

}
int main ()
{
    
    reactangle r(10,8);
   
}
reactangle::reactangle()
{
    length =0;
    bredth=0;
}

reactangle::reactangle(int l, int b){
    length = l;
    bredth=b;
}


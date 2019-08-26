double PowerWithUnsignedExponent(double base,unsigned int exponent)
{
    if(exponent==0)
        return 1;
    if(exponent==1)
        return base;
        
    double result = PowerWithUnsignedExponent(base,exponent>>1);
    result*=result;
    if(exponnent & 0x1==1)
        result*=base;
        
    return result;
}

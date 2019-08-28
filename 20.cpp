bool isNumeric(const char* str)
{
    if(str==nullptr)
        return false;
        
    bool numeric = scaInteger(&str);
    
    if(*str=='.')
    {
        ++str;
        numeric=scanUnsignedInteger(&str)||numeric;
    }
    if(*str=='e'||*str=='E')
    {
        ++str;
        numeric=numeric&&scanInteger(&str);
    }
    return numeric&&**str=='\0'
}

bool scanUnsignedInteger(&str)
{
    const char*before=*str;
    while(**str!='\0'&&**str>='0'&&**str<='9')
        ++(*str);
        
    return *str>before;
}

bool scanInteger(const char**str)
{
    if(**str=='+'||**str=='-')
        ++(*str);
    return scanUnsignedInteger(str);
}

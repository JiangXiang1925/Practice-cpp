bool match(char* str,char* pattern)
{
    if(str == nullptr || pattern == nullptr)
        return false;
        
    return matchCore(str,pattern);
}

bool matchCore(char* str,char* pattern)
{
    if(*str=='\0' && *pattern=='\0')
        return true;
        
    if(*str!=='\0' && *pattern=='\0')
        return false;
        
    if(*(pattern+1)=='*')
    {
        if(*pattern==*str || (*pattren == '.' && *str!='\0'))
            return matchCore(str+1,pattern+2)
                || matchCore(str+1,pattern)
                || matchCore(str,pattern+2)
    }
    
    if(*str == *pattern || (*pattern=='.' && *str!='\0'))
        return matchCore(str+1,pattern+1);
        
    return false;
}

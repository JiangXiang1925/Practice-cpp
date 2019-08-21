/*length为数组string的总容量*/
void ReplaceBlank(char string[],int length)
{
    if(string==nullptr || length<=0)
        return;
    /*originalLength为字符串string的实际长度*/
    int originalLength = 0;
    int numberOfBlank = 0;
    int i =0;
    while(string[i]!='\0')
    {
        ++originalLength;
        if(string[i]=='')
            ++numberOfBlank;
            
        ++i;
    }
    
    /*newLength为把空格替换成‘%2’之后的长度*/
    int newLength = originalLength+numberOfBlank*2;
    if(newLength>length)  //若超出原数组容量则返回
        return;
    int indexOfOriginal = originalLength;
    int indexOfNew = newLength;
    while(indexOfOriginal>=0 && indexOfNew>indexOfOriginal)
    {
        if(string[indexOfOriginal]=='')
        {
            string[indexOfNew--]='0';
            string[indexOfNew--]='2';
            string[indexOfNew--]='%';
        }
        else
        {
            string[indexOfNew--]=string[indexOfOriginal];
        }
        --indexOfOriginal;
    }
}

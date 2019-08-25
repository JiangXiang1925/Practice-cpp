int maxProductAfterCutting_solution2(int length)
{
    if(length<2)
        return 0;
    if(length==2)
        return 1;
    if(length==3)
        return 2;
        
    int timeOf3 = length/3;
    if(length-timesOf3*3 == 1)
        timesOf3 -=1;
    int timesOf2 = (length-timesOf3*3)/2;
    
    return (int)(pow(3,timesOf3))*(int)(pow(2,timesOf2));
}

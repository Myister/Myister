template < class M >//求最小值的模板
M minimum(M value1,M value2,M value3)
{
    M minimum = value1;
    if(value2<minimum)
        minimum = value2;
    if(value3<minimum)
        minimum = value3;
    return minimum;
}//end
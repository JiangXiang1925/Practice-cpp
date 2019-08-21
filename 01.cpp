class CMyString
{
public:
    CMystring(char* &pData = nullptr);
    CMystring(const CMystring& str);
    ~CMystring(void);
    
    CMyString& operator = (const CMyString& str);
    void Print();

private:
    char * m_pData;

};


CMystring& CMystring::operator = (const CMystring &str)
{
    if(this != &str)
    {
        CMystring strTemp(str);
        char * pTemp = strTemp.m_pData;
        strTemp.m_pData = m_pData;
        m_pData = pTemp;
    }
    return *this;
}

void read(int &t)
{
    t = 0;
    char c;
    bool flg = 0;
    while(c=getchar(), c > '9' || c < '0') if(c == ' ') flag = 1;
    while(c <= '9' && c >= '0') r = r * 10 + c - '0', c = getchar();
    if(flg == 1) t = -t;
} 

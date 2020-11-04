#include "cstring.h"

int main()
{
    cstring_new(cs);
    cs->appendStr(cs, "123", 0);
    cs->appendChar(cs, '4');
    cs->appendInt(cs, '4');
    printf("%s \n", cs->peek(cs));

    cs->frontStr(cs, "789", 0);
    printf("%s \n", cs->peek(cs));

    cs->dropBegin(cs, 2);
    printf("%s \n", cs->peek(cs));

    cs->dropEnd(cs, 2);
    printf("%s \n", cs->peek(cs));

    cstring_del(cs);

    return 0;
}
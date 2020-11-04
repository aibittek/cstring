# C语言版本的string的对象化封装实现



参考源地址：https://mp.weixin.qq.com/s/Y7uvLWCX0i7wlARIg3qE-g

对以上参考的代码做了对象化的封装，新的使用方式如下：

```c
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
```

以上内容的输出结果如下：

```shell
123452
789123452
9123452
91234
```


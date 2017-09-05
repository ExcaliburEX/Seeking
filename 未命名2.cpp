int i;//定义一个int类型的变量i
size_t size=sizeof(i);//用sizeof操作得到变量i的类型的大小
//这是一个size_t类型的值
//可以用来对一个size_t类型的变量做初始化
i=(int)size;//size_t类型的值可以转化为int类型的值
charc='a';//c保存了字符a，占一个字节
wchar_twc=L'a';//wc保存了宽字符a，占两个字节
//注意'a'表示字符a，L'a'表示宽字符a
intarr[]={1,2,3,4,5};//定义一个数组
int*p1=&arr[0];//取得数组中元素的地址，赋值给指针
int*p2=&arr[3];
ptrdiff_t diff=p2-p1;//指针的减法可以计算两个指针之间相隔的元素个数
//所得结果是一个ptrdiff_t类型
i=(int)diff;//ptrdiff_t类型的值可以转化为int类型的值

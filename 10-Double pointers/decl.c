int main()
{
    // argv是一个指针,它指向一个指针,这个指针有指向char
    char **argv;

    // names是一个数组,数组里有10个元素,每个元素是一个指针,每个指针指向int
    int *names[10];

    // musician_score_table是一个指针,这个指针指向一个数组，数组里有10个元素，每个元素是一个int
    int(*musician_score_table)[10];

    // StrCpyStd是一个函数,函数有两个参数,返回一个int型的指针
    int *StrCpyStd(char *dest, const char *src);

    // comp是一个指针,这个指针指向一个函数,这个函数接受两个参数,返回一个int
    int (*comp)(const void *left, const void *right);

    // atexit是一个函数,它接受一个指针,这个指针指向一个函数,这个函数没有参数,返回void,最后atexit函数返回一个int
    int atexit(void (*func)(void));

    // signal是一个函数,它接受一个int和一个函数指针,这个指针接受一个int返回void,然后signal返回一个指针,这个指针指向一个函数,这个函数接受一个int,返回void
    void (*signal(int sig, void (*handler)(int)))(int);

    // func是一个函数,有两个参数,返回一个指针,指向一个数组,数组中的每个元素是一个指针,这个指针又指向一个函数,这个函数没有参数,返回char
    char (*(*func(int num, char *str))[])();

    // arr是一个有三个元素的数组,每个元素是一个指针,每个指针指向一个函数,这个函数没有参数,返回一个指针,这个指针指向一个数组,这个数组有五个元素,每个元素是一个char
    char(*(*arr[3])())[5];
}
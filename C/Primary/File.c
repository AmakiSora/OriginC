#include <stdio.h>
/**
 * 文件
 * 打开文件:
 *      FILE *fopen(const char *filename,const char *mode)
 *      模式(mode):
 *          r   打开一个已有的文本文件,允许读取文件
 *          w   打开一个文本文件,允许写入文件,
 *              如果文件不存在,则会创建一个新文件,在这里,您的程序会从文件的开头写入内容,
 *              如果文件存在,则该会被截断为零长度,重新写入!!!(清空文件)
 *          a   打开一个文本文件,以追加模式写入文件
 *              如果文件不存在,则会创建一个新交件,在这里,您的程序会在已有的文件内容中追加内容
 *          r+  打开一个文本文件,允许读写文件
 *          w+  打开一个文本文件,允许读写文件。
 *              如果文件已存在,则文件会被截断为零长度(清空文件),
 *              如果文件不存在,则会创建一个新文件
 *          a+  打开一个文本文件,允许读写文件
 *              如果文件不存在,则会创建一个新文件,读取会从文件的开头开始,写入则只能是追加夜式
 *          如果处理的是二进制文件(图片,视频等),则使用"rb","wb","ab","rb","r+b","wb+","w+b","ab+","a+b"模式
 * 关闭文件:
 *      int fclose(FILE *f)
 *          如果关闭成功,会返回0,并释放内存;如果关闭文件时发生错误,返回EOF;
 *          如果不关闭文件,之前所有写入的内容都无效
 * 读取文件:
 *      int fgetc(FILE *f)
 *          从f所指向的输入文件中读取一个字符,返回值是读取的字符,如果发生错误则返回EOF。
 *      char *fgets(char *buf,int n,FILE *f)
 *          从f所指向的输入流中读取n-1个字符,它会把读取的字符串复制到缓冲区buf,并在最后追加一个null字符来终止字符串
 *          如果这个函数在读取最后一个字符之前就遇到一个换行符'\n'或文件的末尾EOF,则只会返回读取到的字符,包括换行符
 *      int fscanf(FILE *f,char *s,...)
 *          函数来从文件中读取字符串,但是在遇到第一个空格字符时,它会停止读取
 * 写入文件:
 *      int fputc(int c,FILE *f)
 *          把c的字符值写入到f指向的文件中,如果写入成功,会返回当前字符;如果发生错误,则返回EOF
 *      int fputS(char *s,FILE *f)
 *          把字符串s写入到f指向的文件中,如果写入成功,会返回一个非负值;如果发生错误,则返回EOF
 *      int fprintf(FILE *f,char *s)
 *          同上
 */
void write(){//写
    //创建一个文件指针
    FILE *file = NULL;
    //打开文件
//    file = fopen("D:\\cosmos\\test\\1.txt","w+");//文件会被覆盖,慎用
    file = fopen("D:\\cosmos\\test\\1.txt","a+");//在文件后追加
    //写入
    fputc('A',file);
    fputs("bcd",file);
    fprintf(file,"666");
    //关闭文件
    fclose(file);
}
void read(){//读
    //创建一个文件指针
    FILE *file = NULL;
    //打开文件
    file = fopen("D:\\cosmos\\test\\1.txt","r+");
    //读取
    char buffer[1024];//缓冲区
    fscanf(file,"%s",buffer);//只能读取一行,遇到换行符就结束
    printf("%s\n",buffer);

    while (fgets(buffer,1024,file)!=NULL){//能读取完所有
        printf("%s\n",buffer);
    }
}
int main(){
    write();
    read();
}
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
   char *arg_list[] = {		/* 外部程式參數列 (配合字尾 v) */
      "ls",                     /* argv[0] 即程式名稱 */
      "-l",
      "/tmp",
      NULL };			/* 以 NULL 為結尾 */

   execvp("ls", arg_list);      /* 在 PATH 路徑尋找外部程式 */
   printf("The end of the program.\n");
}

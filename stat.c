#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<unistd.h>

   void main(){
    char*path,path1[10];
    struct stat*nfile;
    nfile=(struct stat*)malloc(sizeof(struct stat));
    printf("Enter the filename:");
    scanf("%s",path1);
    stat(path1,nfile);
printf("Total size of program:%ld\n",nfile->st_size);
printf("user id:%d\n",nfile->st_uid);
printf("blocksize:%ld\n",nfile->st_blksize);
printf("last access time:%ld\n",nfile->st_atime);
printf("last modification :%ld\n",nfile->st_mtime);
printf("production mode:%d\n",nfile->st_mode);
printf("number of links:%ld\n",nfile->st_nlink);
}

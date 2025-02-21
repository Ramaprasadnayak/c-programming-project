#include<stdio.h>
struct Student{
    int roll,marks;
    char name[20];
    char course[20];
};
typedef struct Student student;
char filename[] = "student_data.txt";
int flag=1;

void storeinfile(student s1[],int num){
    FILE *file =fopen(filename,"w");
    if(file == NULL){
        printf("\nunable to create the file\n");
        flag=0;
    }
    else{
    for(int i=0;i<num;i++){
        fprintf(file,"Student %d:\n  Rollno : %d\n  Name : %s\n  Course : %s\n  Marks : %d\n\n",i+1,s1[i].roll,s1[i].name,s1[i].course,s1[i].marks);
    }
    printf("\nfile created successfully!\n");
    fclose(file);
    }
}

int searchstudents(student s1[],int num,int search){\
    int pos,point=0;
    for(int i=0;i<num;i++){
        if(s1[i].roll==search){
            pos=i;
            point=1;
            break;
        }
    }
    if(point==1){
        return pos;
    }
    else{
        printf("roll number not found");
        flag=0;
    }
}

int main(){
    int num,search,pos;
    student s1[20];
    printf("Enter the number of students:");
    scanf("%d",&num);
    printf("(Rollno,Name,course,marks)\n");
    for(int i=0;i<num;i++){
        printf("Student %d:",i+1);
        scanf("%d%s%s%d",&s1[i].roll,s1[i].name,s1[i].course,&s1[i].marks);
    }
    storeinfile(s1,num);
    printf("Enter the rollno for searhing :");
    scanf("%d",&search);
    pos=searchstudents(s1,num,search);
    if(flag==1){
    printf("Student Found: %s, %s, Marks: %d \nRecord saved in %s\n",s1[pos].name,s1[pos].course,s1[pos].marks,filename);
    }
    else{
        printf("Error!");
    }
    return 0;
}

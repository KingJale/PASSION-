#include <iostream>
using namespace std;

class Aset{
    public://先全部声明，定义在外面
        int* creatset(int);//根据数组构造集合
        void printall(int*);//输出所有元素
        bool find(int*,int);//判断是否含有指定元素
        int* Union(int*,int*);//取并集
        int* Difference(int*,int*);//取差集
        int* Intersection(int*,int*);//取交集
}

int* Aset::creatset(int a){
    int* p=new int[sizeof(a)];
    int no=0;//no用来指向构建的集合中的元素
    for(int i=0;i<sizeof(a);i++){
        int k=0;//k用来标记a[i]之后是否存在和它一样的元素
        for(int j=i+1;j<sizeof(a);j++){
            if(a[i]==a[j]){k=1;break;}
        }
        if(!k){p[no]=a[i];no++;}
    }
    return p;
}

void Aset::printall(int* p){
    for(int i=0;i<sizeof(p);i++)cout<<p[i]<<"\n"<<endl;
}

bool Aset::find(int* p,int target){
    for(int i=0;i<sizeof(p);i++)if(target==p[i])return 1;
    return 0;
}

int* Aset::Union(int* p1,int* p2){
    int* p=new int[sizeof(p1)+sizeof(p2)];
    int pp;//用来指向p的元素位置
    for(int i=0;i<sizeof(p2);i++)if(Aset::find(p1,p2[i])==0){p[pp]=p2[i];pp++;}
    for(int i=0;i<sizeof(p1);i++){p[pp]=p1[i];pp++;}
    return p;
}

int* Difference(int* p1,int* p2){
    int* p=new int[sizeof(p1)+sizeof(p2)];
    int pp=0;
    for(int i=0;i<sizeof(p1);i++)if(Aset::find(p2,p1[i])==0){p[pp]=p1;pp++;}
    for(int i=0;i<sizeof(p2);i++)if(Aset::find(p1,p2[i])==0){p[pp]=p2;pp++;}
    return p;
}

int* Aset::Intersection(int* p1;int* p2){
    int pp=0;
    if(sizeof(p1)>=sizeof(p2))int* p=new int[sizeof(p1)];
    else int* p=new int[sizeof(p2)];
    for(int i=0;i<sizeof(p2);i++)if(Aset::find(p1,p2[i])==1){p[pp]=p2[i];pp++;}
    return p;
}
### 一、算术运算符

- +、-：两个操作数类型一般要求一致

- *、/、%：乘法、除法、取余
```C
int a = b+10;    // CPU一个周期可以处理

int a = b*10;    // CPU可能多个周期，甚至要利用软件的模拟方法去实现乘法，或无法得到结果
```
- 取余%：可用于得到一个范围的数，n%m<m  
得到m进制的一个个位数  
循环数据结构的下标

### 二、逻辑运算符

> 真        假  
> 非零    零  
> 返回结果就是 0/1  
> 容易与位运算混淆

- ||、&&，左右操作数互换操作过程不同

```c
#include <stdio.h>

int main(void) {
    int a = 10;
    int res;
    res = ((a == 10) || printf("========\n"));
    printf("the res is %d\n",res);

    return 0;
}

// the res is 1
// 取a!=10时
// =======
// the res is 1
```

- \> 、<、>=、<=，简单大小判断

- ！逻辑取反操作，注意区分逐位取反符号~
- ? : ，三目运算，类似于if else

### 三、位运算符

- << 左移：乘法*2，对于有符号数和无符号数都适用（二进制）
`m<<=n    // m*2^n`

- \>> 右移：除法/2，仅适用无符号数，有符号数负数标志位为1


- &：按位与
  - &:&0，屏蔽，清零；&1取出；（注意操作时保护的其他位）`a = a&(~(0x1<<n))`

- |：按位或
  - |：|0，保留；|1，设置为高电平的方法，设置set

- ^：按位异或
  - 多用于算法，工程上少用

  ```c
  void swap(int* a,int* b)
  {
      *a = *a ^ *b;
      *b = *a ^ *b;
      *a = *a ^ *b;
  }
  ```


- ~：按位取反
  - 注意保护除操作位外的其他位


### 四、内存访问符

- 赋值运算符
  - =
  - +=、&=、|=、……

- 内存访问符
  - () 限制操作优先级，多用； 函数访问；
  - \[ ] 地址访问ID符号
  - {} 函数体的限制苻
  - ./-> 对连续空间地址访问
    - .  (变量访问)
    - ->(变量访问)
  - &/* 取地址，指针标志



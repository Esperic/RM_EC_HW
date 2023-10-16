<h1 align="center">
  <br>
  EC Homework 2024
  <br>
</h1>
<p align="center">
<strong>
<font color ="#00A1E9">
C/C++ & Git
</font></strong>
</p>

<p align="center">
<strong>
<font color ="#F9B62C">
And Something else?
</font></strong>
</p>

# 1. 作业要求

本仓库直接作为作业发布的地方，个人作业以其他分支形式发布，具体可见以下拓扑图：

```txt
this_repo
├─wyx's_repo
│  ├─main   // 每个人有自己的main分支，dev分支等等，注意应当是基于这个仓库创建的分支
│  ├─dev
│  └─feat/xxx
├─ctz's_repo
│  ├─main
│  └─dev
...
```

可以选择在队伍里面创建一个仓库，但是更加推荐到自己的页面创建public仓库，方便我们查看以及不会占用队伍太多仓库 :)
*注意！！！题目会一道一道发布，如果不正确初始化自己的仓库就pull不了我们的更新了*

# 2.作业题目

## 实现一个简易RM对战模拟系统

要有不同种类机器人，会有方法来处理每个刻的机器人行为（包括移动，射击，兑换矿石，打符等），这个程序在电脑上运行即可，通过终端输出消息来显示，比如

```txt
r1 hit b2, r2 hp -100 -> 100
b2 from (2,2) go to (1,2)
r3 follow b2, from (1,10) to (1,5)
r3 follow b2, from (1,5) to (1,2)
b3 try hit r3, fail
```

可以随机自动跑最好，不可以也无所谓，但是一定要展示出你写的函数能工作

### 1. 第一阶段（纯c，不允许使用class关键字和引用等cpp特性）

我们已经提供了两个结构体的定义，注意，你可以修改定义，但是不推荐修改。你需要完成的是：

> 1. 实现更多的结构体定义，可以自由发挥，比如射击参数结构体，功率-缓存结构体，并且仿造`moveRobot`函数，写出一些其他可以更改结构体数据的函数，比如`reduceHP`
> 2. 思考我写的函数可能有什么问题，有必要的话加以修改
> 3. 创建机器人结构体，并且在main函数中创建几个实例
> 4. 想想如果一个机器人要射击另一个机器人，这个shoot函数应该怎么传参，怎么返回值，怎么实现

### 2. 第二阶段 待发布

### 3. 第三阶段 待发布

# 3. 注意事项

1. 发布题目不会修改文件只会增加文件，所以理应不会有合并冲突，如果真的存在请自行修复
2. 不要修改本README.md
3. 注意commit质量和规范，包括不限于单次commit的内容，commit信息，格式等
4. 注意代码规范，你可以不按照提供的代码的规范，自行修改，但是请保持自己的规范
5. 注意代码质量，不要出现内存泄漏，不要出现未初始化变量，不要出现未定义行为等等
6. 注意代码可读性，不要出现过长的函数，过长的变量名，过长的文件名等等
7. 注意代码可维护性，不要出现过于复杂的逻辑，不要出现过于复杂的数据结构等等
8. 同上，写注释，创建说明文档（请使用markdown，不会自学）
9. 我们不会中期检查每个阶段，但是最终我们会查看你的commit记录，所以请务必按照要求完成，阶段完成后给这个commit添加tag，比如`stage1`，`stage2`等
10. 题目是开创性的，请发挥想象力，并且不要问我比如`可不可以创建一个 底盘参数结构体`，没有什么是不可以做的
11. 不要上传idea文件夹哟

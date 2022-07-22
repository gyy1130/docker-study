第一节的课后作业 （关于Docker简介 ）  
🔔题目：编写一个程序，使其能作为容器中的1号进程  
👌要求：  
1. 编写程序，打包成二进制文件init  
1. 运行 docker run -v `pwd`/init:/init -v `pwd`/zombie:/zombie --entrypoint /  init --name zombie -d centos  
1. 运行 docker exec zombie /zombie  
1. 在宿主机运行top, 查看zombie是否为0，为0则表示init具有回收僵尸进程的能力，程序验证通过  

💖完成本次课程你所需要的资源：  
课堂培训的实操文档（复习使用）：  
https://www.yuque.com/docs/share/ee7d1a95-1444-4ed6-817d-dd6473a52791?  
课程源代码及相关资料  
https://git.papamk.com/linjing/container-k8s-course  
虚拟机安装教程  
https://blog.csdn.net/weixin_52799373/article/details/124324077  
第一课 演示操作  
https://www.yuque.com/docs/share/ee7d1a95-1444-4ed6-817d-dd6473a52791？# 《第一课》
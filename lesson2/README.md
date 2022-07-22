第二节的课后作业 （Docker镜像）  
🔔题目：容器镜像瘦身  
👌要求：  
1. docker pull shareinto/php:fat
1. docker images 查看镜像有276MB
1. 尝试给镜像瘦身，要求降到70MB以下
1. 瘦身完成后，镜像还能正常运行 docker run -d --name php -p 80:80 shareinto/php:fat
1. curl 127.0.0.1 或 curl <容器ip> 查看是否能正常输出

💖完成本次作业你所需要的资源：  
课堂培训的实操文档（复习使用）：  
https://www.yuque.com/docs/share/49046946-aacc-4b43-9c79-ef3a6f3cce21?  
课程源代码及相关资料（同第一节课作业）  
https://git.papamk.com/linjing/container-k8s-course  
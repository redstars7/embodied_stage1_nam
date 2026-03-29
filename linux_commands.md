mkdir -p stage1/linux_task/notes
mkdir -p stage1/linux_task/src
mkdir -p stage1/linux_task/result
touch 1.txt 2.txt 3.txt
cp 1.txt ../result/
grep "rain" 1.txt
tar -zcvf linux_task.tar.gz linux_task
chmod 600 linux_task.tar.gz

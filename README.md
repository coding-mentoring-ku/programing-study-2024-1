# 2024-1 c mentoring homework

## ���� ���� ���

1. �ش� repository�� url�� ������ �� local���� clone�Ѵ�. 
```shell
git clone ${url}
```
2. commit �� �ÿ��� name�� email�� �����Ѵ�. (�ڽ��� github ������ ��ϵ� ���ϰ� �̸�)
```shell
git config user.name "${�̸�}"
git config user.email "${space email}"
```
3. �ڽ��� �̸��� ������ȣ�� �̿��� branch�� �����Ѵ�.
```shell
git branch --show-current # branch Ȯ��
git checkout main # branch change
git checout -b ${branch name} # create new branch
```
4. ������Ʈ ���� ���� �ڽ��� �̸����� �� ������ �ش� ���� ������ �����Ѵ�.
5. ������ �Ϸ�Ǹ� �����ϱ� ���� commit�� �����Ѵ�. �̶� commit comment�� �����Ӱ� �ۼ��Ѵ�. 
```shell
git add ${file name} # or git add .
git commit -m "commit comment"
```
6. commit�� �Ϸ�Ǹ� �ڽ��� ���� remote repository�� push
```shell
git push oirgin #{working branch name}
```
7. �ڽ��� �ۼ��� brach�� ���� repository�� �ݿ��ϱ� ���� pr ����. 

  + repository�� ���� �� pull request�� Ŭ���Ͽ� �ڽ��� ���ο� pull request�� �ۼ��� �� ����.
  + reviewer�� ���� ���
  + �̶� description�� �ڵ� �м� ������ �ۼ�. ������ ������ description�� �Բ� �ۼ��ϰų� comment�� �߰��ϰų� ���� ����.  

8. ���䰡 approve�ϴ� ��� squase merge�� ���� merge.
9. merge ���� local �ҽ� �ڵ带 �ֽ�ȭ�ϱ� ���� ���� ������ local�� �ݿ�
```shell
git checkout main
git pull origin main
```


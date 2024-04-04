# 2024-1 mentoring homework

## 과제 제출 방법

1. 해당 repository의 url을 복사한 뒤 local에서 clone한다. 
```shell
git clone ${url}
```
2. commit 시 시용할 name과 email을 설정한다. (자신의 github 계정에 등록된 메일과 이름)
```shell
git config user.name "${이름}"
git config user.email "${space email}"
```
3. 자신의 이름과 과제번호를 이용해 branch를 생성한다.
```shell
git branch --show-current # branch 확인
git checkout main # branch change
git checout -b ${branch name} # create new branch
```
4. 프로젝트 파일 내에 자신의 이름으로 된 폴더에 해당 주차 과제를 수행한다.
5. 과제가 완료되면 제출하기 위해 commit을 진행한다. 이때 commit comment는 자유롭게 작성한다. 
```shell
git add ${file name} # or git add .
git commit -m "commit comment"
```
6. commit이 완료되면 자신이 만든 remote repository에 push
```shell
git push oirgin ${working branch name}
```
7. 자신이 작성한 brach를 실제 repository에 반영하기 위해 pr 생성. 

  + repository에 접속 후 pull request를 클릭하여 자신의 새로운 pull request를 작성할 수 있음.
  + reviewer에 멘토 등록
  + 이때 description에 코드 분석 내용을 작성. 질문이 있으면 description에 함께 작성하거나 comment로 추가하거나 따로 연락.  

8. 멘토가 approve하는 경우 squase merge를 통해 merge.
9. merge 이후 local 소스 코드를 최신화하기 위해 수정 사항을 local에 반영
```shell
git checkout main
git pull origin main
```


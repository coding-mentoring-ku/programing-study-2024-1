#
# 2주차 Python
# 파일명 : 24240404_Week2_Py_Dongkyu.py
# 수행일 : 2024-04-04 / 2024-04-08
# 수행자 : 김동규 (Lil P)
#

# 1. ‘pithon’이라는 문자열을 ‘Python’으로 바꿔 출력하기
a = "pithon"
print("Py" + a[2:] ) # 다른 방법도 있는지 고민해 볼 것

# 2. 입력받은 섭씨 온도를 화씨온도로 변환하는 프로그램을 작성하시오. 
# - 화씨 = 섭씨 * 5/9 + 32
Celcius = int (input("화씨 온도로 변환 할 섭씨 온도를 입력하세요 : "))
Fahrenhite = int (Celcius * 5/9 + 32)
print("섭씨온도 = %d" % Fahrenhite) # 다른 방법도 있는지 고민해 볼 것 

# 3. 예시와 동일한 결과가 나오도록 입력을 key, value로 나눠 딕셔너리로 저장하시오
#a = {'김연아': '피겨스케이팅', '김연경': '배구', '손흥민': '축구', '류현진': '야구'}

key = input("key: ").split()
value = input("value: ").split()

dictionary = dict(zip(key, value))
print(dictionary)
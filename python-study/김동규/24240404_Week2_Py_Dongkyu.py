#
# 2���� Python
# ���ϸ� : 24240404_Week2_Py_Dongkyu.py
# ������ : 2024-04-04 / 2024-04-08
# ������ : �赿�� (Lil P)
#

# 1. ��pithon���̶�� ���ڿ��� ��Python������ �ٲ� ����ϱ�
a = "pithon"
print("Py" + a[2:] ) # �ٸ� ����� �ִ��� ����� �� ��

# 2. �Է¹��� ���� �µ��� ȭ���µ��� ��ȯ�ϴ� ���α׷��� �ۼ��Ͻÿ�. 
# - ȭ�� = ���� * 5/9 + 32
Celcius = int (input("ȭ�� �µ��� ��ȯ �� ���� �µ��� �Է��ϼ��� : "))
Fahrenhite = int (Celcius * 5/9 + 32)
print("�����µ� = %d" % Fahrenhite) # �ٸ� ����� �ִ��� ����� �� �� 

# 3. ���ÿ� ������ ����� �������� �Է��� key, value�� ���� ��ųʸ��� �����Ͻÿ�
#a = {'�迬��': '�ǰܽ�������', '�迬��': '�豸', '�����': '�౸', '������': '�߱�'}

key = input("key: ").split()
value = input("value: ").split()

dictionary = dict(zip(key, value))
print(dictionary)
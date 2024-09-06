# 문자열 S와 P 입력
S = input()
P = input()

# P가 S의 부분 문자열인지 확인
if P in S:
    print(1)  # 부분 문자열일 경우 1 출력
else:
    print(0)  # 부분 문자열이 아닐 경우 0 출력

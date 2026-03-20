# 빠른 A+B

## 목차

1. 문제 주소 : `https://www.acmicpc.net/problem/15552`
2. [문제 시작](#문제)
3. [해결방안](#해결방안)
4. [반복문 목차 돌아가기](../README.md)
___

### [해당 코드](./BOJ_15552_빠른A+B.c)

## 문제

본격적으로 for문 문제를 풀기 전에 주의해야 할 점이 있다.<br>
입출력 방식이 느리면 여러 줄을 입력받거나 출력할 때 시간초과가 날 수 있다는 점이다.

C++을 사용하고 있고 cin/cout을 사용하고자 한다면, cin.tie(NULL)과 sync_with_stdio(false)를 둘 다 적용해 주고, endl 대신 개행문자(\n)를 쓰자.<br>
단, 이렇게 하면 더 이상 scanf/printf/puts/getchar/putchar 등 C의 입출력 방식을 사용하면 안 된다.

Java를 사용하고 있다면, Scanner와 System.out.println 대신 BufferedReader와 BufferedWriter를 사용할 수 있다.<br>
BufferedWriter.flush는 맨 마지막에 한 번만 하면 된다.

Python을 사용하고 있다면, input 대신 sys.stdin.readline을 사용할 수 있다.<br>
단, 이때는 맨 끝의 개행문자까지 같이 입력받기 때문에 문자열을 저장하고 싶을 경우 .rstrip()을 추가로 해 주는 것이 좋다.

또한 입력과 출력 스트림은 별개이므로, 테스트케이스를 전부 입력받아서 저장한 뒤 전부 출력할 필요는 없다.<br>
테스트케이스를 하나 받은 뒤 하나 출력해도 된다.

자세한 설명 및 다른 언어의 경우는 [이 글](https://www.acmicpc.net/board/view/22716)에 설명되어 있다.

[이 블로그 글](https://www.acmicpc.net/blog/view/55)에서 BOJ의 기타 여러 가지 팁을 볼 수 있다.

___

## 입력

첫 줄에 테스트케이스의 개수 T가 주어진다. T는 최대 1,000,000이다. 다음 T줄에는 각각 두 정수 A와 B가 주어진다. A와 B는 1 이상, 1,000 이하이다.
___

## 출력

각 테스트케이스마다 A+B를 한 줄에 하나씩 순서대로 출력한다.
___

## 예제 입력 & 출력 1

| 예제 입력 | 예제 출력 |
|-------|-----|
| 5<br>1 1<br>12 34<br>5 500<br>40 60<br>1000 1000   | 2<br>46<br>505<br>100<br>2000 |

---

## 해결방안
**1. 입출력 데이터가 많을 때 시간 초과를 방지하기 위해, 언어별로 가장 빠른 입출력 방식(예: Java의 `BufferedReader`, Python의 `sys.stdin.readline`)을 사용해야 한다.**

[맨위로 이동하기](#빠른-ab)
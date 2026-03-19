# 📚 C Algorithm Solution Repository

VS Code 환경에서 C언어를 사용하여 알고리즘 문제를 해결하고 학습 과정을 기록하는 저장소입니다.

현재 백준(Baekjoon) 플랫폼의 **"단계별로 풀어보기"** 를 중심으로 문제를 풀이하고 있으며, 향후 다양한 주제로 확장해 나갈 예정입니다.

## 🛠️ Development Environment

* **Language**: C (C11 / C17 Standard)

* **Editor**: Visual Studio Code (VS Code)

* **Compiler**: GCC (MinGW-w64)

* **Extensions**: C/C++, Code Runner

* **Platform**: [Baekjoon Online Judge](https://www.acmicpc.net/)

## 📖 Content

### 1. 백준 알고리즘 (단계별로 풀어보기)

기초부터 심화 알고리즘까지 체계적으로 학습하고 있습니다.<br>
각 단계별 풀이와 핵심 로직은 해당 디렉토리의 `README.md`에 상세히 기록 중입니다.

+ **진행 현황**: `Step 01. 입출력과 사칙연산` ~ **Proceeding**... 🚀

+ 👉 [백준 알고리즘 상세 풀이 보기](./Baekjun/단계별로%20풀어보기/README.md)

## 📂 Repository Structure

VS Code에서 **단계별/문제별 폴더링**을 통해 소스 코드와 개별 풀이 과정을 체계적으로 관리합니다.

```txt
.
└── Baekjun
    └── 단계별로 풀어보기
        ├── Step01_입출력과사칙연산
        ├── Step02_조건문
        ├── Step03_반복문
        ├── Step04_1차원배열
        └── Step05_문자열
            └── BOJ_2908_상수
                ├── BOJ_2908_상수.c  <-- 문제 소스 코드
                └── README.md        <-- 문제 분석 및 로직 설명
└── README.md (전체 메인 설명)
```

## 💡 Technical Approach

+ **Memory Efficiency**: 고정된 배열 크기 관리 및 메모리 사용량 최적화 고려

+ **Standard Library**: `string.h` 등 표준 라이브러리의 동작 원리 이해 및 활용

+ **Debugging**: VS Code의 GDB 디버거를 활용한 단계별 로직 검증

+ **Optimization**: 입출력 성능 향상 및 시간 복잡도 개선을 위한 코드 설계
#변수정의
CX = g++
CXFLAGS = -g -Wall
OBJS = main.o Complex.o
TARGET = complexer

#실행파일 complex를 만드는 Rule
$(TARGET):$(OBJS)
	$(CX) -o $(TARGET) $(OBJS)

#목적파일 main.o, Complex.o를 만드는 RUle
main.o : main.cpp Complex.hpp
	$(CX) $(CXFLAGS) -c main.cpp
Complex.o : Complex.cpp Complex.hpp
	$(CX) $(CXFLAGS) -c Complex.cpp

# 빌드 과정에서 생성되는 파일을 삭제하는 Rule, 필요항목 필요없음
.PHONY: clean
clean :
	rm $(TARGET) $(OBJS)
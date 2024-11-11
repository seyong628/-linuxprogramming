#변수정의
CX = g++
CXFLAGS = -g -Wall
OBJS = main.o Point.o
TARGET = Pointer

#실행파일 Point를 만드는 Rule
$(TARGET):$(OBJS)
	$(CX) -o $(TARGET) $(OBJS)

#목적파일 main.o, Point.o를 만드는 RUle
main.o : main.cpp Point.hpp
	$(CX) $(CXFLAGS) -c main.cpp
Point.o : Point.cpp Point.hpp
	$(CX) $(CXFLAGS) -c Point.cpp

# 빌드 과정에서 생성되는 파일을 삭제하는 Rule, 필요항목 필요없음
.PHONY: clean
clean :
	rm $(TARGET) $(OBJS)
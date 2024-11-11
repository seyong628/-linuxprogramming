#변수정의
CX = g++
CXFLAGS = -g -Wall
OBJS = main.o Circle.o
TARGET = Circle

#실행파일 Circle를 만드는 Rule
$(TARGET):$(OBJS)
	$(CX) -o $(TARGET) $(OBJS)

#목적파일 main.o, Circle.o를 만드는 RUle
main.o : main.cpp Circle.hpp
	$(CX) $(CXFLAGS) -c main.cpp
Circle.o : Circle.cpp Circle.hpp
	$(CX) $(CXFLAGS) -c Circle.cpp

# 빌드 과정에서 생성되는 파일을 삭제하는 Rule, 필요항목 필요없음
.PHONY: clean
clean :
	rm $(TARGET) $(OBJS)
#변수정의
CX = g++
CXFLAGS = -g -Wall
OBJS = main.o Power.o
TARGET = Power

#실행파일 Power를 만드는 Rule
$(TARGET):$(OBJS)
	$(CX) -o $(TARGET) $(OBJS)

#목적파일 main.o, Power.o를 만드는 RUle
main.o : main.cpp Power.hpp
	$(CX) $(CXFLAGS) -c main.cpp
Power.o : Power.cpp Power.hpp
	$(CX) $(CXFLAGS) -c Power.cpp

# 빌드 과정에서 생성되는 파일을 삭제하는 Rule, 필요항목 필요없음
.PHONY: clean
clean :
	rm $(TARGET) $(OBJS)

#변수정의
CX = g++
CXFLAGS = -g -Wall
OBJS = main.o Book.o
TARGET = Book

#실행파일 Book를 만드는 Rule
$(TARGET):$(OBJS)
	$(CX) -o $(TARGET) $(OBJS)

#목적파일 main.o, Book.o를 만드는 RUle
main.o : main.cpp Book.hpp
	$(CX) $(CXFLAGS) -c main.cpp
Book.o : Book.cpp Book.hpp
	$(CX) $(CXFLAGS) -c Book.cpp

# 빌드 과정에서 생성되는 파일을 삭제하는 Rule, 필요항목 필요없음
.PHONY: clean
clean :
	rm $(TARGET) $(OBJS)
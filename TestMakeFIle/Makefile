CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		TestMakeFIle.o

LIBS =

TARGET =	TestMakeFIle.exe

.build-pre:
# Add your pre 'build' code here...
	perl d:\\MinGW\\cxxtest\\cxxtestgen.pl --error-printer -o runner.cpp ClockTest.h
	g++ runner.cpp Clock.h Clock.cpp -o runner.exe
	./runner.exe	

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	.build-pre

clean:
	rm -f $(OBJS) $(TARGET)

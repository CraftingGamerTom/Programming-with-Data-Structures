CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		LinkedList.o

LIBS =

TARGET =	homework02.exe

.build-cpp:
	g++ runner.cpp -o runner.exe

.build-pre:
# Add your pre 'build' code here...
	perl d:\\MinGW\\cxxtest\\cxxtestgen.pl --error-printer -o runner.cpp testSingle_Linked_List.h

run:
	./runner.exe	

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	clean .build-pre .build-cpp run

clean:
	rm -f $(OBJS) $(TARGET)

CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		

LIBS =

TARGET =	homework03.exe

.build-cpp:
	g++ runner.cpp ProcessOrders.cpp -o runner.exe

.build-pre:
# Add your pre 'build' code here...
	perl d:\\MinGW\\cxxtest\\cxxtestgen.pl --error-printer -o runner.cpp testProcessOrders.h

run:
	./runner.exe	

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	clean .build-pre .build-cpp run

clean:
	rm -f $(OBJS) $(TARGET)

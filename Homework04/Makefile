CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		

LIBS =

TARGET =	runner.exe

.build-cpp:
	g++ runner.cpp Expression_Tree.cpp -o runner.exe
	
#	g++ test_Expression_Tree.cpp -o runner.exe

.build-pre:
# Add your pre 'build' code here...
	perl d:\\MinGW\\cxxtest\\cxxtestgen.pl --error-printer -o runner.cpp testExpression_Tree.h

run:
	./runner.exe	

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	clean .build-pre .build-cpp run

clean:
	rm -f $(OBJS) $(TARGET)

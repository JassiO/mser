CXX = c++
CXXFLAGS = -g -DLINUX -D_GNULINUX -Wall -O3 -I../baumerSrc -I../include -I/opt/boost/boost_1_55_0/include \
	-L../src -Wl,-rpath,../baumerSrc -lrt -L/opt/boost/boost_1_55_0/lib -Wl,-rpath,/opt/boost/boost_1_55_0/lib -lboost_thread -ljpeg -lpng -lGL -lglut -lpthread \
	-lopencv_core -lopencv_highgui -lopencv_features2d -lopencv_imgproc -lopencv_video -lboost_system


SOURCES = $(wildcard *.cpp)
OBJECTS = $(patsubst %.cpp, %.o, $(SOURCES))
TARGETS = $(patsubst main.cpp, main, $(SOURCES))


default:
	cd ../baumerSrc && make
	make src

src: $(TARGETS)
	@echo built $(TARGETS)


%: main.cpp Makefile
	$(CXX) $< $(CXXFLAGS) -o $@

clean:
	cd ../baumerSrc && make clean
	@rm -f $(TARGETS)
	@echo cleaned

realclean: clean
	cd ../baumerSrc && make realclean
	@rm -f *~
	@echo realcleaned

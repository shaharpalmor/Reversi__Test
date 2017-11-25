# Elad Aharon & Shahar Palmor
# 311200786, 307929927

a.out: gccAll
	g++ -Wall *.o 
	rm -f *.o

gccAll: *.h *.cpp
	g++ -Wall -c *.cpp

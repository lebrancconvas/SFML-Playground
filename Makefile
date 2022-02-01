run:
	g++ main.cpp -I /opt/homebrew/Cellar/sfml/2.5.1_1/include -L /opt/homebrew/Cellar/sfml/2.5.1_1/lib -framework Cocoa -framework OpenGL -framework IOKit -framework CoreVideo -o main && main
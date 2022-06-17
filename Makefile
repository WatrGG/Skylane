main.exe: *.cpp
	@echo "Compiling"
	@"/mnt/c/MinGW/bin/g++.exe" -o $@ $^
	@echo "Complete"

clean:
	@echo "Cleaning output"
	@rm main.exe
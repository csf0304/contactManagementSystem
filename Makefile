CXX = g++
#CXXFLAGS = -g

SRC_DIR = src
INCLUDE_DIR = include
BUILD_DIR = build
TARGET = main
SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS = $(SOURCES:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)

all: $(BUILD_DIR) $(TARGET)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $@

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR) $(TARGET)

rebuild: clean all

run: $(TARGET)
	./$(TARGET)

help:
	@echo "可用命令:"
	@echo "  make all     - 构建项目(默认)"
	@echo "  make clean   - 清理构建文件"
	@echo "  make rebuild - 重新构建"
	@echo "  make run     - 构建并运行"
	@echo "  make help    - 显示此帮助"

.PHONY: all clean rebuild run help

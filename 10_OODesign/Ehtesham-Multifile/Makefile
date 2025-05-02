BUILD_DIR = build
TARGET = $(BUILD_DIR)/ehtesham
OBJECTS = $(BUILD_DIR)/CateringOrder.o $(BUILD_DIR)/Catering.o $(BUILD_DIR)/Ehtesham.o $(BUILD_DIR)/main.o

$(TARGET): $(OBJECTS)
		g++ -o $(TARGET) $(OBJECTS)

$(BUILD_DIR)/main.o: main.cpp Ehtesham.hpp Catering.hpp CateringOrder.hpp EmployeeOrder.hpp MenuItem.hpp Employee.hpp
		mkdir -p $(BUILD_DIR)
		g++ -c main.cpp -o $(BUILD_DIR)/main.o

$(BUILD_DIR)/Ehtesham.o: Ehtesham.cpp Ehtesham.hpp Catering.hpp CateringOrder.hpp EmployeeOrder.hpp MenuItem.hpp Employee.hpp
		mkdir -p $(BUILD_DIR)
		g++ -c Ehtesham.cpp -o $(BUILD_DIR)/Ehtesham.o

$(BUILD_DIR)/Catering.o: Catering.cpp Catering.hpp CateringOrder.hpp EmployeeOrder.hpp MenuItem.hpp Employee.hpp
		mkdir -p $(BUILD_DIR)
		g++ -c Catering.cpp -o $(BUILD_DIR)/Catering.o

$(BUILD_DIR)/CateringOrder.o: CateringOrder.cpp CateringOrder.hpp EmployeeOrder.hpp MenuItem.hpp Employee.hpp
		mkdir -p $(BUILD_DIR)
		g++ -c CateringOrder.cpp -o $(BUILD_DIR)/CateringOrder.o

clean:
		rm -rf $(BUILD_DIR)
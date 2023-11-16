// ******** Design a parking system for a parking lot. The parking lot has three kinds of parking spaces: big, medium, and small, with a fixed number of slots for each size. Implement the ParkingSystem class: ParkingSystem(int big, int medium, int small) Initializes object of the ParkingSystem class. The number of slots for each parking space are given as part of the constructor. bool addCar(int carType) Checks whether there is a parking space of carType for the car that wants to get into the parking lot. carType can be of three kinds: big, medium, or small, which are represented by 1, 2, and 3 respectively. A car can only park in a parking space of its carType. If there is no space available, return false, else park the car in that size space and return true ********

// <======== Example ========>
// Input: ["ParkingSystem", "addCar", "addCar", "addCar", "addCar"], [[1, 1, 0], [1], [2], [3], [1]]
// Output: [null, true, true, false, false]




class ParkingSystem {
public:
    int bigCar = 0;
    int mediumCar = 0;
    int smallCar = 0;

    ParkingSystem(int big, int medium, int small) {
        bigCar = big;
        mediumCar = medium;
        smallCar = small;
    }
    
    bool addCar(int carType) {
        if(carType == 1) {
            bigCar--;
            if(bigCar >= 0) {
                return true;
            }
        }

        if(carType == 2) {
            mediumCar--;
            if(mediumCar >= 0) {
                return true;
            }
        }

        if(carType == 3) {
            smallCar--;
            if(smallCar >= 0) {
                return true;
            }
        }

        return false;
    }
};
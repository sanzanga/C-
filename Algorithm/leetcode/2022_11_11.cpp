//1603. 设计停车系统
class ParkingSystem {
    private:
        //创建存储各种汽车能够存储的数量的变量
    int big,medium,small;

public:
    ParkingSystem(int big, int medium, int small) {
        this->big = big;
        this->medium = medium;
        this->small = small;
    }
    
    bool addCar(int carType) {
        if(carType == 1){
            if(this->big == 0) return false;
            else{
                --this->big;
                return true;
            }
        }
        else if(carType == 2){
            if(this->medium == 0) return false;
            else{
                --this->medium;
                return true;
            }
        }
        else if(carType == 3){
            if(this->small == 0) return false;
            else{
                --this->small;
                return true;
            }
        }
        else{
            return false;
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */


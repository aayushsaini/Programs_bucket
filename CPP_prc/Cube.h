#pragma once

class Cube {
    public:
    	double getVolume() {
            return length_ * length_ * length_;
        }

        double getSurfaceArea() {
            return 6 * length_ * length_;
        }

        void setLength(double length) {
            length_ = length;
        }


    private:
        double length_;
};

class SevenSegment{
    public:
        SevenSegment(int sevenSegmentStart, int digitStart);
        void fullDisplay(int num);
    private:
        void displayDigit(int num);
        boolean commonHigh = true;   
        int startLED;
        int digStart;   
        int dig[11] = {
        0b1111110,//0
        0b0110000,//1
        0b1101101,//2
        0b1111001,//3
        0b0110011,//4
        0b1011011,//5
        0b1011111,//6
        0b1110000,//7
        0b1111111,//8
        0b1111011,//9
        0b1111111 //off
        };
};
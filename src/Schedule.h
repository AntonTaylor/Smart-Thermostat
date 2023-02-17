class Schedule{
    public:
        Schedule();
        double getDesiredTemp();
        void update();

    private:
        //need data structure that represents schedule
        int schedule[24]; //actually represents a daily schedule
        


}
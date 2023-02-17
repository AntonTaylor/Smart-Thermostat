class Plug{
    public:
        Plug();
        void turnOn();
        void turnOff();

    private:
        int status; //current status of plug
        void getStatus(); // checks if it is currently on or off (could change based on external factors)
        
        void sendOn(); //actually handles sending signal to plug
        void sendOff(); //actually handles sending signal to plug

        
}
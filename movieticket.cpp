#include <iostream>
using namespace std;

class MovieTicket {
private:
    string movieName;
    int seatNumber;
    double ticketPrice;
    bool isBooked;

public:
    // Default Constructor
    MovieTicket() {
        movieName = "conjuring";
        seatNumber = 0;
        ticketPrice = 200;
        isBooked = false;
    }

    // Parameterized Constructor
    MovieTicket(string name, int seat, double price) {
        movieName = name;
        seatNumber = seat;
        ticketPrice = price;
        isBooked = false;
    }

    // Book Ticket
    void bookTicket() {
        if (!isBooked) {
            isBooked = true;
            cout << "Ticket booked successfully for " << movieName 
                 << ", Seat No: " << seatNumber << endl;
        } else {
            cout << "Ticket already booked!" << endl;
        }
    }

    // Cancel Ticket
    void cancelTicket() {
        if (isBooked) {
            isBooked = false;
            cout << "Ticket cancelled successfully for Seat No: " 
                 << seatNumber << endl;
        } else {
            cout << "Ticket is not booked yet!" << endl;
        }
    }

    // Display Ticket Details
    void displayTicketDetails() {
        cout << "\nMovie Name: " << movieName << endl;
        cout << "Seat Number: " << seatNumber << endl;
        cout << "Ticket Price: " << ticketPrice << endl;
        cout << "Booking Status: " 
             << (isBooked ? "Booked" : "Available") << endl;
    }

    // Calculate Total Cost
    double calculateTotalCost(int numberOfTickets) {
        return ticketPrice * numberOfTickets;
    }
};

int main() {
    // Creating two ticket objects
    MovieTicket ticket1("Avengers", 12, 250);
    MovieTicket ticket2;  // default constructor

    // Simulating booking & cancellation
    ticket1.bookTicket();
    ticket1.displayTicketDetails();

    cout << "\nTotal cost for 3 tickets: "
         << ticket1.calculateTotalCost(3) << endl;

    ticket1.cancelTicket();
    ticket1.displayTicketDetails();

    cout << "\n------------------------\n";

    ticket2.displayTicketDetails();
    ticket2.bookTicket();
    ticket2.displayTicketDetails();

    return 0;
}
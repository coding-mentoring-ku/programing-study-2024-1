class Seat:
    def __init__(self, number):
        self.number = number
        self.reserved = False
        self.passenger = None

    def reserve(self, passenger_name):
        if not self.reserved:
            self.reserved = True
            self.passenger = passenger_name
            return True
        else:
            return False

    def cancel(self):
        if self.reserved:
            self.reserved = False
            self.passenger = None
            return True
        else:
            return False

    def get_status(self):
        return f"{self.passenger} 예약됨" if self.reserved else "예약 가능"


class Airplane:
    def __init__(self, flight_time):
        self.flight_time = flight_time
        self.seats = [Seat(i+1) for i in range(8)]

    def reserve_seat(self, seat_number, passenger_name):
        if 1 <= seat_number <= len(self.seats):
            return self.seats[seat_number - 1].reserve(passenger_name)
        else:
            return False

    def cancel_seat(self, seat_number):
        if 1 <= seat_number <= len(self.seats):
            return self.seats[seat_number - 1].cancel()
        else:
            return False

    def show_reservations(self):
        reservations = " | ".join(f"좌석 {seat.number}: {seat.get_status()}" for seat in self.seats)
        print(f"비행 시간 {self.flight_time}의 예약 상황: \n\t{reservations}")


class Airline:
    def __init__(self, name):
        self.name = name
        self.flights = {
            '07': Airplane('07:00'),
            '12': Airplane('12:00'),
            '17': Airplane('17:00')
        }

    def handle_reservation(self):
        flight_time = input("비행 시간 입력 (07, 12, 17): ")
        passenger_name = input("승객 이름 입력: ")
        seat_number = int(input("좌석 번호 입력 (1-8): "))

        if self.flights[flight_time].reserve_seat(seat_number, passenger_name):
            print("예약 성공!")
        else:
            print("예약 실패! 좌석이 이미 예약되었습니다.")

    def handle_cancellation(self):
        flight_time = input("비행 시간 입력 (07, 12, 17): ")
        seat_number = int(input("좌석 번호 입력 (1-8): "))

        if self.flights[flight_time].cancel_seat(seat_number):
            print("예약 취소 성공!")
        else:
            print("예약 취소 실패! 좌석이 이미 비어있습니다.")

    def show_reservations(self):
        for flight_time, airplane in self.flights.items():
            airplane.show_reservations()

    def run(self):
        print(f"{self.name}에 오신 것을 환영합니다.")
        while True:
            action = input("실행할 작업을 입력하세요 (예약, 취소, 보기, 종료): ")
            if action == '예약':
                self.handle_reservation()
            elif action == '취소':
                self.handle_cancellation()
            elif action == '보기':
                self.show_reservations()
            elif action == '종료':
                print("프로그램을 종료합니다.")
                break
            else:
                print("잘못된 입력입니다. 다시 시도하세요.")


if __name__ == '__main__':
    airline = Airline("한성항공")
    airline.run()

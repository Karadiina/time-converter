#include <iostream>

int main()
{
	int seconds, hours, minutes;
	std::cout << "Give amount of seconds. > " << std::flush;
	std::cin >> seconds;
	minutes = seconds / 60;
	hours = minutes / 60;
	std::cout << seconds << " seconds is equivalent to " << int(hours) << " hours " << int(minutes % 60)
		<< " minutes " << int(seconds % 60) << " seconds.";

	return 0;
}
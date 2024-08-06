#include<iOStream>
#include<string>
#include <fstream>
using namespace std;

//Used variables
//for customer mode
char mainChoice, choice1, sectionChoice, womenChoice, menChoice, kidChoice, loopChoice, productChoice;


//for Staff mode
string loginID, loginPassword, productSearch;
ifstream productsIn; ofstream productsOut;
char staffChoice;

//structure of the order
struct order {
	string size;
	string itemName;
	int price = 0;
};
order obj[10]; int i = 0;
int feedbackCounter = 1;

void productDetails(string productName, int productPrice) {
	obj[i].itemName = productName;
	obj[i].price = productPrice;
	cout << "Price of " << productName << " is Rs " << productPrice << endl <<
		"Select size of " << productName << endl <<
		"* Press S for small" << endl <<
		"* Press M for medium" << endl <<
		"* Press L for large" << endl;
	cin >> productChoice;
	if (productChoice == 's' || productChoice == 'S') {
		obj[i].size = "small";
		cout << "Your purchase for " << productName << " in " << obj[i].size << " size was succcessful : )" << endl;
		i = i + 1;

	}
	if (productChoice == 'm' || productChoice == 'M') {
		obj[i].size = "medium";
		cout << "Your purchase for " << productName << " in " << obj[i].size << " size was succcessful : )" << endl;
		i = i + 1;


	}
	if (productChoice == 'l' || productChoice == 'L') {
		obj[i].size = "large";
		cout << "Your purchase for " << productName << " in " << obj[i].size << " size was succcessful : )" << endl;
		i = i + 1;
	}
}
void productDetails(string productName, int productPrice, bool color) {
	//Overloading
	if (color == true) {
		obj[i].itemName = productName;
		obj[i].price = productPrice;
		cout << "Price of " << productName << " is Rs " << productPrice << endl <<
			"Select the color" << endl <<
			"* Press B for Blue" << endl <<
			"* Press O for Olive green" << endl <<
			"* Press W for White" << endl;
		cin >> productChoice;
		if (productChoice == 'b' || productChoice == 'B') {
			obj[i].size = "Blue";
			cout << "Your purchase for " << productName << "in " << obj[i].size << "colour was succcessful : )" << endl;
			i = i + 1;
		}
		if (productChoice == 'o' || productChoice == 'O') {
			obj[i].size = "Olive Green";
			cout << "Your purchase for " << productName << "in " << obj[i].size << "colour was succcessful : )" << endl;
			i = i + 1;

		}
		if (productChoice == 'w' || productChoice == 'W') {
			obj[i].size = "White";
			cout << "Your purchase for " << productName << "in " << obj[i].size << "colour was succcessful : )" << endl;
			i = i + 1;

		}

	}
}

void saveFeedback(string name, string email, string feedback, int counter) {
	ifstream feedbackIn("feedback.txt");
	ofstream feedbackOut("feedback.txt", ios::app);
	feedbackOut << "============================================" << endl
		<< "            Feedback : " << counter << endl
		<< "============================================"
		<< endl << "Name: " << name << endl << "Email: " << email
		<< endl << "Feedback: " << feedback << endl;
	feedbackIn.close();
	cout << "Thank you for your feedback!" << endl;


}
void womenSection() {
	//Women Section
	cout << "============================================" << endl
		<< "               Women Section" << endl
		<< "============================================" << endl;
	cout << "1. Three piece suit" << endl <<
		"2. Two piece suit" << endl <<
		"3. One piece suit" << endl <<
		"4. Shoes " << endl <<
		"5. Jeans" << endl;
	cin >> womenChoice;

	if (womenChoice == '1') {
		//Three piece suit
		cout << "============================================" << endl
			<< "            Three Piece Suit" << endl
			<< "============================================" << endl;
		productDetails("Three Piece Suit", 20000);
	}
	else if (womenChoice == '2') {
		//Two piece suit
		cout << "============================================" << endl
			<< "               Two Piece Suit" << endl
			<< "============================================" << endl;
		productDetails("Two Piece Suit", 15000);


	}
	else if (womenChoice == '3') {
		//One piece suit
		cout << "============================================" << endl
			<< "               One Piece Suit" << endl
			<< "============================================" << endl;
		productDetails("One Piece Suit", 10000);


	}
	else if (womenChoice == '4') {
		//shoes
		cout << "============================================" << endl
			<< "                  Shoes" << endl
			<< "============================================" << endl;
		cout << "1. Nike Airmax 90 SE" << endl <<
			"2. Nike AirForce 1" << endl <<
			"3. Converse High" << endl <<
			"4. Reebok Club-C Mid" << endl;
		cin >> womenChoice;
		if (womenChoice == '1') {
			//Nike Airmax 90 SE
			cout << "============================================" << endl
				<< "             Nike Airmax 90 SE" << endl
				<< "============================================" << endl;
			productDetails("Nike Airmax 90 SE", 18000);

		}
		else if (womenChoice == '2') {
			//Nike AirForce 1
			cout << "============================================" << endl
				<< "              Nike Airforce 1" << endl
				<< "============================================" << endl;
			productDetails("Nike AirFotce 1", 16000);

		}
		else if (womenChoice == '3') {
			//Converse High
			cout << "============================================" << endl
				<< "               Converse High" << endl
				<< "============================================" << endl;
			productDetails("Converse High", 14000);

		}
		else if (womenChoice == '4') {
			//Reebok Club-C Mid
			cout << "============================================" << endl
				<< "             Reebok Club-C Mid" << endl
				<< "============================================" << endl;
			productDetails("Reebok Club-C Mid", 18000);


		}
	}
	else if (womenChoice == '5') {
		//jeans
		cout << "============================================" << endl
			<< "			       Jeans" << endl
			<< "============================================" << endl;
		cout << "1. Blue Jeans" << endl <<
			"2. Black Jeans" << endl <<
			"3. Brown Jeans" << endl;
		cin >> womenChoice;
		if (womenChoice == '1') {
			//Blue Jeans
			cout << "============================================" << endl
				<< "                Blue Jeans" << endl
				<< "============================================" << endl;
			productDetails("Blue Jeans", 7000);


		}
		else if (womenChoice == '2') {
			//Black Jeans
			cout << "============================================" << endl
				<< "               Black Jeans" << endl
				<< "============================================" << endl;
			productDetails("Black Jeans", 8500);


		}
		else if (womenChoice == '3') {
			//Black Jeans
			cout << "============================================" << endl
				<< "               Brown Jeans" << endl
				<< "============================================" << endl;
			productDetails("Brown Jeans", 5750);

		}
	}
}
void menSection() {
	bool color = false;
	//Men section
	cout << "============================================" << endl
		<< "                Men Section" << endl
		<< "============================================" << endl;
	cout << "1. Three Piece Suit" << endl <<
		"2. Watches" << endl <<
		"3. Shirts" << endl <<
		"4. Shoes " << endl <<
		"5. Jeans" << endl;
	cin >> menChoice;

	if (menChoice == '1') {
		//Suit
		cout << "============================================" << endl
			<< "              Three Piece Suit" << endl
			<< "============================================" << endl;
		productDetails("Three Piece Suit", 14500);
	}
	else if (menChoice == '2') {
		//Watch
		color = true;
		cout << "============================================" << endl
			<< "                 Watches" << endl
			<< "============================================" << endl;
		cout << "1. Rolex Sky-Dweller" << endl <<
			"2. Casio Men's Classic" << endl <<
			"3. Lactose Men's 2010763" << endl <<
			"4. Omega Seamaster Aqua Terra" << endl;

		cin >> menChoice;
		if (menChoice == '1') {
			//Rolex Sky-Dweller
			cout << "============================================" << endl
				<< "            Rolex Sky-Dweller" << endl
				<< "============================================" << endl;
			productDetails("Rolex Sky-Dweller", 7000, color);
		}
		else if (menChoice == '2') {
			//Casio Men's Classic
			cout << "============================================" << endl
				<< "            Casio Men's Classic" << endl
				<< "============================================" << endl;
			productDetails("Casio Men's Classic", 5600, color);
		}
		else if (menChoice == '3') {
			//Lactose Men's 2010763
			cout << "============================================" << endl
				<< "            Lactose Men's 2010763" << endl
				<< "============================================" << endl;
			productDetails("Lactose Men's 2010763", 8200, color);
		}
		else if (menChoice == '4') {
			//Casio Men's Classic
			cout << "============================================" << endl
				<< "           Casio Men's Classic" << endl
				<< "============================================" << endl;
			productDetails("Omega Seamaster Aqua Terra", 15600, color);
		}
	}
	else if (menChoice == '3') {
		//Shirts 
		cout << "============================================" << endl
			<< "                  Shirts" << endl
			<< "============================================" << endl;
		cout << "1. T-shirt" << endl <<
			"2. Long Shirt" << endl <<
			"3. Formal Shirt" << endl <<
			"4. Denim Shirt" << endl <<
			"5. Casual Shirt" << endl;
		cin >> menChoice;
		if (menChoice == '1') {
			//T-shirt
			cout << "============================================" << endl
				<< "                  T-Shirt" << endl
				<< "============================================" << endl;
			productDetails("T-Shirt", 950);
		}
		else if (menChoice == '2') {
			//Long Shirt
			cout << "============================================" << endl
				<< "                Long Shirt" << endl
				<< "============================================" << endl;
			productDetails("Long Shirt", 1150);
		}
		else if (menChoice == '3') {
			//Formal Shirt
			cout << "============================================" << endl
				<< "               Formal Shirt" << endl
				<< "============================================" << endl;
			productDetails("Formal Shirt", 1200);
		}
		else if (menChoice == '4') {
			//Denim Shirt
			cout << "============================================" << endl
				<< "                Denim Shirt" << endl
				<< "============================================" << endl;
			productDetails("Formal Shirt", 1150);

		}
		else if (menChoice == '5') {
			//Casual Shirt
			cout << "============================================" << endl
				<< "               Casual Shirt" << endl
				<< "============================================" << endl;
			productDetails("Casual Shirt", 500);
		}

	}
	else if (menChoice == '4') {
		//Shoes
		cout << "============================================" << endl
			<< "                  Shoes" << endl
			<< "============================================" << endl;
		cout << "1. Nike Jordan 1 High" << endl <<
			"2. Nike Airmax 97" << endl <<
			"3. Converse Low" << endl <<
			"4. Adidas 4D" << endl <<
			"5. Reebok Leather shoes";
		cin >> menChoice;
		if (menChoice == '1') {
			//Nike Jordan 1 High
			cout << "============================================" << endl
				<< "             Nike Jordan 1 High" << endl
				<< "============================================" << endl;
			productDetails("Nike Jordan 1 High", 37000);
		}
		else if (menChoice == '2') {
			//Nike Airmax 97
			cout << "============================================" << endl
				<< "              Nike Airmax 97" << endl
				<< "============================================" << endl;
			productDetails("Nike Airmax 97", 40000);
		}
		else if (menChoice == '3') {
			//Converse low
			cout << "============================================" << endl
				<< "               Converse Low" << endl
				<< "============================================" << endl;
			productDetails("Converse Low", 19500);
		}

		else if (menChoice == '4') {
			//Adidas 4D
			cout << "============================================" << endl
				<< "                 Adidas 4D" << endl
				<< "============================================" << endl;
			productDetails("Adidas 4D", 55000);
		}
		else if (menChoice == '5') {
			//Reebok Leather shoes
			cout << "============================================" << endl
				<< "            Reebok Leather Shoes" << endl
				<< "============================================" << endl;
			productDetails("Reebok Leather Shoes", 22000);
		}
	}
	else if (menChoice == '5') {
		//jeans
		cout << "============================================" << endl
			<< "                  Jeans" << endl
			<< "============================================" << endl;
		cout << "1. Blue Jeans" << endl <<
			"2. Black Jeans" << endl <<
			"3. Brown Jeans" << endl <<
			"4. Denim Jeans" << endl <<
			"5. Grey Jeans" << endl;
		cin >> menChoice;
		if (menChoice == '1') {
			//Blue Jeans
			cout << "============================================" << endl
				<< "               Blue Jeans" << endl
				<< "============================================" << endl;
			productDetails("Blue jeans", 5500);
		}
		else if (menChoice == '2') {
			//Black Jeans
			cout << "============================================" << endl
				<< "               Black Jeans" << endl
				<< "============================================" << endl;
			productDetails("Blue Jeans", 4000);
		}
		else if (menChoice == '3') {
			//Brown Jeans
			cout << "============================================" << endl
				<< "               Brown Jeans" << endl
				<< "============================================" << endl;
			productDetails("Brown Jeans", 6750);
		}
		else if (menChoice == '4') {
			//Denim Jeans
			cout << "============================================" << endl
				<< "               Denim Jeans" << endl
				<< "============================================" << endl;
			productDetails("Denim Jeans", 8250);
		}
		else if (menChoice == '5') {
			//Grey Jeans
			cout << "============================================" << endl
				<< "                Grey Jeans" << endl
				<< "============================================" << endl;
			productDetails("Grey Jeans", 3500);


		}

	}
}
void kidSection() {
	//kids section
	cout << "============================================" << endl
		<< "                Kids Section" << endl
		<< "============================================" << endl;
	cout << "1. Shirts" << endl <<
		"2. Watches" << endl <<
		"3. Frocks" << endl <<
		"4. Shoes " << endl;
	cin >> kidChoice;

	if (kidChoice == '1') {
		//Shirt
		cout << "============================================" << endl
			<< "                  Shirt" << endl
			<< "============================================" << endl;
		cout << "1. Blue Shirt" << endl <<
			"2. Yellow Shirt" << endl <<
			"3. Pink Shirt" << endl <<
			"4. Green Shirt" << endl;
		cin >> kidChoice;
		if (kidChoice == '1') {
			//blue shirt
			cout << "============================================" << endl
				<< "               Blue Shirt" << endl
				<< "============================================" << endl;
			productDetails("Blue Shirt", 400);
		}
		if (kidChoice == '2') {
			//yellow shirt
			cout << "============================================" << endl
				<< "               Yellow Shirt" << endl
				<< "============================================" << endl;
			productDetails("Yellow Shirt", 500);
		}
		if (kidChoice == '3') {
			//pink shirt
			cout << "============================================" << endl
				<< "               Pink Shirt" << endl
				<< "============================================" << endl;
			productDetails("Pink Shirt", 450);
		}
		if (kidChoice == '4') {
			//green shirt
			cout << "============================================" << endl
				<< "              Green Shirt" << endl
				<< "============================================" << endl;
			productDetails("Green Shirt", 550);
		}
	}
	else if (kidChoice == '2') {
		//watch
		cout << "============================================" << endl
			<< "                  Watches" << endl
			<< "============================================" << endl;
		cout << "1. Blue Watch" << endl <<
			"2. Yellow Watch" << endl <<
			"3. Pink Watch" << endl <<
			"4. Green Watch" << endl;
		cin >> kidChoice;
		if (kidChoice == '1') {
			//blue watch
			cout << "============================================" << endl
				<< "               Blue Watch" << endl
				<< "============================================" << endl;
			productDetails("Blue Watch", 1500);
		}
		if (kidChoice == '2') {
			//Yellow watch
			cout << "============================================" << endl
				<< "                Yellow Watch" << endl
				<< "============================================" << endl;
			productDetails("Yellow Watch", 2100);
		}
		if (kidChoice == '3') {
			//pink watch
			cout << "============================================" << endl
				<< "                Pink Watch" << endl
				<< "============================================" << endl;
			productDetails("Pink Shirt", 1500);
		}
		if (kidChoice == '4') {
			//green watch
			cout << "============================================" << endl
				<< "               Green Watch" << endl
				<< "============================================" << endl;
			productDetails("Green Watch", 2500);
		}

	}
	else if (kidChoice == '3') {
		//Frock
		cout << "============================================" << endl
			<< "                  Frocks" << endl
			<< "============================================" << endl;
		cout << "1. Blue Frock" << endl <<
			"2. Yellow Frock" << endl <<
			"3. Pink Frock" << endl <<
			"4. Green Frock" << endl;
		cin >> kidChoice;
		if (kidChoice == '1') {
			//blue frock
			cout << "============================================" << endl
				<< "               Blue Frock" << endl
				<< "============================================" << endl;
			productDetails("Blue Frock", 600);
		}
		if (kidChoice == '2') {
			//yellow frock
			cout << "============================================" << endl
				<< "               Yellow Frock" << endl
				<< "============================================" << endl;
			productDetails("Yellow Frock", 600);
		}
		if (kidChoice == '3') {
			//pink frock
			cout << "============================================" << endl
				<< "                Pink Frock" << endl
				<< "============================================" << endl;
			productDetails("Pink Frock", 450);
		}
		if (kidChoice == '4') {
			//green frok
			cout << "============================================" << endl
				<< "                Green Frock" << endl
				<< "============================================" << endl;
			productDetails("Green Frock", 1000);
		}
	}
	else if (kidChoice == '4') {
		//Shoes
		cout << "============================================" << endl
			<< "                   Shoes " << endl
			<< "============================================" << endl;
		cout << "1. Blue Shoes" << endl <<
			"2. Yellow Shoes" << endl <<
			"3. Pink Shoes" << endl <<
			"4. Green Shoes" << endl;
		cin >> kidChoice;
		if (kidChoice == '1') {
			//blue shoes
			cout << "============================================" << endl
				<< "               Blue Shoes" << endl
				<< "============================================" << endl;
			productDetails("Blue Shoes", 1200);
		}
		if (kidChoice == '2') {
			//Yellow Shoes
			cout << "============================================" << endl
				<< "               Yellow Shoes" << endl
				<< "============================================" << endl;
			productDetails("Yellow Shoes", 1500);
		}
		if (kidChoice == '3') {
			//pink shoes
			cout << "============================================" << endl
				<< "                Pink Shoes" << endl
				<< "============================================" << endl;
			productDetails("Pink Shoes", 1450);
		}
		if (kidChoice == '4') {
			//green shoes
			cout << "============================================" << endl
				<< "                Green Shoes" << endl
				<< "============================================" << endl;
			productDetails("Green Shoes", 3000);

		}
	}

}
void productSearching() {
	cout << "============================================" << endl
		<< "           Search for a Product " << endl
		<< "============================================" << endl;
	cout << "Enter the name of the product you want to search for" << endl;
	cin.ignore();
	getline(cin, productSearch);

	productsIn.open("products information.txt");
	string line, data;
	int lineNo = 0;
	bool foundProduct = false;

	//searching for a product by name
	while (getline(productsIn, line)) {
		if (line.find(productSearch) != string::npos) {
			cout << "Product found!" << endl;
			for (int j = 0; j < 2; j++) {
				getline(productsIn, data);
				cout << data << endl;
			}
			foundProduct = true;
		}
		lineNo++;
	}
	if (foundProduct == false) {
		cout << "Can't find the product you searched for :(" << endl;
	}
	productsIn.close();
}
void showAllproducts() {
	productsIn.open("products information.txt");

	string line;
	while (getline(productsIn, line)) {
		cout << line << endl;
	}
	productsIn.close();
}
void showAllFeedbacks() {
	ifstream feedbackIn;
	ofstream feedbackOut;
	feedbackIn.open("feedback.txt");
	string line;
	while (getline(feedbackIn, line)) {
		cout << line << endl;
	}
	feedbackIn.close();
}
void bill() {

	int itemTotal = 0;
	//Printing bill on console

	cout << "--------------------------- Bill ---------------------------" << endl;
	for (int j = 0; j < i; j++) {
		cout << "Item : " << j + 1 << endl <<
			"Item name : " << obj[j].itemName << endl
			<< "Item price : " << obj[j].price << endl
			<< "Item size/ Color : " << obj[j].size << endl
			<< "------------------------------------------------------------" << endl;
		itemTotal = itemTotal + obj[j].price;
	}
	cout << "Total amount : " << itemTotal << endl
		<< "------------------------------------------------------------" << endl;


	// printing bill in file
	ofstream billFile;
	billFile.open("bill.txt");
	billFile << "--------------------------- Bill ---------------------------" << endl;
	for (int j = 0; j < i; j++) {
		billFile << "Item : " << j + 1 << endl <<
			"Item name : " << obj[j].itemName << endl
			<< "Item price : " << obj[j].price << endl
			<< "Item size : " << obj[j].size << endl
			<< "------------------------------------------------------------" << endl;
		itemTotal = itemTotal + obj[j].price;
	}
	billFile << "Total amount : " << itemTotal << endl
		<< "------------------------------------------------------------" << endl;
}

int main() {




	cout << "============================================" << endl
		<< "          Welcome To ARMR Outlet " << endl
		<< "============================================" << endl;
	do {

		cout << "1. Customer mode" << endl <<
			"2. Staff mode" << endl;
		cin >> mainChoice;
		if (mainChoice == '1') {
			cout << "============================================" << endl
				<< "              Customer Mode" << endl
				<< "============================================" << endl;


			cout << "1. Buy an item" << endl <<
				"2. Feedback form" << endl <<
				"3. About us" << endl;
			cin >> choice1;

			if (choice1 == '1') {
				cout << "============================================" << endl
					<< "               Buy an Item" << endl
					<< "============================================" << endl;
				cout << "1. Women Section" << endl <<
					"2. Men Section" << endl <<
					"3. Kids Section" << endl;
				cin >> sectionChoice;

				if (sectionChoice == '1') {
					womenSection();
				}
				else if (sectionChoice == '2') {
					menSection();
				}
				else if (sectionChoice == '3') {
					kidSection();
				}
				else {
					cout << "Invalid choice :(" << endl;
				}
			}
			else if (choice1 == '2') {

				//Feedback form

				string name;
				string email;
				string feedback;

				cout << "============================================" << endl
					<< "            Feedback Form" << endl
					<< "============================================" << endl;
				cout << "Please provide your feedback below." << endl;

				cout << "Name: ";
				cin.ignore();
				getline(cin, name);

				cout << "Email: ";
				getline(cin, email);

				cout << "Feedback: ";
				getline(cin, feedback);

				cout << endl;

				cout << "===== Feedback Summary =====" << endl;
				cout << "Name: " << name << endl;
				cout << "Email: " << email << endl;
				cout << "Feedback: " << feedback << endl;

				// Save the feedback to a file
				saveFeedback(name, email, feedback, feedbackCounter);
				feedbackCounter += 1;
			}
			else if (choice1 == '3') {
				//about us
				cout << "============================================" << endl
					<< "                 About Us" << endl
					<< "============================================" << endl;
				// Title and description

				cout << "We are a premier clothing outlet, offering a wide range of fashionable and high-quality apparel for men, women, and children.\n\n";
				cout << "Our Mission:" << endl;
				cout << "At our clothing outlet, our mission is to provide our customers with the latest trends, exceptional customer service, and affordable prices. We strive to create a pleasant shopping experience and help individuals express their unique style through our diverse selection of clothing.\n\n";

				cout << "Our Values:\n";
				cout << "- Fashion-forward: We stay ahead of the fashion curve, constantly updating our inventory to offer the latest styles and trends.\n";
				cout << "- Quality: We believe in providing our customers with high-quality garments that are designed to last.\n";
				cout << "- Customer satisfaction: Our customers are at the heart of everything we do. We go the extra mile to ensure their satisfaction and exceed their expectations.\n";
				cout << "- Diversity and inclusion: We embrace diversity and strive to offer a wide range of clothing options that cater to different sizes, styles, and cultural preferences.\n";
				cout << "- Fair pricing: We believe that fashion should be accessible to all. We offer competitive prices without compromising on quality.\n\n";


				cout << "Thank you for choosing our clothing outlet. We look forward to serving you and helping you find the perfect outfit!\n";

			}
		}


		else if (mainChoice == '2') {
			//Staff Mode
			cout << "Enter the Login ID" << endl;
			cin >> loginID;
			cout << "Enter the Password" << endl;
			cin >> loginPassword;
			if (loginID == "admin" && loginPassword == "admin123") {
				cout << "============================================" << endl
					<< "                Staff Mode" << endl
					<< "============================================" << endl;

				cout << "1. Display particular product information" << endl
					<< "2. Display all products information" << endl
					<< "3. Show feedbacks" << endl;
				cin >> staffChoice;

				if (staffChoice == '1') {
					//search for a product
					productSearching();

				}
				else if (staffChoice == '2') {
					//all products
					showAllproducts();
				}
				else if (staffChoice == '3') {
					//feedbacks
					showAllFeedbacks();

				}
				else {
					cout << "Invalid choice" << endl;
				}
			}
			else if (loginID == "admin" && loginPassword != "admin123") {
				cout << "The password you entered is not correct!" << endl;
			}
			else if (loginID != "admin" && loginPassword == "admin123") {
				cout << "The login ID you entered is not correct" << endl;
			}
			else {
				cout << "You entered wrong credentials!" << endl;
			}
		}

		cout << "Press 0 to return to the main menu or any other key to exit" << endl;
		cin >> loopChoice;

		if (loopChoice != '0') {
			bill();
		}
	} while (loopChoice == '0');

	return 0;
}
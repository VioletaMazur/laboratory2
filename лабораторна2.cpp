#include <iostream>
using namespace std;
int main() {

    // Код 1
    char name[100];
    cout << "Як Вас звуть? ";
    cin >> name;
    cout << "Доброго дня, " << name << "!" << endl;

    // Код 2
    char text[1000]; // Максимальна довжина рядка - 1000 символів
    cout << "Введіть рядок тексту: ";
    cin.ignore(); // Додано, щоб уникнути пропуску введення
    cin.getline(text, sizeof(text));
    cout << "Ви ввели: " << text << endl;

    // Код 3
    int A, B;
    cout << "Введіть значення A: ";
    cin >> A;
    cout << "Введіть значення B: ";
    cin >> B;
    cout << "A=" << A << " B=" << B << endl;
    int temp = A;
    A = B;
    B = temp;
    cout << "A=" << A << " B=" << B << endl;

    // Код 4
    int C;
    cout << "Введіть значення C: ";
    cin >> C;
    cout << "A=" << A << " B=" << B << " C=" << C << endl;
    temp = B;
    B = A;
    A = C;
    C = temp;
    cout << "A=" << A << " B=" << B << " C=" << C << endl;

    // Код 5
    int D;
    cout << "Введіть значення D: ";
    cin >> D;
    cout << "A=" << A << " B=" << B << " C=" << C << " D=" << D << endl;
    temp = A;
    A = D;
    D = C;
    C = B;
    B = temp;

    cout << "A=" << A << " B=" << B << " C=" << C << " D=" << D << endl;

    // Код 6
    char school[100];
    int age;
    cout << "Як Вас звуть? ";
    cin >> name;
    cout << "Скільки Вам років? ";
    cin >> age;
    cout << "Де Ви навчаєтеся? ";
    cin.ignore(); // Додано, щоб уникнути пропуску введення
    cin.getline(school, sizeof(school));
    cout << "Доброго дня, " << name << "!" << endl;
    cout << "Вітаємо Вас, Вам усього " << age << ", а Ви вже ведете діалог з комп’ютером!" << endl;
    cout << school << " буде пишатися Вами!" << endl;

    // Код 7
    const int MAX_LENGTH = 100;
    char surname[MAX_LENGTH], patronymic[MAX_LENGTH];
    char gender[MAX_LENGTH], birthDate[MAX_LENGTH], address[MAX_LENGTH];
    char phoneNumber[MAX_LENGTH], educationPlace[MAX_LENGTH], group[MAX_LENGTH];
    char hobby[MAX_LENGTH];
    cout << "       Прізвище?= : ";
    cin >> surname;
    cout << "           Ім'я?= : ";
    cin >> name;
    cout << "    По батькові?= : ";
    cin >> patronymic;
    cout << "          Стать?= : ";
    cin >> gender;
    cout << "Дата народження?= : ";
    cin >> birthDate;
    cout << "         Адреса?= : ";
    cin.ignore(); // Додано, щоб уникнути пропуску введення
    cin.getline(address, MAX_LENGTH);
    cout << " Номер телефону?= : ";
    cin >> phoneNumber;
    cout << " Місце навчання?= : ";
    cin.ignore(); // Додано, щоб уникнути пропуску введення
    cin.getline(educationPlace, MAX_LENGTH);
    cout << "          Група?= : ";
    cin >> group;
    cout << "          Хоббі?= : ";
    cin.ignore(); // Додано, щоб уникнути пропуску введення
    cin.getline(hobby, MAX_LENGTH);
    cout << "\nА Н К Е Т А\n";
    cout << "Прізвище : " << surname << " Ім'я : " << name << " По батькові : " << patronymic << endl;
    cout << "Номер телефону : " << phoneNumber << " Хоббі : " << hobby << endl;
    cout << "Місце навчання : " << educationPlace << " Група : " << group << endl;
    cout << "Дата народження : " << birthDate << " Стать : " << gender << endl;
    cout << "Адреса : " << address << endl;

    // Код 8
    int x;
    cout << "Задумайте число та запишіть його." << endl;
    cout << "Ваше число помножте на 10, потім поділіть на 2, додайте до результату ваше число," << endl;
    cout << "потім поділіть на 3, додайте 4, поділіть на 2 і відніміть 2." << endl;
    cout << "Введіть отриманий результат: ";
    cin >> x;
    int guessed_number = x;
    cout << "Ви задумали число " << guessed_number << "." << endl;

    return 0;
}
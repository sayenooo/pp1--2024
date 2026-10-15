#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n; // Читаем количество команд
    map<string, string> document; // Создаем пустой map для хранения ключ-значение

    for (int i = 0; i < n; ++i) {
        string command, key, value;
        cin >> command >> key; // Читаем команду и ключ
        
        if (command == "set") {
            cin >> value; // Читаем значение только для команды "set"
            document[key] = value; // Добавляем или обновляем значение по ключу
        } 
        else if (command == "get") {
            // Проверяем, существует ли ключ в map
            if (document.find(key) != document.end()) {
                cout << document[key] << endl; // Выводим значение, если ключ существует
            } 
            else {
                // Выводим сообщение об ошибке, если ключ не найден
                cout << "KE: no key " << key << " found in the document" << endl;
            }
        }
    }

    return 0;
}
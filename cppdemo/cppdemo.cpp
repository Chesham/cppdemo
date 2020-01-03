#include <iostream>
#include <nlohmann/json.hpp> // 因為專案 include 有設定 "../.submodules/nlohmann/include" 才能這樣 include
using namespace std;
using namespace nlohmann;

int main()
{
    auto input = R"({
  "pi": 3.141,
  "happy": true,
  "name": "Niels",
  "nothing": null,
  "answer": {
    "everything": 42
  },
  "list": [1, 0, 2],
  "object": {
    "currency": "USD",
    "value": 42.99
  }
})";
    // json object
    auto jsonObj = json::parse(input);
    // serialize
    cout << jsonObj;
}

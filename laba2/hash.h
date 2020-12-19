#ifndef HASH_H
#define HASH_H
#include <exception>
#include <vector>
#include <fstream>
using namespace std;

template<typename K, typename V>
class Hash;

template<typename K, typename V>
ostream& operator<<(ostream& stream, const Hash<K, V>& hash) {
    bool k = false;
    for (const auto& chain : hash.hash_table) {
        if (chain.size() != 0)
            for (const auto& pair : chain) {
                if (k == false) {
                    stream << pair.first << ' ' << pair.second;
                    k = true;
                } else {
                    stream << endl << pair.first << ' ' << pair.second;
                }
            }
    }
    return stream;
}

template<typename K, typename V>
istream& operator>>(istream& stream, Hash<K, V>& hash) {
    string input_key, input_value;
    while (stream) {
        stream >> input_key >> input_value;
        hash.insert(input_key, input_value);
    }
    return stream;
}

template<typename K, typename V>
class Hash {
  public:
    unsigned char hash_func(const K& key);
    Hash() {};
    Hash(const Hash& other);
    void clear();
    size_t size() const;
    void getFromFile(const string& path);
    void dumpToFile(const string& path) const;
    template<typename Q, typename W> friend ostream& operator<<(ostream& stream, const Hash<Q, W>& hash);
    template<typename Q, typename W> friend istream& operator>>(istream& stream, Hash<Q, W>& hash);
    bool operator==(const Hash& other) const;
    bool operator!=(const Hash& other) const;
    void insert(const K& key, const V& value);
    void erase(const K& key);
    V& get(const K& key);
    V& operator[](const K& key);
    bool isKey(const K & key);
    vector<V> getValues(const vector<K>& keys);
    vector<pair<K, V>> getAll() const;

  private:
    vector<vector<pair<K, V>>> hash_table = vector<vector<pair<K, V>>>(256);
    size_t hash_size = 0;
};

template<typename K, typename V>
unsigned char Hash<K, V>::hash_func(const K & key) {
    unsigned char output = 0;
    for (const auto& letter : key){
        output += letter;
    }
    return output;
}

template<typename K, typename V>
Hash<K, V>::Hash(const Hash& other) {
    hash_table = other.hash_table;
}

template<typename K, typename V>
void Hash<K, V>::clear() {
     hash_table.clear();
     hash_table = vector<vector<pair<K, V>>>(256);
     hash_size = 0;
}

template<typename K, typename V>
size_t Hash<K, V>::size() const {
    return hash_size;
}

template<typename K, typename V>
void Hash<K, V>::getFromFile(const string& path) {
    ifstream input(path);
    if (input) {
        input >> *this;
    }
}

template<typename K, typename V>
void Hash<K, V>::dumpToFile(const string& path) const {
    ofstream output(path);
    output << *this;
}

template<typename K, typename V>
bool Hash<K, V>::operator==(const Hash& other) const {
    return hash_table == other.hash_table;
}

template<typename K, typename V>
bool Hash<K, V>::operator!=(const Hash& other) const {
    return (!(*this == other));
}

template<typename K, typename V>
void Hash<K, V>::insert(const K& key, const V& value) {
    auto hash_code = hash_func(key);
    auto& chain = hash_table[hash_code];
    for (auto& pair : chain) {
        if (pair.first == key) {
            pair.second = value;
            return;
        }
    }
    chain.push_back({key, value});
    ++hash_size;
}

template<typename K, typename V>
void Hash<K, V>::erase(const K& key) {
    auto hash_code = hash_func(key);
    auto& chain = hash_table[hash_code];
    for (auto i = chain.begin(); i != chain.end(); ++i) {
        if (i->first == key) {
            chain.erase(i);
            --hash_size;
            return;
        }
    }
    throw invalid_argument("No such key in hash table");
}

template<typename K, typename V>
V& Hash<K, V>::get(const K& key) {
    auto hash_code = hash_func(key);
    for (auto& pair : hash_table[hash_code]) {
        if (pair.first == key)
            return pair.second;

    }
    throw invalid_argument("No such key in hash table");
}

template<typename K, typename V>
V& Hash<K, V>::operator[](const K& key) {
    return get(key);
}

template<typename K, typename V>
bool Hash<K, V>::isKey(const K & key) {
    try {
        const auto& a = get(key);
        return true;
    } catch (const invalid_argument) {
        return false;
    }
}

template<typename K, typename V>
vector<V> Hash<K, V>::getValues(const vector<K>& keys)  {
    vector<V> output;
    for (const auto& item : keys) {
        output.push_back(get(item));
    }
    return output;
}

template<typename K, typename V>
vector<pair<K, V>> Hash<K, V>::getAll() const {
    vector<pair<K, V>> output;
    for (const auto& chain : hash_table) {
        if (chain.size() != 0)
            for (const auto& pair : chain)
                output.push_back(pair);
    }
    return output;
}

#endif // HASH_H

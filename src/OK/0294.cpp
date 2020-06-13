#include <iostream>
using namespace std;

int main() {
	int k1, l1, m1;
    cin >> k1 >> l1 >> m1;

    int k2, l2, m2;
    cin >> k2 >> l2 >> m2;
    
    int lost1 = k1 * l1 / 100;
    int lost2 = k2 * l2 / 100;

    int damage = lost1 * m1 + lost2 * m2;

    k1 -= lost1;
    k2 -= lost2;
	
    if(k1 > k2)
        damage += (k1 - k2) * m1;
    else
        damage += (k2 - k1) * m2;

    cout << damage;
    
	return 0;
}

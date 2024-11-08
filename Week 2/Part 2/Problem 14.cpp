/*
Alice và Bob là đôi bạn thân trong lớp và thường giúp nhau trong giờ học. Hôm nay sẽ có tiết kiểm tra toán và như mọi khi – sẽ có k đề khác nhau. Lớp học có n học
sinh. Các bàn trong lớp xếp thành một hàng dọc, mỗi bàn 2 người ngồi. Vị trí bên trái của bàn đánh số là 1, vị trí bên phải – đánh số 2. Đề bài được phát bắt đầu
từvị trí 1 của bàn 1 rồi đến vị trí 2 của bàn 1, tiếp theo là vị trí 1 của bàn 2, rồi tới vị trí 2 của bàn 2, . . . lần lượt các đề 1, đề 2, đề 3, . . . cho tới đề
krồi lại quay lại đề 1, đề 2, . . . cho tới khi tất cả các học sinh đều nhận được đề.

Alice đến trước và ngồi vào vị trí quen thuộc của mình: hàng p và vị trí q. Bob đến sau và muốn ngồi vào nơi sẽ nhận được cùng đề với Alice và ở dãy bàn gần với 
dãy bàn của Alice nhất. Nếu có 2 cách ngồi thì Bob sẽ chọn bàn ở phía trước của Alice.
Hãy xác định bàn u và vị trí v trong bàn nơi Bob cần phải ngồi. Nếu không có cách ngồi thỏa mãn thì đưa ra một số -1.

Dữ liệu: Vào từ thiết bị nhập chuẩn:
    Dòng đầu tiên chứa một số nguyên n (2 ≤ n ≤ 109),
    Dòng thứ 2 chứa số nguyên k (2 ≤ k ≤ n),
    Dòng thứ 3 chứa số nguyên p (1 ≤ p ≤ (n+1)/2),
    Dòng thứ 4 chứa số nguyên q (1 ≤ q ≤ 2).
    
Kết quả: Đưa ra thiết bị xuất chuẩn một dòng 2 số nguyên u và v tìm được hoặc số -1 nếu không có cách ngồi thỏa mãn điều kiện đã nêu.

Ví dụ:
_____________________________________________
|    INPUT            |   OUTPUT            |
|---------------------|---------------------|
|    25               |   2 2               |
|    2                |                     |
|    1                |                     |
|    2                |                     |
|_____________________|_____________________|
*/

#include <iostream>
using namespace std;

int main() {
    int n, k, p, q;
    cin >> n >> k >> p >> q;
    int Alice = (p - 1) * 2 + q;
    int Bob = 0;
    if (Alice <= k && Alice + k <= n) Bob = Alice + k;
    else if (Alice > k && Alice - k > 0) Bob = Alice - k;
    else {
        cout << "-1";
        return 0;
    }
    cout << (Bob + 1) / 2 << " " << (Bob % 2 == 0 ? 2 : 1);
}

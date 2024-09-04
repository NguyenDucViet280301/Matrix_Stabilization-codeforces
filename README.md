Bạn được cho một ma trận có kích thước n × m, trong đó các hàng được đánh số từ 1 đến n từ trên xuống dưới, và các cột được đánh số từ 1 đến m từ trái sang phải. Phần tử tại giao điểm của hàng thứ i và cột thứ j được ký hiệu là aᵢⱼ.

Hãy xem xét thuật toán để ổn định ma trận a:

Tìm ô (i, j) sao cho giá trị của nó lớn hơn hẳn so với giá trị của tất cả các ô lân cận của nó. Nếu không có ô nào như vậy, dừng thuật toán. Nếu có nhiều ô như vậy, chọn ô có giá trị i nhỏ nhất, và nếu vẫn có nhiều ô, chọn ô có giá trị j nhỏ nhất.
Đặt aᵢⱼ = aᵢⱼ − 1.
Quay lại bước 1.
Trong bài toán này, các ô (a, b) và (c, d) được coi là lân cận nếu chúng có chung một cạnh, tức là, |a − c| + |b − d| = 1.

Nhiệm vụ của bạn là xuất ra ma trận a sau khi thuật toán ổn định đã được thực hiện. Có thể chứng minh rằng thuật toán này không thể chạy vô tận.

Đầu vào:

Mỗi bộ kiểm tra bao gồm nhiều bộ dữ liệu đầu vào. Dòng đầu tiên chứa một số nguyên t (1 ≤ t ≤ 10⁴) — số lượng bộ dữ liệu đầu vào. Tiếp theo là mô tả của chúng.

Dòng đầu tiên của mỗi bộ dữ liệu đầu vào chứa hai số nguyên n và m (1 ≤ n, m ≤ 100, n ⋅ m > 1) — số lượng hàng và cột của ma trận a.

Tiếp theo là n dòng mô tả các hàng tương ứng của ma trận. Dòng thứ i chứa m số nguyên aᵢ₁, aᵢ₂, ..., aᵢₘ (1 ≤ aᵢⱼ ≤ 10⁹).

Đảm bảo rằng tổng số n ⋅ m trên tất cả các bộ dữ liệu đầu vào không vượt quá 2 ⋅ 10⁵.

Đầu ra:

Đối với mỗi bộ dữ liệu đầu vào, xuất ra n dòng với m số trong mỗi dòng — giá trị của các ô của ma trận a sau khi thuật toán ổn định.

Giải quyết:

Kiểm tra ô đỉnh

Tạo một hàm is_peak để kiểm tra xem ô (i, j) có phải là đỉnh hay không. Một ô được coi là đỉnh nếu giá trị của nó lớn hơn tất cả các ô lân cận (các ô có chung một cạnh).

Ổn định ma trận

Tạo một hàm stabilize_matrix để thực hiện thuật toán ổn định ma trận.

Trong hàm này, bạn sẽ lặp lại việc tìm ô đỉnh và giảm giá trị của nó cho đến khi không còn ô nào là đỉnh nữa.

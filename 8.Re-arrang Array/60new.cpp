#include <iostream> 
using namespace std; 
// In số lượng tối thiểu có thể được hình thành từ chuỗi đầu vào của I và D
void PrintMinNumberForPattern(string arr) { 
	// Khởi tạo current_max (để đảm bảo không sử dụng ký tự lặp lại
	int curr_max = 0; 
	// Khởi tạo last_entry (Theo dõi chữ số được in lần cuối) 
	int last_entry = 0; 
	int j; 
	// Lặp lại mảng đầu vào
	for (int i=0; i<arr.length(); i++) { 
		// Khởi tạo 'noOfNextD' để có số lượng D tiếp theo khả dụng
		int noOfNextD = 0; 
		switch(arr[i]) { 
		case 'I': 
			// Nếu chữ cái là 'I' tính số D tiếp theo có sẵn
			j = i+1; 
			while (arr[j] == 'D' && j < arr.length()) { 
				noOfNextD++; 
				j++; 
			} 	
			if (i==0) { 
				curr_max = noOfNextD + 2; 
				// Nếu 'I' là chữ cái đầu tiên, hãy in chuỗi tăng dần từ 1 
				cout  << ++last_entry; 
				cout << curr_max; 
				// Đặt chữ số tối đa đạt
				last_entry = curr_max; 
			} 
			else{ 
				// Nếu không phải chữ cái đầu tiên lấy chữ số tiếp theo để in 
				curr_max = curr_max + noOfNextD + 1; 
				// In chữ số cho I
				last_entry = curr_max; 
				cout << last_entry; 
			} 
			// Đối với tất cả chuỗi giảm dần in 'D' liên tiếp
			for (int k=0; k<noOfNextD; k++) { 
				cout << --last_entry; 
				i++; 
			} 
			break;
		// Nếu chữ cái là 'D'
		case 'D': 
			if (i == 0) { 
				// Nếu 'D' là chữ cái đầu tiên trong chuỗi tìm số thứ tự của D tiếp theo
				j = i+1; 
				while (arr[j] == 'D' && j < arr.length()) { 
					noOfNextD++; 
					j++; 
				} 
				// Tính chữ số đầu tiên để in dựa trên số D liên tiếp
				curr_max = noOfNextD + 2; 
				// In hai lần lần đầu tiên
				cout << curr_max << curr_max - 1; 
				// Lưu trữ mục cuối cùng
				last_entry = curr_max - 1; 
			} 
			else{ 
				// Nếu 'D' hiện tại không phải là chữ cái giảm đầu tiên last_entry
				cout << last_entry - 1; 
				last_entry--; 
			} 
			break; 
		} 
	} 
	cout << endl; 
} 
int main() { 
	int t; cin>>t;
	while(t--){
		string arr;
		cin>>arr;
		PrintMinNumberForPattern(arr); 
	}
	return 0; 
} 

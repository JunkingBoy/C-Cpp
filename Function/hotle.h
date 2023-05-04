# define QUIT 5
# define HOTEL1 180.00
# define HOTEL2 225.00
# define HOTEL3 255.00
# define HOTEL4 355.00
# define DISCOUNT 0.95
# define STARS "********************"

// 显示选择列表
int menu(void);

// 返回预定天数
int getNights(void);

// 根据费率、入住天数计算费用,显示结果
void showPrice(double rate, int nights);
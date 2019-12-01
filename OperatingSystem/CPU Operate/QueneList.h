//큐에 저장될 프로세스의 하나의 일을 가르키는 구조체
typedef struct Oper
{
	char dataType;
	int data;
	char* name;
	struct Oper* link;
}Oper;

//큐의 맨 처음, 끝을 가르키는 포인터가 정의된 구조체
typedef struct {
	int start;
	Oper* top, * end;
}Quene;

//각 CPU, Memory, Keyboard에서 현재 실행되고 있는 일의 위치를 가르킬 포인터가 정의된 구조체
typedef struct {
	Oper* Com;
	int DataZero;
	char dataType;
}Computer; 

Quene* createData(void);
Computer* createPin(char ch);
void insertData(Quene* Op, char type, int data, char* name);
void deleteOneQ(Quene* Op);
Computer* startTime(Quene* A[3], Computer* UseType);
Computer* CheckAndMinus(Computer* UseType);
int CheckDataNull(Quene* A[3]);
void SetData(Computer* UseType, Quene* A[3]);

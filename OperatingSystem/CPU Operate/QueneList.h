//ť�� ����� ���μ����� �ϳ��� ���� ����Ű�� ����ü
typedef struct Oper
{
	char dataType;
	int data;
	char* name;
	struct Oper* link;
}Oper;

//ť�� �� ó��, ���� ����Ű�� �����Ͱ� ���ǵ� ����ü
typedef struct {
	int start;
	Oper* top, * end;
}Quene;

//�� CPU, Memory, Keyboard���� ���� ����ǰ� �ִ� ���� ��ġ�� ����ų �����Ͱ� ���ǵ� ����ü
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

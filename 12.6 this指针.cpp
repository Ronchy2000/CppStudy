//C++ this ָ��
//C++ �� & ���� C++ �� & ����
//
//�� C++ �У�this ָ����һ�������ָ�룬��ָ��ǰ�����ʵ����
//
//�� C++ �У�ÿһ��������ͨ�� this ָ���������Լ��ĵ�ַ��
//
//this��һ�����ص�ָ�룬��������ĳ�Ա������ʹ�ã�����������ָ����ö���
//
//��һ������ĳ�Ա����������ʱ������������ʽ�ش��ݸö���ĵ�ַ��Ϊ this ָ�롣
//
//��Ԫ����û�� this ָ�룬��Ϊ��Ԫ������ĳ�Ա��ֻ�г�Ա�������� this ָ�롣
//
//�����ʵ�������ڸ��õ���� this ָ��ĸ��
//
//#include <iostream>
//
//class MyClass {
//private:
//    int value;
//
//public:
//    void setValue(int value) {
//        this->value = value;
//    }
//
//    void printValue() {
//        std::cout << "Value: " << this->value << std::endl;
//    }
//};
//
//int main() {
//    MyClass obj;
//    obj.setValue(42);
//    obj.printValue();
//
//    return 0;
//}

//
//ʵ��������
//
//����ʵ���У����Ƕ�����һ����Ϊ MyClass ���࣬����һ��˽�г�Ա���� value��
//
//���е� setValue() ������������ value�� ֵ���� printValue() �������ڴ�ӡ value ��ֵ��
//
//�� setValue() �����У�����ʹ�� this ָ�������õ�ǰ����ĳ�Ա���� value�����������ֵ������������������ȷ�ظ��߱�����������Ҫ���ʵ�ǰ����ĳ�Ա�����������Ǻ���������ֲ�������
//
//�� printValue() �����У�����ͬ��ʹ�� this ָ�������õ�ǰ����ĳ�Ա���� value���������ӡ������
//
//�� main() �����У����Ǵ�����һ�� MyClass �Ķ��� obj��Ȼ��ʹ�� setValue() �������� value ��ֵΪ 42����ͨ�� printValue() ������ӡ������
//
//ͨ��ʹ�� this ָ�룬���ǿ����ڳ�Ա�����з��ʵ�ǰ����ĳ�Ա��������ʹ�����뺯��������ֲ�����ͬ�����������Ա���������ͻ����ȷ�����Ƿ��ʵ�����ȷ�ı�����



//���࣡
//����ʵ�����ڱȽϳ�����������
#include <iostream>

using namespace std;

class Box
{
   public:
      // ���캯������
      Box(double l=2.0, double b=2.0, double h=2.0)
      {
         cout <<"���ù��캯����" << endl;
         length = l;
         breadth = b;
         height = h;
      }
      double Volume()
      {
         return length * breadth * height;
      }
      int compare(Box box)
      {
         return this->Volume() > box.Volume();
      }
   private:
      double length;     // ���
      double breadth;    // ����
      double height;     // �߶�
};

int main(void)
{
   Box Box1(3.3, 1.2, 1.5);    // ���� box1
   Box Box2(8.5, 6.0, 2.0);    // ���� box2

   if(Box1.compare(Box2))
   {
      cout << "Box2 ������� Box1 С" <<endl;
   }
   else
   {
      cout << "Box2 ��������ڻ���� Box1" <<endl;
   }
   return 0;
}



//C++ ��������������غ���
//
//C++ ������ͬһ�������е�ĳ�������������ָ��������壬�ֱ��Ϊ�������غ���������ء�
//
//����������ָһ����֮ǰ�Ѿ��ڸ����������������ĺ����򷽷�������ͬ���Ƶ��������������ǵĲ����б�Ͷ��壨ʵ�֣�����ͬ��
//
//��������һ�����غ��������������ʱ��������ͨ��������ʹ�õĲ��������붨���еĲ������ͽ��бȽϣ�����ѡ������ʵĶ��塣ѡ������ʵ����غ���������������Ĺ��̣���Ϊ���ؾ��ߡ�

/********************************************************************************************************************************************/
//C++ �еĺ�������
//��ͬһ���������ڣ��������������������Ƶ�ͬ��������������Щͬ����������ʽ������ָ�����ĸ��������ͻ���˳�򣩱��벻ͬ�������ܽ�ͨ���������͵Ĳ�ͬ�����غ�����
//
//�����ʵ���У�ͬ������ print() �����������ͬ���������ͣ���
//
//#include <iostream>
//using namespace std;
//
//class printData
//{
//   public:
//      void print(int i) {
//        cout << "����Ϊ: " << i << endl;
//      }
//
//      void print(double  f) {
//        cout << "������Ϊ: " << f << endl;
//      }
//
//      void print(char c[]) {
//        cout << "�ַ���Ϊ: " << c << endl;
//      }
//};
//
//int main(void)
//{
//   printData pd;
//
//   // �������
//   pd.print(5);
//   // ���������
//   pd.print(500.263);
//   // ����ַ���
//   char c[] = "Hello C++";
//   pd.print(c);
//
//   return 0;
//}

/********************************************************************************************************************************************/
//C++ �е����������
//�������ض�������ش󲿷� C++ ���õ��������������������ʹ���Զ������͵��������
//
//���ص�������Ǵ����������Ƶĺ��������������ɹؼ��� operator �����Ҫ���ص���������Ź��ɵġ�����������һ���������������һ���������ͺ�һ�������б�


#include <iostream>
using namespace std;

class Box
{
   public:

      double getVolume(void)
      {
         return length * breadth * height;
      }
      void setLength( double len )
      {
          length = len;
      }

      void setBreadth( double bre )
      {
          breadth = bre;
      }

      void setHeight( double hei )
      {
          height = hei;
      }
      // ���� + ����������ڰ����� Box �������
      Box operator+(const Box& b)
      {
         Box box;
         box.length = this->length + b.length;
         box.breadth = this->breadth + b.breadth;
         box.height = this->height + b.height;
         return box;
      }
   private:
      double length;      // ����
      double breadth;     // ���
      double height;      // �߶�
};
// �����������
int main( )
{
   Box Box1;                // ���� Box1������Ϊ Box
   Box Box2;                // ���� Box2������Ϊ Box
   Box Box3;                // ���� Box3������Ϊ Box
   double volume = 0.0;     // ������洢�ڸñ�����

   // Box1 ����
   Box1.setLength(6.0);
   Box1.setBreadth(7.0);
   Box1.setHeight(5.0);

   // Box2 ����
   Box2.setLength(12.0);
   Box2.setBreadth(13.0);
   Box2.setHeight(10.0);

   // Box1 �����
   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;

   // Box2 �����
   volume = Box2.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;

   // ������������ӣ��õ� Box3
   Box3 = Box1 + Box2;

   // Box3 �����
   volume = Box3.getVolume();
   cout << "Volume of Box3 : " << volume <<endl;

   return 0;
}


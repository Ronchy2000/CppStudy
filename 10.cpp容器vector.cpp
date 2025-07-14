/****************************************************************************************************************/
/*
C++ vector ����
C++ �е� vector ��һ��������������������������ʱ��̬�ز����ɾ��Ԫ�ء�

vector �ǻ�����������ݽṹ�����������Զ������ڴ棬����ζ���㲻��Ҫ�ֶ�������ͷ��ڴ档

�� C++ ������ȣ�vector ���и��������Ժ͹��ܣ�ʹ���Ϊ C++ �г��õ����ݽṹ֮һ��

vector �� C++ ��׼ģ��⣨STL����һ���֣��ṩ�����Ľӿں͸�Ч�Ĳ�����

��������:

��̬��С��vector �Ĵ�С���Ը�����Ҫ�Զ���������С��
�����洢��vector �е�Ԫ�����ڴ����������洢�ģ���ʹ�÷���Ԫ�طǳ����١�
�ɵ�����vector ���Ա������������ʹ��ѭ������ for ѭ��������������Ԫ�ء�
Ԫ�����ͣ�vector ���Դ洢�κ����͵�Ԫ�أ������������͡�����ָ��ȡ�
ʹ�ó�����

������Ҫһ�����Զ�̬��������С������ʱ��
������ҪƵ���������е�ĩβ��ӻ��Ƴ�Ԫ��ʱ��
������Ҫһ�����Ը�Ч�������Ԫ�ص�����ʱ��
Ҫʹ�� vector��������Ҫ���� <vector> ͷ�ļ���
*/

/*
//���� Vector
#include <vector>

std::vector<int> myVector; // ����һ���洢�����Ŀ� vector

std::vector<int> myVector(5); // ����һ������ 5 �������� vector��ÿ��ֵ��ΪĬ��ֵ��0��
std::vector<int> myVector(5, 10); // ����һ������ 5 �������� vector��ÿ��ֵ��Ϊ 10/
//����
std::vector<int> vec; // Ĭ�ϳ�ʼ��һ���յ� vector
std::vector<int> vec2 = {1, 2, 3, 4}; // ��ʼ��һ������Ԫ�ص� vector


//���Ԫ��
.accumulate
//����ʹ�� push_back ������ vector �����Ԫ�أ�
myVector.push_back(7); // ������ 7 ��ӵ� vector ��ĩβ


//����Ԫ��
//����ʹ���±������ [] �� at() �������� vector �е�Ԫ�أ�
int x = myVector[0]; // ��ȡ��һ��Ԫ��
int y = myVector.at(1); // ��ȡ�ڶ���Ԫ��


//��ȡ��С
//����ʹ�� size() ������ȡ vector ��Ԫ�ص�������
int size = myVector.size(); // ��ȡ vector �е�Ԫ������


//��������
//����ʹ�õ��������� vector �е�Ԫ�أ�
for (auto it = myVector.begin(); it != myVector.end(); ++it) {
    std::cout << *it << " ";
}
//����ʹ�÷�Χѭ����
for (int element : myVector) {
    std::cout << element << " ";
}


//ɾ��Ԫ��
//����ʹ�� erase() ����ɾ�� vector �е�Ԫ�أ�
myVector.erase(myVector.begin() + 2); // ɾ��������Ԫ��


//��� Vector
//����ʹ�� clear() ������� vector �е�����Ԫ�أ�
myVector.clear(); // ��� vector
*/


//ʾ��
#include <iostream>
#include <vector>

int main() {
    // ����һ���յ���������
    std::vector<int> myVector;

    // ���Ԫ�ص�������,��ӵ�ĩβ
    myVector.push_back(3);
    myVector.push_back(7);
    myVector.push_back(11);
    myVector.push_back(5);

    // ���������е�Ԫ�ز����
    std::cout << "Elements in the vector: ";
    for (int element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // ���������еĵ�һ��Ԫ�ز����
    std::cout << "First element: " << myVector[0] << std::endl;

    // ���������еĵڶ���Ԫ�ز����
    std::cout << "Second element: " << myVector.at(1) << std::endl;

    // ��ȡ�����Ĵ�С�����
    std::cout << "Size of the vector: " << myVector.size() << std::endl;

    // ɾ�������еĵ�����Ԫ��
    myVector.erase(myVector.begin() + 2);

    // ���ɾ��Ԫ�غ������
    std::cout << "Elements in the vector after erasing: ";
    for (int element : myVector) {
            /*
                 C++11 ����ķ�Χ������ѭ����Range-based for-loop�����书���Ǳ������� myVector �е�ÿ��Ԫ�أ�����ӡ��Ԫ�ص�ֵ��������������ͣ�
                        int element��
                                ����һ������ element������Ϊ int��������ÿ�ε���ʱ����ֵΪ���� myVector ����һ��Ԫ��ֵ��
                        : myVector��
                                ��ʾ���� myVector �����е�����Ԫ�ء�ÿ��Ԫ�����θ�ֵ�� element��
            */
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // ������������
    myVector.clear();
    std::cout << "Size of the vector after clearing: " << myVector.size() << std::endl;

    return 0;
}




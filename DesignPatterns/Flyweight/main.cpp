#include "GoodsFactory.h"

int main()
{
        shared_ptr<GoodsFactory> gf(new GoodsFactory);
        auto g1 = gf->GetGoods("i3����");
        cout << "��Ʒ����" << g1->GetGoodsName() << "����Ʒ����size��" << gf->GetHashSize() << endl;
        auto g2 = gf->GetGoods("i5����");
        cout << "��Ʒ����" << g2->GetGoodsName() << "����Ʒ����size��" << gf->GetHashSize() << endl;
        auto g3 = gf->GetGoods("i7����");
        cout << "��Ʒ����" << g3->GetGoodsName() << "����Ʒ����size��" << gf->GetHashSize() << endl;
        auto g4 = gf->GetGoods("i9����");
        cout << "��Ʒ����" << g4->GetGoodsName() << "����Ʒ����size��" << gf->GetHashSize() << endl;
        auto g5 = gf->GetGoods("i3����");
        cout << "��Ʒ����" << g5->GetGoodsName() << "����Ʒ����size��" << gf->GetHashSize() << endl;
        auto g6 = gf->GetGoods("i5����");
        cout << "��Ʒ����" << g6->GetGoodsName() << "����Ʒ����size��" << gf->GetHashSize() << endl;
        auto g7 = gf->GetGoods("i7����");
        cout << "��Ʒ����" << g7->GetGoodsName() << "����Ʒ����size��" << gf->GetHashSize() << endl;
        auto g8 = gf->GetGoods("i9����");
        cout << "��Ʒ����" << g8->GetGoodsName() << "����Ʒ����size��" << gf->GetHashSize() << endl;
        auto g9 = gf->GetGoods("i3����");
        cout << "��Ʒ����" << g9->GetGoodsName() << "����Ʒ����size��" << gf->GetHashSize() << endl;
        auto g10 = gf->GetGoods("i5����");
        cout << "��Ʒ����" << g10->GetGoodsName() << "����Ʒ����size��" << gf->GetHashSize() << endl;
        auto g11 = gf->GetGoods("i7����");
        cout << "��Ʒ����" << g11->GetGoodsName() << "����Ʒ����size��" << gf->GetHashSize() << endl;
        auto g12 = gf->GetGoods("i9����");
        cout << "��Ʒ����" << g12->GetGoodsName() << "����Ʒ����size��" << gf->GetHashSize() << endl;

        getchar();
        return 0;
}
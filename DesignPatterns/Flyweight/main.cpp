#include "GoodsFactory.h"

int main()
{
        shared_ptr<GoodsFactory> gf(new GoodsFactory);
        auto g1 = gf->GetGoods("i3主机");
        cout << "商品名：" << g1->GetGoodsName() << "，商品对象size：" << gf->GetHashSize() << endl;
        auto g2 = gf->GetGoods("i5主机");
        cout << "商品名：" << g2->GetGoodsName() << "，商品对象size：" << gf->GetHashSize() << endl;
        auto g3 = gf->GetGoods("i7主机");
        cout << "商品名：" << g3->GetGoodsName() << "，商品对象size：" << gf->GetHashSize() << endl;
        auto g4 = gf->GetGoods("i9主机");
        cout << "商品名：" << g4->GetGoodsName() << "，商品对象size：" << gf->GetHashSize() << endl;
        auto g5 = gf->GetGoods("i3主机");
        cout << "商品名：" << g5->GetGoodsName() << "，商品对象size：" << gf->GetHashSize() << endl;
        auto g6 = gf->GetGoods("i5主机");
        cout << "商品名：" << g6->GetGoodsName() << "，商品对象size：" << gf->GetHashSize() << endl;
        auto g7 = gf->GetGoods("i7主机");
        cout << "商品名：" << g7->GetGoodsName() << "，商品对象size：" << gf->GetHashSize() << endl;
        auto g8 = gf->GetGoods("i9主机");
        cout << "商品名：" << g8->GetGoodsName() << "，商品对象size：" << gf->GetHashSize() << endl;
        auto g9 = gf->GetGoods("i3主机");
        cout << "商品名：" << g9->GetGoodsName() << "，商品对象size：" << gf->GetHashSize() << endl;
        auto g10 = gf->GetGoods("i5主机");
        cout << "商品名：" << g10->GetGoodsName() << "，商品对象size：" << gf->GetHashSize() << endl;
        auto g11 = gf->GetGoods("i7主机");
        cout << "商品名：" << g11->GetGoodsName() << "，商品对象size：" << gf->GetHashSize() << endl;
        auto g12 = gf->GetGoods("i9主机");
        cout << "商品名：" << g12->GetGoodsName() << "，商品对象size：" << gf->GetHashSize() << endl;

        getchar();
        return 0;
}
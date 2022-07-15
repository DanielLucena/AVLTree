#ifndef AVLTree2_h
#define AVLTree2_h
#include <iostream>



class AVLTree{
    public:

        struct node
        {
        int key;
        node* left = nullptr;
        node* right = nullptr;
        int height;
        };

        struct node* root=nullptr;
        /**
         * @brief retorna o maior valor entre os dois inteiros passados
         * 
         * @param a 
         * @param b 
         * @return int do maior valor entre os dois passados
         */

 //~AVLTree() {deleteTree(root);}

void deleteTree(node* no)
{
        if(no->left!=nullptr){
            deleteTree(no->left);
        }

        if(no->right!=nullptr){
            deleteTree(no->right);
        }
            delete no;
}


int height(AVLTree::node *n){

    int r, l, h = 0;
    if(n != nullptr)
    {
        l= height(n->left) + 1;
        r= height(n->right) + 1;
                
        if(l > r){
           h = l;
        }else{
            h = r;
        }
    }

    return h;
}

AVLTree::node* newNode(int key){
    AVLTree::node* no{new node};
    no->key = key;
    no->left = nullptr;
    no->right = nullptr;
    no->height = height(no);
    return no;
}   

AVLTree::node* rightRotate(AVLTree::node* y){
    //fixme
    return nullptr;
}

AVLTree::node* leftRotate(AVLTree::node* x){
    //fixme
    return nullptr;
}

int getBalance(AVLTree::node* n){
    
    int hl, hr;

    if(n == nullptr) return 0;

    if(n->right == nullptr) hr = 0;
    else hr = n->right->height; 


    if(n->left == nullptr) hl = 0;
    else hl = n->left->height;
    
    return (hr - hl);
    //fixme
}

void balanceTree(AVLTree::node* n){

    int bal = getBalance(n);
    int l = getBalance(n->left);
    int r = getBalance(n->right);
            
    if(bal >= 2 && r >=0){
        //rotaciona no para a esquerda
    }
    if(bal >= 2 && r < 0){
        //rotaciona no->dir para direita
        //rotaciona no para a esquerda
    }
    if(bal <=-2 && l <=0 ){
        //rotaciona no para direita
    }
    if(bal <=-2 && l > 0 ){
        //rotaciona no->esq para esquerda
        //rotaciona no para direita
    }
}

AVLTree::node* minValueNode(AVLTree::node* n){
    //fixme
    return nullptr;
}



//funcoes publicas
AVLTree::node* insert(AVLTree::node* n, int key){
    if(n == nullptr){
       return newNode(key);
    }

    if(n->key == key){
        return nullptr;
    }

    if(key < n->key){
        n->left = insert(n->left, key);
    }else if(key > n->key){
        n->right = insert(n->right, key);
    }

    n->height = height(n);

    int bal = getBalance(n);
    std::cout<<"no: "<< n->key << " | balanço: " << bal;
 
    //se a arvore estiver desbalanceada chama a função para balancear
    if(abs(bal)>1){ 
        std::cout<<" | balancear no "<< n->key;
        balanceTree(n);
    }

    std::cout<<"\n";

    return n;
}

bool search(AVLTree::node* n, int key){
    //fixme
    return false;
}

AVLTree::node* deleteNode(AVLTree::node* n, int key){
    //fixme
    return nullptr;
}

void preOrder(AVLTree::node* n){
    if(n != nullptr){
       // std::cout << n->key << " ";
        preOrder(n->left);
        preOrder(n->right);
    }
}

};

#endif //AVLTree_h
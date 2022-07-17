#include "AVLTree.h"

#include <iostream>

//funcoes privadas

void AVLTree::deleteTree(AVLTree::node* no)
{
        if(no->left!=nullptr){
            deleteTree(no->left);
        }

        if(no->right!=nullptr){
            deleteTree(no->right);
        }
            delete no;
}

int AVLTree::max(int a, int b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}

int AVLTree::height(AVLTree::node *n){
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

AVLTree::node* AVLTree::newNode(int key){
    AVLTree::node* no{new node};
    no->key = key;
    no->left = nullptr;
    no->right = nullptr;
    no->height = 1;
    return (no);
}   

AVLTree::node* AVLTree::rightRotate(AVLTree::node* y){
    AVLTree::node *ptu=y->left;
    if (ptu!=nullptr){
        if(ptu->right!=nullptr) y->left = ptu->right;
        else y->left = nullptr;
        ptu->right=y;
        y=ptu;
        ptu->height = height(ptu);
        y->height = height(y);
    }
   /* else{
        AVLTree::node *ptv=ptu->right;
        ptu->right=ptv->left;
        ptv->left=ptu;
        y->left=ptv->right;
        ptv->right=y;
        
        if (ptv->height=-1){

            y->height=1;
        }else{

            y->height=0;
        }

        if (ptv->height=1){

            ptu->height=-1;
        }else{
            ptu->height=0;
        }
        y=ptv; 
    }

    y->height=0;*/
    
    return y;
    
}

AVLTree::node* AVLTree::leftRotate(AVLTree::node* x){
    AVLTree::node *ptu=x->right;
    std::cout<<"antes"<< x->key<<"\n";
   
    if(ptu!=nullptr){
        if(ptu->left != nullptr) x->right=ptu->left;
        else x->right = nullptr;
        ptu->left=x;
        x=ptu;
        x->height = height(x);
        ptu->height = height(ptu);
    }

    std::cout<<"depois"<< x->key<<"\n";
    /*if (ptu->height=1){
        x->right=ptu->left;
        ptu->left=x;
        x->height=0;
        x=ptu;
    }
    else{
        AVLTree::node *ptv=ptu->left;
        ptu->left=ptv->right;
        ptv->right=ptu;
        x->right=ptv->left;
        ptv->left=x;
        
        if (ptv->height=1){

            x->height=-1;
        }else{

            x->height=0;
        }

        if (ptv->height=-1){

            ptu->height=1;
        }else{
            ptu->height=0;
        }
        x=ptv; 
    }

    x->height=0;*/
    
    return x;
}

int AVLTree::getbalance(AVLTree::node* n){

    int hl, hr;

    if(n == nullptr) return 0;

    if(n->right == nullptr) hr = 0;
    else hr = n->right->height; 


    if(n->left == nullptr) hl = 0;
    else hl = n->left->height;
    
    return (hr - hl);
}

AVLTree::node* AVLTree::balanceTree(AVLTree::node* n){

    int bal = getbalance(n);
    int l = getbalance(n->left);
    int r = getbalance(n->right);
            
    if(bal >= 2 && r >=0){
        n = leftRotate(n);
        std::cout<< n->key << "\n";
        std:: cout << n->right->key << "\n";
        std:: cout << n->left->key << "\n";
        //rotaciona no para a esquerda
    }
    if(bal >= 2 && r < 0){
        n -> right = rightRotate(n->right);
        n = leftRotate(n);
        //rotaciona no->dir para direita
        //rotaciona no para a esquerda
    }
    if(bal <=-2 && l <=0 ){
        n = rightRotate(n);
        //rotaciona no para direita
    }
    if(bal <=-2 && l > 0 ){
        n -> left = leftRotate(n->left);
        n = rightRotate(n);
        //rotaciona no->esq para esquerda
        //rotaciona no para direita
    }
    return n;
}

AVLTree::node *AVLTree::minValueNode(AVLTree::node* n){
    node* current = n;
    while(current->left != NULL){
        current = current->left;
    }
    return current;
}



//funcoes publicas
AVLTree::node* AVLTree::insert(AVLTree::node* n, int key){
    
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

    int bal = getbalance(n);
    std::cout<<"no: "<< n->key << " | balanço: " << bal;
 
    //se a arvore estiver desbalanceada chama a função para balancear
    if(abs(bal)>1){ 
        std::cout<<" | balancear no "<< n->key;
        n = balanceTree(n);
         std::cout<<"depois do balanço"<< n->key<<"\n";
    }

    std::cout<<"\n";

    return n;
}

bool AVLTree::search(AVLTree::node* n, int key){
    node * l = n->left;
    node * r = n->right;
    bool existKey{false};
   
    if(n!=nullptr){
        if(n->key = key){
            existKey = true;
        }else if(n->key < key){
           existKey = search(n->right, key);
        }else if(n->key >key){
           existKey = search(n->left, key);
        }
    }
    return existKey;
}

AVLTree::node* AVLTree::deleteNode(AVLTree::node* n, int key){
    //teste se a raiz esta vazia
    if(n == NULL){
        return NULL;
    }

    //procura o no a ser deletado
    if(key < n->key){
        n->left = deleteNode(n->left, key);
    }
    else if(key > n->key){
        n->right = deleteNode(n->right, key);
    }

    //se o key é igual ao n-> key entao o no que deve ser deletado foi encontrado
    else{
        //se o no a ser deletado nao tem filhos ou tem apenas um filho
        if(n->left == NULL || n->right == NULL){
            AVLTree::node* temp = n->left ? n->left : n->right;
            //se o no a ser deletado nao tem filho
            if(temp == NULL){
                temp = n;
                n = NULL;
            }
            //se o no a ser deletado tem um filho
            else{
                *n = *temp;
            }
            delete temp;
        }
        else{
            //no com 2 filhos
            //procura o no que substituira o no a ser deletado
            AVLTree::node *temp = AVLTree::minValueNode(n->right);

            //copia o valor do no a ser deletado para o no que substituira
            n->key = temp->key;

            //delete o no que substituira
            n->right = deleteNode(n->right, temp->key);
        }
    }

    if(n == NULL){
        return n;
    }

    //std::cout << "delete: " << n->key << "\n";
    return n;
}

void AVLTree::preOrder(AVLTree::node* n){
    if(n != NULL){
        std::cout << n->key << " ";
        preOrder(n->left);
        preOrder(n->right);
    }
}

void AVLTree::printTree(AVLTree::node* n, int space){
    if(n == NULL){
        return;
    }
    printTree(n->right, space+5);
    for(int i=0; i<space; i++){
        std::cout<<" ";
    }
    std::cout<<n->key<<"\n";
    printTree(n->left, space+5);
}
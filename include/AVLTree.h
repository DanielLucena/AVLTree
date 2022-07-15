#ifndef AVLTree_h
#define AVLTree_h



class AVLTree{
    public:

        struct node
        {
        int key;
        node* left = nullptr;
        node* right = nullptr;
        int height;
        };

        struct node* root;

    private:
        /**
         * @brief retorna o maior valor entre os dois inteiros passados
         * 
         * @param a 
         * @param b 
         * @return int do maior valor entre os dois passados
         */
        int max(int a, int b);

        /**
         * @brief retorna a altura do node
         * 
         * @param n ponteiro para o node
         * @return int da altura do node
         */
        int height(node *n);

        /**
         * @brief cria um novo node
         * 
         * @param key valor do novo node que sera criado
         * @return node* do node criado
         */
        struct node* newnode(int key);

        /**
         * @brief 
         * 
         * @param y ponteiro do node raiz da subtree
         * @return node* 
         */
        struct node* rightRotate(node* y);

        /**
         * @brief 
         * 
         * @param x ponteiro do node raiz da subtree
         * @return node* 
         */
        struct node* leftRotate(node* x);

        /**
         * @brief retorna o balance do node
         * 
         * @param n ponteiro para o node
         * @return int 
         */
        int getbalance(node* n);

        /**
         * @brief 
         * 
         * @param n ponteiro para o node raiz
         * @return node* do node de menor valor da arvore
         */
        struct node* minValueNode(node* n);



    public:

        /**
         * @brief 
         * 
         * @param n ponteiro para o node raiz
         * @param key valor que sera inserido na arvore
         * @return node* da nova raiz da arvore
         */
        struct node* insert(node* n, int key);

        /**
         * @brief 
         * 
         * @param n ponteiro para o node raiz
         * @param key valor que sera procurado na arvore
         * @return true se o valor for encontrado na arvore
         * @return false se o valor nao for encontrado na arvore
         */
        bool search(node* n, int key);

        /**
         * @brief 
         * 
         * @param n ponteiro para o node raiz
         * @param key valor que sera removido da arvore
         * @return node* a nova raiz da arvore
         */
        struct node* deleteNode(node* n, int key);

        /**
         * @brief imprime os valores da arvore apartir da raiz
         * 
         * @param n ponteiro para o node raiz
         */
        void preOrder(node* n);

};

#endif //AVLTree_h
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

    public:
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
        struct node* newNode(int key);

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
        static struct node* minValueNode(node* n);



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
        struct node* deleteNode(AVLTree::node* n, int key);


        /**
         * @brief deleta a arvore
         * 
         * @param n ponteiro para o node raiz
         */
        void deleteTree(node* n);

        /**
         * @brief imprime os valores da arvore apartir da raiz
         * 
         * @param n ponteiro para o node raiz
         */
        void preOrder(node* n);

        /**
         * @brief balancei a subarvore apartir do node passado como parametro
         * 
         * @param n ponteiro para o node raiz
         */
        struct node* balanceTree(node* n);
        
        /**
         * @brief printa a arvore horizontalmente apartir do no raiz
         * @param n ponteiro para o node raiz
         * @param space quantidade de espaços que devem ser adicionados ao inicio de cada linha
         * @param s sinaliza se o valor que sera impresso esta a direita ou a esquerda do pai
         * @param parentKey valor do pai
         */
        void printTree(node* n, int space, char s, int parentKey);

};

#endif //AVLTree_h
 /*
                                             problem 4
                                            ------------

   Members                                          ID
  Mostafa Mohamed Nabil                          20200548
  Ahmed Waleed Shawky                             20200060
  Omar Ayman Saied                               20200343
  Sameh Raouf Helmy                              20200218

 */
#include <iostream>

using namespace std;
struct TreeNode
{
    int val;
    TreeNode * left ;
    TreeNode * right;
    TreeNode()
    {
        val = 0;
        left = right = 0;
    }
     TreeNode(int x)
    {
        val = x;
        left = right = 0;
    }
     TreeNode(int x,TreeNode*left,TreeNode*right)
    {
        val = x;
        left =  left ;
        right =right ;
    }
};
TreeNode * newnode(int data)
 {
     TreeNode * temp_node = new TreeNode;
     temp_node->left = 0;
     temp_node->right = 0;
     temp_node->val = data;
     return temp_node;
 }
 class Solution
 {
 public:
    bool fliping(TreeNode * root1 , TreeNode*root2)
    {
        if(root1==0 && root2==0) // tree is empty
            return true;
        if( root1->val ==root2->val)
            return fliping(root1->left , root2->right ) && fliping( root1->right , root2->left);
        return false;
    }
    bool issymmetric(TreeNode *root)
    {
        return fliping(root,root);
    }
 };
int main()
{
  cout <<"                                      First Test Case " <<endl;
    cout << "                                     ----------------";
    cout << endl;
    TreeNode * p1 = newnode(1);
    p1->left = newnode(2);
    p1->right = newnode(3);

    Solution s1;
     cout <<" The data in nodes in the tree by preorder traversal is : 1  2  3 " << endl;

     if (s1.issymmetric(p1)==1){
     cout << " TRUE \n";
        cout << " Tree is Symmetric"<<endl;}
        else
        {
             cout << " FALSE \n";
            cout << " Tree is  not Symmetric "<<endl;
        }

         cout << "------------------------------------------------------------";
    cout << endl;
     cout <<"                                      Second Test Case " <<endl;
    cout << "                                     ----------------";
    cout << endl;
    TreeNode * p2 = newnode(1);
    p2->left = newnode(2);
    p2->right = newnode(2);
    p2->left->left = newnode(3);
    p2->left->right = newnode(4);
    p2->right->left = newnode(4);
    p2->right->right = newnode(3);

    Solution s2;
     cout <<" The data in nodes in the tree by preorder traversal is : 1 2 2 3 4 4 3 " << endl;

     if (s2.issymmetric(p2)==1){
     cout << " TRUE \n";
        cout << " Tree is Symmetric"<<endl;}
        else
        {
             cout << " FALSE \n";
            cout << " Tree is  not Symmetric "<<endl;
        }

         cout << "------------------------------------------------------------";
    cout << endl;
     cout <<"                                      Third Test Case " <<endl;
    cout << "                                     ----------------";
    cout << endl;
    TreeNode * p3 = newnode(1);
    p3->left = newnode(NULL);
    p3->right = newnode(NULL);

    Solution s3;
     cout <<" The data in nodes in the tree by preorder traversal is : 1 NULL NULL " << endl;

     if (s3.issymmetric(p3)==1){
     cout << " TRUE \n";
        cout << " Tree is Symmetric"<<endl;}
        else
        {
             cout << " FALSE \n";
            cout << " Tree is  not Symmetric "<<endl;
        }

         cout << "------------------------------------------------------------";
    cout << endl;
     cout <<"                                      Fourth Test Case " <<endl;
    cout << "                                     ----------------";
    cout << endl;
    TreeNode * p4 = newnode(NULL);

    Solution s4;
     cout <<" The data in nodes in the tree by preorder traversal is : NULL " << endl;

     if (s4.issymmetric(p4)==1){
     cout << " TRUE \n";
        cout << " Tree is Symmetric"<<endl;}
        else
        {
             cout << " FALSE \n";
            cout << " Tree is  not Symmetric "<<endl;
        }

         cout << "------------------------------------------------------------";
    cout << endl;
     cout <<"                                      Fifth Test Case " <<endl;
    cout << "                                     ----------------";
    cout << endl;
    TreeNode * p5 = newnode(1);
    p5->left = newnode(2);
    p5->right = newnode(2);
    p5->left->left = newnode(NULL);
    p5->left->right = newnode(3);
    p5->right->left = newnode(NULL);
    p5->right->right = newnode(3);

    Solution s5;
     cout <<" The data in nodes in the tree by preorder traversal is : 1  2  2 NULL 3 NULL 3" << endl;

     if (s5.issymmetric(p5)==1){
     cout << " TRUE \n";
        cout << " Tree is Symmetric"<<endl;}
        else
        {
             cout << " FALSE \n";
            cout << " Tree is  not Symmetric "<<endl;
        }

         cout << "------------------------------------------------------------";
    cout << endl;

    return 0;
}

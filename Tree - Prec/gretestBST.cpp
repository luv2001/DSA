

int ans = INT_MIN;


int sizeOfBst(Node *root)
{
	if (!root) return 0;
	queue<Node *> q;
	q.push(root);

	int count = 0;

	while (!q.empty())
	{
		auto curl = q.front();
		count++;
		q.pop();
		if (curl -> left) q.push(curl->left);
		if (curl -> right) q.push(curl->right);

	}
	return count;
}

bool helper(Node *root , int low , int high)
{
	if (!root) return true;
	if (root->data >= high || root->data <= low) return false;
	bool left = helper(root->left , low , root->data);
	bool right = helper(root->right , root->data , high);

	return left && right;


}

bool isBST(Node *root)
{
	if (!root) return 0;
	return helper(root , INT_MIN , INT_MAX);
}


void solve(Node *root)
{
	if (!root) return;

	if (isBST(root))
	{
		ans  = max(ans , sizeOfBst(root));
	}

	solve(root->left);
	solve(root->right);

}

int largestBst(Node *root)
{

	solve(root);

	return ans;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	cout << largestBst(root);  // Main Function
}
















#define endl '\n'
#define space ' '
#define rep(i,s,e) for (int i = s; i < e; ++i)
#define rev(i,s,e) for (int i = s; i >= e; --i)

#define MAX_WORDS 2000
#define SIZE 26

/* https://leetcode.com/problems/stream-of-characters/ */

/* Solved using Trie Data Structure, tried solving using bruteforce method but results in TLE */

class Node{
public:
	bool isLast;
	Node* trie[SIZE];

	Node(){
		this->isLast = false;
		rep(i,0,SIZE){
			this->trie[i] = NULL;
		}
	}
};

void insertNode(Node* root, string word){
	Node* temp = root;
	rev(i, word.length() - 1, 0){
		int index = word[i] - 'a';
		if(temp->trie[index] == NULL){
			temp->trie[index] = new Node();
		}
		temp = temp->trie[index];
	}
	temp->isLast = true;
}

bool searchNode(Node* root, string query){
	Node* temp = root;
	rev(i, query.length() - 1, 0){
		
		int index = query[i] - 'a';
		
		if(temp->trie[index] == NULL){
			return false;
		}

		temp = temp->trie[index];

		if (temp->isLast){
			return true;
		}
	}
	return temp->isLast;
}

class StreamChecker {
public:
    Node* root;
    string qry;
    int maxSize = 0;
    StreamChecker(vector<string>& words) {
        root = new Node();
        rep(i,0,words.size()){
			insertNode(root,words[i]);
            if(words[i].length() > maxSize){
                maxSize = words[i].length();
            }
		}
    }
    
    bool query(char letter) {
        if(qry.length() > maxSize){
            qry.erase(qry.begin());
        }
        qry.push_back(letter);
        return searchNode(root,qry);
    }
};

/**
 * Your StreamChecker object will be instantiated and called as such:
 * StreamChecker* obj = new StreamChecker(words);
 * bool param_1 = obj->query(letter);
 */
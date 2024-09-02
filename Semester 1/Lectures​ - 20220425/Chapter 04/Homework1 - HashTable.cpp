
string MyBox[20];

void Insertion(string s){
	double LargeNumber = GenerateStringToNumber(s);
	int BoxNumber = LargeNumber % 20;
	if NoCollison --> MyBox[ BoxNumber ] = s;
	else {
		- Find Next Index (IndexOfEmptyBox) of Empty Box //When the Tombstone cell was found, we still continue to search, until we find the free cell
		- MyBox[ IndexOfEmptyBox ] = s;
	}
};

bool Search(string s){

	double LargeNumber = GenerateStringToNumber(s);
	int BoxNumber = LargeNumber % 20;
	if the Box of index BoxNumber is Empty --> No s in the box;
	else check next box till Empty Box or find item s //When the Tombstone cell was found, we still continue to search, until we find the free cell	
};

bool Delete (string s){

	double LargeNumber = GenerateStringToNumber(s);
	int BoxNumber = LargeNumber % 20;	
	from the index BoxNumber, we try to find the cell with value s (by Linear Probing), when we find to the cell (with value s), we will change the value of the cell to Tombstone;
};
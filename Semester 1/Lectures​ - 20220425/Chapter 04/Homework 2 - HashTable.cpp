
string MyBox[20];//Hash Table, "123239009"

void Insertion(string s){
	double LargeNumber = GenerateStringToNumber(s);//if s is digit number, just return s
	int BoxNumber = LargeNumber % 20;//Output 0..19
	
	if NoCollison --> MyBox[ BoxNumber ] = s;
	else {
		
		
Find free cell by Quadratic Probing - if the cell of this BoxNumber have already occuppied, thus check sequentially the box of BoxNumber+1, BoxNumber+4, BoxNumber+9,...until we found the free cell (IndexOfEmptyBox).
MyBox[ IndexOfEmptyBox ] = s;

		//- Find Next Index (IndexOfEmptyBox) of Empty Box
		//- MyBox[ IndexOfEmptyBox ] = s;
	}
};

bool Search(string s){

	double LargeNumber = GenerateStringToNumber(s);
	int BoxNumber = LargeNumber % 20;
	if the Box of index BoxNumber is Empty --> No s in the box;
	
else 
Check the next box with BoxNumber+1, BoxNumber+4, BoxNumber+9,...till Empty Box or find item s
//check next box till Empty Box or find item s	
};
public class LinearProbing {
    static String[] hashTable = new String[200];
    

    static int findIndex(String word) {
        String new_word = word.toUpperCase(); // convert to upper case
        double hugeNumber = 0d;
        for (int i = 0; i < new_word.length(); i++) { // scan through all characters in the word
            // calculate multiply by power, ensuring the result is positive
            hugeNumber += ((int) new_word.charAt(i) - 64) * Math.pow(27, new_word.length() - i - 1);
        }
        int index = (int)Math.abs(hugeNumber) % 200; // Ensure the index is within bounds
        return index;
    }

    static void insert(String word) {
        int index = findIndex(word);
        int start = index;
        while (hashTable[index] != null) {
            index = (index + 1) % 200; // LinearProbing
            if (index == start) {
                System.out.println("Hash table is full. Cannot insert " + word);
                return;
            }
        }
        hashTable[index] = word;
    }
    
    static void Search(String word) {
        int index = findIndex(word);
        int start = index;
        while (hashTable[index] != null && !hashTable[index].equalsIgnoreCase(word)) {
            index = (index + 1) % 200; // Linear probing
            if (index == start) {
                System.out.println("Not Found");
                return;
            }
        }
        if (hashTable[index] != null && hashTable[index].equalsIgnoreCase(word)) {
            System.out.println("Found " + hashTable[index] + " at " + index);
        } else {
            System.out.println("Not Found");
        }
    }

    public static void main(String[] arg) {
        hashTable[125] = "hello";
        String[] store = { "Apple", "Orange", "banana", "Peach", "Passion" };
        for (String fruit : store) {
            insert(fruit);
        }
        Search("Orange");
        Search("apple"); // Testing case insensitivity
        Search("Banana"); // Testing a non-existing element
    }
}

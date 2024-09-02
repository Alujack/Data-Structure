public class homework1 {
    static String[] hashTable = new String[200];

    static int findIndex(String word) {
        String new_word = word.toUpperCase(); // convert to upper case
        double hugeNumber = 0d;
        for (int i = 0; i < new_word.length(); i++) { // scan through all characters in the word
            // calculate multiply by power, ensuring the result is positive
            hugeNumber += ((int) new_word.charAt(i) - 64) * Math.pow(27, new_word.length() - i - 1);
        }
        int index = (int) Math.abs(hugeNumber) % 200; // Ensure the index is within bounds
        return index;
    }

    static void insert(String word) {
        int index = findIndex(word);
        int i = 0;
        while (hashTable[index] != null) {
            i++;
            index = (index + i * i) % 200; // Quadratic probing
            if (i == 200) {
                System.out.println("Hash table is full. Cannot insert " + word);
                return;
            }
        }
        hashTable[index] = word;
    }

    static void search(String word) {
        int index = findIndex(word);
        int i = 0;
        while (hashTable[index] != null && !hashTable[index].equalsIgnoreCase(word)) {
            i++;
            index = (index + i * i) % 200; // Quadratic probing
            if (i == 200) {
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
        search("Orange");
        search("apple"); // Testing case insensitivity
        search("Banana"); // Testing a non-existing element
    }
}

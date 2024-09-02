public class homework2 {
    static String[] hashTable = new String[200];
    static final int CONSTANT = 23;

    static double findHugeNumber(String word) {
        String new_word = word.toUpperCase(); // convert to upper case
        double hugeNumber = 0d;
        for (int i = 0; i < new_word.length(); i++) { // scan through all characters in the word
            // calculate multiply by power, ensuring the result is positive
            hugeNumber += ((int) new_word.charAt(i) - 64) * Math.pow(27, new_word.length() - i - 1);
        }
        return hugeNumber;
    }

    static void insert(String word) {
        int index = (int) Math.abs(findHugeNumber(word)) % 200;
        int stepSize = CONSTANT - (int) Math.abs(findHugeNumber(word)) % CONSTANT;
        int i = 0;
        while (hashTable[index] != null) {
            index = (index + stepSize) % 200; // Double hashing
            i++;
            if (i == 200) {
                System.out.println("Hash table is full. Cannot insert " + word);
                return;
            }
        }
        hashTable[index] = word;
    }

    static void search(String word) {
        int index = (int) Math.abs(findHugeNumber(word)) % 200;
        int stepSize = CONSTANT - (int) Math.abs(findHugeNumber(word)) % CONSTANT;
        int i = 0;
        while (hashTable[index] != null && !hashTable[index].equalsIgnoreCase(word)) {
            index = (index + stepSize) % 200; // Double hashing
            i++;
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

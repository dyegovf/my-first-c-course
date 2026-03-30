#include <stdio.h>
#include "src/class1_basicConcepts/class1.h"
#include "src/class2_aboutArrays/class2.h"
#include "src/class3_howCreateFunctions/class3.h"
#include "src/class4_Structs/createStudents/class4_createStudent.h"
#include "src/class4_Structs/createBooks/class4_createBook.h"


int main() {

    struct createBook books[5] = {
        {"The Great Gatsby", "F. Scott Fitzgerald", 1925, "Fiction"},
        {"To Kill a Mockingbird", "Harper Lee", 1960, "Fiction"},
        {"1984", "George Orwell", 1949, "Dystopian"},
        {"Pride and Prejudice", "Jane Austen", 1813, "Romance"},
        {"The Catcher in the Rye", "J.D. Salinger", 1951, "Fiction"}
    };

    filterBook(books, 5, 1950);

    return 0;
}
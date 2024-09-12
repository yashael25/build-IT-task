#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


   #include <stdio.h>
#include <string.h>

int main() {
    char s1[101], s2[101];  // Menyediakan buffer untuk string hingga 100 karakter + 1 untuk null terminator

    // Membaca dua string dari input
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    // Menghapus newline karakter jika ada
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    // Mengecek panjang string
    if (strlen(s1) != strlen(s2)) {
        printf("BERBEDA\n");
    }
    else if (strcmp(s1, s2) == 0) {
        printf("IDENTIK\n");
    }
    else {
        printf("MIRIP\n");
    }

    return 0;
}
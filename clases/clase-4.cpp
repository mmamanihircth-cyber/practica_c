/* boolean -> bool / true o false / ==, !=, or, and, not */
/* N -> unsifgned / 1u, 2u, 96u / ==, !=, <=, >=, +, -, *, /, % */
/* Z -> int / 1, -2, 1024 / ==, !=, <=, >=, +, -, *, /  */
/* R -> double / 1,5 ; 1,0 / ==, !=, <=, >=, +, -, *, / */
/* E -> char / '0' , '1', '+', 'A', 'ñ' / ==, !=, <=, >=, +, -, *, /, %  */
/* E* -> string / ==, !=, <=, >=, +,, lenght */

#include <cassert>

    int main (){
        assert( 'A' == 'A');
        assert('A' != 'B');
        assert( 'A' + 32 == 'a');
        assert( 'A' == 65);
        assert( 'A' + 1 == 'B');
    }
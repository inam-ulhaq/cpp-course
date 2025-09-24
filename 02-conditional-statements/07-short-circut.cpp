// Title: Short Circuit
// Author: Inam Ul Haq
// Description:
//		In programming, short-circuit evaluation means that
//		 when evaluating a logical expression (&& or ||), 
//		 the compiler stops checking further conditions as
//		 soon as the result is already determined.
//		  -This improves performance.
//		  -It also prevents unnecessary or dangerous operations.
//
//	How it works
//		&&(AND)
//			If the first condition is false, the whole expression
//			is false. The second condition is not evaluated(checked)
//			 or skipped.
//		
//		||(OR)
//			If the first condition is true, the whole expression 
//			is true. The second condition is not evaluated(checked).
//
//		Why it’s called “short circuit”
//			-Think of it just like an electrical short circuit: the
//			current takes the quickest path, bypassing the rest of
//			the circuit.
//			-In code, the evaluation “jumps” or “skips” the rest of
//			the conditions as soon as it already knows the result.
//		Example
//			if (a != 0 && (10 / a) > 1) { ... }
//			If a is 0, the first condition is false, so C++ never
//			checks (10 / a) — it “short-circuits” to false and prevents
//			division by zero.
//
//	

// Title: Short Circuit
// Author: Inam Ul Haq
// Description:
//      In programming, short-circuit evaluation means that
//      when evaluating a logical expression (&& or ||), 
//      the compiler stops checking further conditions as
//      soon as the result is already determined.
//       -This improves performance.
//       -It also prevents unnecessary or dangerous operations.
//
//  How it works
//      && (AND)
//          If the first condition is false, the whole expression
//          is false. The second condition is not evaluated (skipped).
//
//      || (OR)
//          If the first condition is true, the whole expression 
//          is true. The second condition is not evaluated.
//
//      Why it’s called “short circuit”
//          -Think of it just like an electrical short circuit: the
//          current takes the quickest path, bypassing the rest of
//          the circuit.
//          -In code, the evaluation “jumps” or “skips” the rest of
//          the conditions as soon as it already knows the result.
//
//  Example
//      if (a != 0 && (10 / a) > 1) { ... }
//      If a is 0, the first condition is false, so C++ never
//      checks (10 / a) — it “short-circuits” to false and prevents
//      division by zero.
//

#include <iostream>
using namespace std;

bool testAndPrint(const string &msg, bool value) {
    cout << msg << " evaluated." << endl;
    return value;
}

int main() {
    int a = 0;

    cout << "Example 1: Using && (AND)\n";
    if ( (a != 0) && (10 / a > 1) ) {
        cout << "Condition true\n";
    } else {
        cout << "Condition false (no division by zero occurred)\n";
    }

    cout << "\nExample 2: Demonstrating evaluation order\n";
    // Using helper function to see which parts run
    if ( testAndPrint("First condition (false)", false) &&
         testAndPrint("Second condition (should NOT run)", true) ) {
        cout << "Both true\n";
    } else {
        cout << "Short-circuited at first false condition.\n";
    }

    cout << "\nExample 3: Using || (OR)\n";
    if ( testAndPrint("First condition (true)", true) ||
         testAndPrint("Second condition (should NOT run)", false) ) {
        cout << "Short-circuited at first true condition.\n";
    }

    return 0;
}

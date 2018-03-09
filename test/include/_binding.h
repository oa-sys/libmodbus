/* _binding.h
 * This file is generated. Do not modify its contents.
 */

#ifndef TEST_BINDING_H
#define TEST_BINDING_H

/* -- Type casting -- */
#define test_MySuite(o) ((test_MySuite)corto_assert_type((corto_type)test_MySuite_o, o))

/* -- Non-expanding typedefs -- */
typedef test_MySuite _type_test_MySuite;

/* -- Argument type casting -- */
#ifndef TEST_IMPL
#define test_MySuite_testSomething(_this) _test_MySuite_testSomething(test_MySuite(_this))
#else
/* Can't use argument type casting macro's within project, as they would
 * substitute headers in implementation files. */
#define test_MySuite_testSomething _test_MySuite_testSomething
/* Macro for doing argument type casting within project. */
#define safe_test_MySuite_testSomething(_this) _test_MySuite_testSomething(test_MySuite(_this))
#endif

/* -- Overridable methods -- */

/* -- Short identifier translation -- */

/* -- Short object variable translation -- */

#endif


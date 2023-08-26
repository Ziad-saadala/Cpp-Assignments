/*
  name        [ Valid | Good Practice ]
  NAME        [ Valid | Bad Practice ]
  1name       [ Not Valid ] => Variable Can't Start with num
  __name      [ Valid | Bad Practice] => Correct
  name@name   [ Not Valid ] => Variable Can't name with special charcter
  name10name  [ Valid | Good Practice] => Correct
  name!name   [ Not Valid ] => Variable Can't name with special charcter
  first_NAME  [ Valid | Good Practice] => Correct
  first_name  [ Valid | Good Practice] => Correct
  firstName   [ Valid | Good Practice] => Correct
  first name  [ Not Valid] => Variable Can't Deal with white spaces
  fn          [ Valid | Bad Practice] => Correct - don't Meaning
  public      [ Not Valid ] => It's Keyword for languge 
  Public      [ Valid | Good Practice] => Correct "P- is capital not a keyword"
*/

#include <iostream>
using namespace std;
main()
{
    int public = 50;
    cout << public;
    return 0 ;
}
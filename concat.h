#ifndef IGL_COLON_H
#define IGL_COLON_H
#include <Eigen/Dense>
namespace igl
{
  // Concatenates dense matrices
  // Templates:
  //   T  should be a eigen matrix primitive type like int or double
  // Inputs:
  //   A first matrix
  //   B second matrix
  //   horiz if true, matrices are concatenated horizontally
  // Output:
  //   O if horiz = false return [A;B] else [A,B]
  template <typename T>
  inline void concat(
                     const T A, 
                     const T B,
                     const bool horiz,                 
                     T& O);
  
  template <typename T>
  inline T concat(
                  const T A, 
                  const T B,
                  bool horiz = false
                  );

}

// Implementation
#include <cstdio>

template <typename T>
inline void concat(
                   const T A, 
                   const T B,
                   const bool horiz,                 
                   T& O)
{
  if (horiz)
  {
    // O = [A,B]
    assert(A.rows() == B.rows());
    O = MatrixXd(A.rows(),A.cols()+B.cols());
    O << A,B;
  }
  else
  {
    // O = [A;B]
    assert(A.cols() == B.cols());
    O = MatrixXd(A.rows()+B.rows(),A.cols());
    O << A,B;
  }
}

template <typename T>
inline T concat(
                const T A, 
                const T B,
                bool horiz = false
                )
{
  O = T(1,1);
  concat(A,B,horiz,O);
  return O;
}

#endif


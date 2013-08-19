#ifndef LDACC_GIBBS_SAMPLING_H_
#define LDACC_GIBBS_SAMPLING_H_

#include <vector>
#include <string>

////////////////////////////////////////////////////////////////////////////////////
//
//  Function:       InitSampling
//                  Do some initialization before gibbs sampling.
//  Parameters:     num_of_docs: total number of documents M
//                  num_of_topics: total number of topics K
//                  word_matrix: word vector reference stores the read data. {w}
//                               It is a vector whose element is a vector of string.
//  Return Value:   void
//
//  Author:         BurnedRobot
//  Email:          robotflying777@gmail.com
//  Created Time:   2013-08-19
//
///////////////////////////////////////////////////////////////////////////////////
void InitSampling(const int num_of_docs, 
                  const int num_of_topics,
                  const std::vector<std::vector<std::string> >& word_matrix);

void GibbsSampling();
#endif

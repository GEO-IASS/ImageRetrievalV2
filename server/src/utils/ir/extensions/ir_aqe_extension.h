//
//  ir_aqe_extension.h
//  server
//
//  Created by Bao Truong on 7/24/17.
//
//

#ifndef ir_aqe_extension_h
#define ir_aqe_extension_h

#include "query_expansion_params.h"

#include "../ir_instance.h"


namespace ir {

class IrAverageQueryExpansion : public IrInstance {
 protected:
  QueryExpansionParams qeParams_;

  af::array enrichQuery(const std::vector<size_t> &indices);

  std::vector<IrResult> retrieveImpl(
    const cv::Mat& image,
    int topK) override;
};

}

#endif /* ir_aqe_extension_h */

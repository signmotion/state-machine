#pragma once

#include <iostream>

// макс. кол-во состояний для конечного автомата
#define FUSION_MAX_VECTOR_SIZE 10


// back-end
#include <boost/msm/back/state_machine.hpp>
//front-end
#include <boost/msm/front/state_machine_def.hpp>


namespace msm = boost::msm;
namespace mpl = boost::mpl;

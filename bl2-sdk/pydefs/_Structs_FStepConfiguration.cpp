#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FStepConfiguration()
{
    class_< FStepConfiguration >("FStepConfiguration", no_init)
        .def_readwrite("FirstAttemptDelay", &FStepConfiguration::FirstAttemptDelay)
        .def_readwrite("BaseRetrySeconds", &FStepConfiguration::BaseRetrySeconds)
        .def_readwrite("RetryMultiplier", &FStepConfiguration::RetryMultiplier)
        .def_readwrite("MaxRetryAttempts", &FStepConfiguration::MaxRetryAttempts)
        .def_readwrite("RetryJitter", &FStepConfiguration::RetryJitter)
  ;
}
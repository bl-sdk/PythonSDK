#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorConsumerHandle()
{
    py::class_< FBehaviorConsumerHandle >("FBehaviorConsumerHandle")
        .def_readwrite("PID", &FBehaviorConsumerHandle::PID)
  ;
}
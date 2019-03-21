#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIBehaviorConsumer()
{
    py::class_< UIBehaviorConsumer,  UInterface   >("UIBehaviorConsumer")
        .def("StaticClass", &UIBehaviorConsumer::StaticClass, py::return_value_policy::reference)
        .def("GetBehaviorConsumerHandle", &UIBehaviorConsumer::GetBehaviorConsumerHandle)
        .staticmethod("StaticClass")
  ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowPropObject()
{
    py::class_< AWillowPropObject,  AWillowInteractiveObject   >("AWillowPropObject")
        .def("StaticClass", &AWillowPropObject::StaticClass, py::return_value_policy::reference)
        .def("PostBeginPlay", &AWillowPropObject::PostBeginPlay)
        .staticmethod("StaticClass")
  ;
}
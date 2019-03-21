#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimObject()
{
    py::class_< UAnimObject,  UObject   >("UAnimObject")
        .def_readwrite("SkelComponent", &UAnimObject::SkelComponent)
        .def("StaticClass", &UAnimObject::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
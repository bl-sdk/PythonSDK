#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUBMGameOverGFxObject()
{
    py::class_< UUBMGameOverGFxObject,  UGFxObject   >("UUBMGameOverGFxObject")
        .def("StaticClass", &UUBMGameOverGFxObject::StaticClass, py::return_value_policy::reference)
        .def("SetPlayerInfo", &UUBMGameOverGFxObject::SetPlayerInfo)
        .staticmethod("StaticClass")
  ;
}
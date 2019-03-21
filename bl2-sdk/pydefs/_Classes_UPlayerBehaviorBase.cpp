#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerBehaviorBase()
{
    py::class_< UPlayerBehaviorBase,  UBehaviorBase   >("UPlayerBehaviorBase")
        .def("StaticClass", &UPlayerBehaviorBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
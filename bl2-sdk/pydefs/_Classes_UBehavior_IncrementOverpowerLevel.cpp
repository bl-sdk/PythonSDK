#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_IncrementOverpowerLevel()
{
    py::class_< UBehavior_IncrementOverpowerLevel,  UBehaviorBase   >("UBehavior_IncrementOverpowerLevel")
        .def_readwrite("NumLevelsToAward", &UBehavior_IncrementOverpowerLevel::NumLevelsToAward)
        .def("StaticClass", &UBehavior_IncrementOverpowerLevel::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_IncrementOverpowerLevel::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
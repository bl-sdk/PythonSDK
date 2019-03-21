#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_IncrementOverpowerLevel(py::object m)
{
    py::class_< UBehavior_IncrementOverpowerLevel,  UBehaviorBase   >(m, "UBehavior_IncrementOverpowerLevel")
        .def_readwrite("NumLevelsToAward", &UBehavior_IncrementOverpowerLevel::NumLevelsToAward)
        .def("StaticClass", &UBehavior_IncrementOverpowerLevel::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_IncrementOverpowerLevel::ApplyBehaviorToContext)
          ;
}
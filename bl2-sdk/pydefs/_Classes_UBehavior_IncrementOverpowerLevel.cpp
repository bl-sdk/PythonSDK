#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_IncrementOverpowerLevel(py::module &m)
{
    py::class_< UBehavior_IncrementOverpowerLevel,  UBehaviorBase   >(m, "UBehavior_IncrementOverpowerLevel")
		.def_static("StaticClass", &UBehavior_IncrementOverpowerLevel::StaticClass, py::return_value_policy::reference)
        .def_readwrite("NumLevelsToAward", &UBehavior_IncrementOverpowerLevel::NumLevelsToAward)
        .def("ApplyBehaviorToContext", &UBehavior_IncrementOverpowerLevel::ApplyBehaviorToContext)
          ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeScale(py::module &m)
{
    py::class_< UBehavior_ChangeScale,  UBehaviorBase   >(m, "UBehavior_ChangeScale")
		.def_static("StaticClass", &UBehavior_ChangeScale::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Scale", &UBehavior_ChangeScale::Scale)
        .def("ApplyBehaviorToContext", &UBehavior_ChangeScale::ApplyBehaviorToContext)
          ;
}
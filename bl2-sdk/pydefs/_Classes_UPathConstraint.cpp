#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPathConstraint(py::module &m)
{
    py::class_< UPathConstraint,  UObject   >(m, "UPathConstraint")
		.def_static("StaticClass", &UPathConstraint::StaticClass, py::return_value_policy::reference)
        .def_readwrite("CacheIdx", &UPathConstraint::CacheIdx)
        .def_readwrite("NextConstraint", &UPathConstraint::NextConstraint)
        .def("eventGetDumpString", &UPathConstraint::eventGetDumpString)
        .def("eventRecycle", &UPathConstraint::eventRecycle)
          ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPathConstraint(py::object m)
{
    py::class_< UPathConstraint,  UObject   >(m, "UPathConstraint")
        .def_readwrite("CacheIdx", &UPathConstraint::CacheIdx)
        .def_readwrite("NextConstraint", &UPathConstraint::NextConstraint)
        .def("StaticClass", &UPathConstraint::StaticClass, py::return_value_policy::reference)
        .def("eventGetDumpString", &UPathConstraint::eventGetDumpString)
        .def("eventRecycle", &UPathConstraint::eventRecycle)
          ;
}
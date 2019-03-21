#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxValue(py::object m)
{
    py::class_< UGFxValue,  UObject   >(m, "UGFxValue")
        .def_readonly("Value", &UGFxValue::Value)
        .def("StaticClass", &UGFxValue::StaticClass, py::return_value_policy::reference)
          ;
}
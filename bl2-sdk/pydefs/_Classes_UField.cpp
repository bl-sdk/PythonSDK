#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UField(py::object m)
{
    py::class_< UField,  UObject   >(m, "UField")
        .def_readwrite("Next", &UField::Next)
        .def("StaticClass", &UField::StaticClass, py::return_value_policy::reference)
          ;
}
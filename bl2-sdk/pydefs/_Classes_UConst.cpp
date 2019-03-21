#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UConst(py::object m)
{
    py::class_< UConst,  UField   >(m, "UConst")
        .def_readonly("UnknownData00", &UConst::UnknownData00)
        .def("StaticClass", &UConst::StaticClass, py::return_value_policy::reference)
          ;
}
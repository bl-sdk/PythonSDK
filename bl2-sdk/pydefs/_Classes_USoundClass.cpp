#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USoundClass(py::module &m)
{
    py::class_< USoundClass,  UObject   >(m, "USoundClass")
        .def_readwrite("Properties", &USoundClass::Properties)
        .def_readwrite("ChildClassNames", &USoundClass::ChildClassNames)
          ;
}
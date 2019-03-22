#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UField(py::module &m)
{
    py::class_< UField,  UObject   >(m, "UField")
        .def_readwrite("Next", &UField::Next)
          ;
}
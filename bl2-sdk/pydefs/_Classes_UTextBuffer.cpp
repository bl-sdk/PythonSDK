#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTextBuffer(py::object m)
{
    py::class_< UTextBuffer,  UObject   >(m, "UTextBuffer")
        .def_readonly("UnknownData00", &UTextBuffer::UnknownData00)
        .def("StaticClass", &UTextBuffer::StaticClass, py::return_value_policy::reference)
          ;
}
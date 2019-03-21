#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCriticalTextMessageArray(py::object m)
{
    py::class_< FCriticalTextMessageArray >(m, "FCriticalTextMessageArray")
        .def_readwrite("MessageArray", &FCriticalTextMessageArray::MessageArray)
  ;
}
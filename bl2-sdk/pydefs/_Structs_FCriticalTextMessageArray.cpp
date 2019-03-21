#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCriticalTextMessageArray()
{
    py::class_< FCriticalTextMessageArray >("FCriticalTextMessageArray")
        .def_readwrite("MessageArray", &FCriticalTextMessageArray::MessageArray)
  ;
}
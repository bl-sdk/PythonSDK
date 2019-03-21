#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTextBufferFactory()
{
    py::class_< UTextBufferFactory,  UFactory   >("UTextBufferFactory")
        .def("StaticClass", &UTextBufferFactory::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
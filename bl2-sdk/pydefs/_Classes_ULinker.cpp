#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULinker()
{
    py::class_< ULinker,  UObject   >("ULinker")
        .def_readonly("UnknownData00", &ULinker::UnknownData00)
        .def("StaticClass", &ULinker::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
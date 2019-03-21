#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULinker(py::object m)
{
    py::class_< ULinker,  UObject   >(m, "ULinker")
        .def_readonly("UnknownData00", &ULinker::UnknownData00)
        .def("StaticClass", &ULinker::StaticClass, py::return_value_policy::reference)
          ;
}
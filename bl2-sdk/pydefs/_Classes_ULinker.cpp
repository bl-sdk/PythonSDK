#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULinker(py::module &m)
{
    py::class_< ULinker,  UObject   >(m, "ULinker")
        .def("StaticClass", &ULinker::StaticClass, py::return_value_policy::reference)
          ;
}
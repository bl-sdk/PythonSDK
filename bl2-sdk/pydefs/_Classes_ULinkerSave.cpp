#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULinkerSave(py::object m)
{
    py::class_< ULinkerSave,  UObject   >(m, "ULinkerSave")
        .def_readonly("UnknownData00", &ULinkerSave::UnknownData00)
        .def("StaticClass", &ULinkerSave::StaticClass, py::return_value_policy::reference)
          ;
}
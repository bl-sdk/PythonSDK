#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBookMark(py::object m)
{
    py::class_< UBookMark,  UObject   >(m, "UBookMark")
        .def_readwrite("Location", &UBookMark::Location)
        .def_readwrite("Rotation", &UBookMark::Rotation)
        .def_readwrite("HiddenLevels", &UBookMark::HiddenLevels)
        .def("StaticClass", &UBookMark::StaticClass, py::return_value_policy::reference)
          ;
}
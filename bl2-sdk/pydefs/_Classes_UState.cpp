#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UState(py::module &m)
{
    py::class_< UState,  UObject   >(m, "UState")
        .def_readwrite("SuperField", &UStruct::SuperField)
        .def_readwrite("Children", &UStruct::Children)
        .def_readwrite("PropertySize", &UStruct::PropertySize)
        .def_readwrite("Next", &UField::Next)
        .def("StaticClass", &UState::StaticClass, py::return_value_policy::reference)
          ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UStruct(py::object m)
{
    py::class_< UStruct,  UObject   >(m, "UStruct")
        .def_readwrite("SuperField", &UStruct::SuperField)
        .def_readwrite("Children", &UStruct::Children)
        .def_readwrite("PropertySize", &UStruct::PropertySize)
        .def_readwrite("Next", &UField::Next)
        .def("StaticClass", &UStruct::StaticClass, py::return_value_policy::reference)
          ;
}
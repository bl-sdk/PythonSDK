#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UStruct()
{
    py::class_< UStruct,  UObject   >("UStruct")
        .def_readonly("UnknownData00", &UStruct::UnknownData00)
        .def_readwrite("SuperField", &UStruct::SuperField)
        .def_readwrite("Children", &UStruct::Children)
        .def_readwrite("PropertySize", &UStruct::PropertySize)
        .def_readonly("UnknownData01", &UStruct::UnknownData01)
        .def_readwrite("Next", &UField::Next)
        .def("StaticClass", &UStruct::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
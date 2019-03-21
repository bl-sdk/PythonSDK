#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UClass()
{
    py::class_< UClass,  UObject   >("UClass")
        .def_readonly("UnknownData00", &UClass::UnknownData00)
        .def_readwrite("SuperField", &UStruct::SuperField)
        .def_readwrite("Children", &UStruct::Children)
        .def_readwrite("PropertySize", &UStruct::PropertySize)
        .def_readonly("UnknownData01", &UStruct::UnknownData01)
        .def_readwrite("Next", &UField::Next)
        .def("StaticClass", &UClass::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
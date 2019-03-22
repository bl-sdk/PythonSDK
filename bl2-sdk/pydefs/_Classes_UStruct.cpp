#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UStruct(py::module &m)
{
    py::class_< UStruct,  UObject   >(m, "UStruct")
        .def_readwrite("SuperField", &UStruct::SuperField)
        .def_readwrite("Children", &UStruct::Children)
        .def_readwrite("PropertySize", &UStruct::PropertySize)
        .def_readwrite("Next", &UField::Next)
          ;
}
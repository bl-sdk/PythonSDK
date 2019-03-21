#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFaceFXAnimSet()
{
    py::class_< UFaceFXAnimSet,  UObject   >("UFaceFXAnimSet")
        .def_readwrite("InternalFaceFXAnimSet", &UFaceFXAnimSet::InternalFaceFXAnimSet)
        .def_readwrite("RawFaceFXAnimSetBytes", &UFaceFXAnimSet::RawFaceFXAnimSetBytes)
        .def_readwrite("RawFaceFXMiniSessionBytes", &UFaceFXAnimSet::RawFaceFXMiniSessionBytes)
        .def_readwrite("NumLoadErrors", &UFaceFXAnimSet::NumLoadErrors)
        .def("StaticClass", &UFaceFXAnimSet::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
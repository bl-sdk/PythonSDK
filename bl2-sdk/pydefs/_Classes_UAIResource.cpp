#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAIResource()
{
    py::class_< UAIResource,  UGBXDefinition   >("UAIResource")
        .def_readwrite("ResourceRestrictions", &UAIResource::ResourceRestrictions)
        .def_readwrite("MaxUsers", &UAIResource::MaxUsers)
        .def_readwrite("MinUsers", &UAIResource::MinUsers)
        .def("StaticClass", &UAIResource::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
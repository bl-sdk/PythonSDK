#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterface_NavMeshPathObject()
{
    py::class_< UInterface_NavMeshPathObject,  UInterface   >("UInterface_NavMeshPathObject")
        .def("StaticClass", &UInterface_NavMeshPathObject::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
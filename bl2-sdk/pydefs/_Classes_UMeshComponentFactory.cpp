#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMeshComponentFactory()
{
    py::class_< UMeshComponentFactory,  UPrimitiveComponentFactory   >("UMeshComponentFactory")
        .def_readwrite("Materials", &UMeshComponentFactory::Materials)
        .def("StaticClass", &UMeshComponentFactory::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
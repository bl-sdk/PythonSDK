#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UStaticMeshComponentFactory()
{
    py::class_< UStaticMeshComponentFactory,  UPrimitiveComponentFactory   >("UStaticMeshComponentFactory")
        .def_readwrite("StaticMesh", &UStaticMeshComponentFactory::StaticMesh)
        .def_readwrite("Materials", &UMeshComponentFactory::Materials)
        .def("StaticClass", &UStaticMeshComponentFactory::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryInteractiveFoliage()
{
    py::class_< UActorFactoryInteractiveFoliage,  UActorFactory   >("UActorFactoryInteractiveFoliage")
        .def_readwrite("StaticMesh", &UActorFactoryStaticMesh::StaticMesh)
        .def_readwrite("DrawScale3D", &UActorFactoryStaticMesh::DrawScale3D)
        .def("StaticClass", &UActorFactoryInteractiveFoliage::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
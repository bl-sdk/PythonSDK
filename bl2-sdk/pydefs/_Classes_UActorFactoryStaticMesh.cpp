#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryStaticMesh(py::module &m)
{
    py::class_< UActorFactoryStaticMesh,  UActorFactory   >(m, "UActorFactoryStaticMesh")
        .def_readwrite("StaticMesh", &UActorFactoryStaticMesh::StaticMesh)
        .def_readwrite("DrawScale3D", &UActorFactoryStaticMesh::DrawScale3D)
          ;
}
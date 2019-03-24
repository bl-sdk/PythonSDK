#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryInteractiveFoliage(py::module &m)
{
    py::class_< UActorFactoryInteractiveFoliage,  UActorFactory   >(m, "UActorFactoryInteractiveFoliage")
		.def_static("StaticClass", &UActorFactoryInteractiveFoliage::StaticClass, py::return_value_policy::reference)
        .def_readwrite("StaticMesh", &UActorFactoryStaticMesh::StaticMesh)
        .def_readwrite("DrawScale3D", &UActorFactoryStaticMesh::DrawScale3D)
          ;
}
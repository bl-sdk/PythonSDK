#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryMover(py::module &m)
{
    py::class_< UActorFactoryMover,  UActorFactory   >(m, "UActorFactoryMover")
		.def_static("StaticClass", &UActorFactoryMover::StaticClass, py::return_value_policy::reference)
        .def_readwrite("StaticMesh", &UActorFactoryDynamicSM::StaticMesh)
        .def_readwrite("DrawScale3D", &UActorFactoryDynamicSM::DrawScale3D)
        .def_readwrite("CollisionType", &UActorFactoryDynamicSM::CollisionType)
          ;
}
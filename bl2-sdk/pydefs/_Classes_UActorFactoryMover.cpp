#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryMover(py::object m)
{
    py::class_< UActorFactoryMover,  UActorFactory   >(m, "UActorFactoryMover")
        .def_readwrite("StaticMesh", &UActorFactoryDynamicSM::StaticMesh)
        .def_readwrite("DrawScale3D", &UActorFactoryDynamicSM::DrawScale3D)
        .def_readwrite("CollisionType", &UActorFactoryDynamicSM::CollisionType)
        .def("StaticClass", &UActorFactoryMover::StaticClass, py::return_value_policy::reference)
          ;
}
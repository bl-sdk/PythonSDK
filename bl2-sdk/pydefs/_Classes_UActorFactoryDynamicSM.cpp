#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryDynamicSM(py::module &m)
{
    py::class_< UActorFactoryDynamicSM,  UActorFactory   >(m, "UActorFactoryDynamicSM")
        .def_readwrite("StaticMesh", &UActorFactoryDynamicSM::StaticMesh)
        .def_readwrite("DrawScale3D", &UActorFactoryDynamicSM::DrawScale3D)
        .def_readwrite("CollisionType", &UActorFactoryDynamicSM::CollisionType)
        .def("StaticClass", &UActorFactoryDynamicSM::StaticClass, py::return_value_policy::reference)
          ;
}
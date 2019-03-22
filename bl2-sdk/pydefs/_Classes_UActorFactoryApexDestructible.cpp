#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryApexDestructible(py::module &m)
{
    py::class_< UActorFactoryApexDestructible,  UActorFactory   >(m, "UActorFactoryApexDestructible")
        .def_readwrite("RBChannel", &UActorFactoryApexDestructible::RBChannel)
        .def_readwrite("CollideWithChannels", &UActorFactoryApexDestructible::CollideWithChannels)
        .def_readwrite("DestructibleAsset", &UActorFactoryApexDestructible::DestructibleAsset)
        .def("StaticClass", &UActorFactoryApexDestructible::StaticClass, py::return_value_policy::reference)
          ;
}
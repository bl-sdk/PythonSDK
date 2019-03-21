#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowServerSideProjectile()
{
    py::class_< AWillowServerSideProjectile,  AWillowProjectile   >("AWillowServerSideProjectile")
        .def_readwrite("ServerLocation", &AWillowServerSideProjectile::ServerLocation)
        .def_readwrite("ServerVelocity", &AWillowServerSideProjectile::ServerVelocity)
        .def_readwrite("ServerAcceleration", &AWillowServerSideProjectile::ServerAcceleration)
        .def("StaticClass", &AWillowServerSideProjectile::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
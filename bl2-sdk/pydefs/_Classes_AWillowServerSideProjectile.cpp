#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowServerSideProjectile(py::module &m)
{
    py::class_< AWillowServerSideProjectile,  AWillowProjectile   >(m, "AWillowServerSideProjectile")
		.def_static("StaticClass", &AWillowServerSideProjectile::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ServerLocation", &AWillowServerSideProjectile::ServerLocation)
        .def_readwrite("ServerVelocity", &AWillowServerSideProjectile::ServerVelocity)
        .def_readwrite("ServerAcceleration", &AWillowServerSideProjectile::ServerAcceleration)
          ;
}
#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowServerSideProjectile()
{
    class_< AWillowServerSideProjectile, bases< AWillowProjectile >  , boost::noncopyable>("AWillowServerSideProjectile", no_init)
        .def_readwrite("ServerLocation", &AWillowServerSideProjectile::ServerLocation)
        .def_readwrite("ServerVelocity", &AWillowServerSideProjectile::ServerVelocity)
        .def_readwrite("ServerAcceleration", &AWillowServerSideProjectile::ServerAcceleration)
        .def("StaticClass", &AWillowServerSideProjectile::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
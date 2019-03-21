#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFaceFXAnimSet()
{
    class_< UFaceFXAnimSet, bases< UObject >  , boost::noncopyable>("UFaceFXAnimSet", no_init)
        .def_readwrite("InternalFaceFXAnimSet", &UFaceFXAnimSet::InternalFaceFXAnimSet)
        .def_readwrite("RawFaceFXAnimSetBytes", &UFaceFXAnimSet::RawFaceFXAnimSetBytes)
        .def_readwrite("RawFaceFXMiniSessionBytes", &UFaceFXAnimSet::RawFaceFXMiniSessionBytes)
        .def_readwrite("NumLoadErrors", &UFaceFXAnimSet::NumLoadErrors)
        .def("StaticClass", &UFaceFXAnimSet::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
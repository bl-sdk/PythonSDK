#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNavigationMeshBase()
{
    class_< UNavigationMeshBase, bases< UObject >  , boost::noncopyable>("UNavigationMeshBase", no_init)
        .def_readonly("UnknownData00", &UNavigationMeshBase::UnknownData00)
        .def("StaticClass", &UNavigationMeshBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UKMeshProps()
{
    class_< UKMeshProps, bases< UObject >  , boost::noncopyable>("UKMeshProps", no_init)
        .def_readwrite("COMNudge", &UKMeshProps::COMNudge)
        .def_readwrite("AggGeom", &UKMeshProps::AggGeom)
        .def("StaticClass", &UKMeshProps::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGBXNavMeshPathModifier()
{
    class_< UGBXNavMeshPathModifier, bases< UObject >  , boost::noncopyable>("UGBXNavMeshPathModifier", no_init)
        .def("StaticClass", &UGBXNavMeshPathModifier::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
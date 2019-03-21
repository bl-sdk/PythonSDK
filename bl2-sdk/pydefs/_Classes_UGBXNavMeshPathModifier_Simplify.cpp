#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGBXNavMeshPathModifier_Simplify()
{
    class_< UGBXNavMeshPathModifier_Simplify, bases< UGBXNavMeshPathModifier >  , boost::noncopyable>("UGBXNavMeshPathModifier_Simplify", no_init)
        .def_readwrite("CornerCutInterval", &UGBXNavMeshPathModifier_Simplify::CornerCutInterval)
        .def("StaticClass", &UGBXNavMeshPathModifier_Simplify::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
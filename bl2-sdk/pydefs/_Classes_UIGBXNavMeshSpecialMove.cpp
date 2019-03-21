#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIGBXNavMeshSpecialMove()
{
    class_< UIGBXNavMeshSpecialMove, bases< UInterface >  , boost::noncopyable>("UIGBXNavMeshSpecialMove", no_init)
        .def("StaticClass", &UIGBXNavMeshSpecialMove::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
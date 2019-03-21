#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIGBXNavMeshSeed()
{
    class_< UIGBXNavMeshSeed, bases< UInterface >  , boost::noncopyable>("UIGBXNavMeshSeed", no_init)
        .def("StaticClass", &UIGBXNavMeshSeed::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
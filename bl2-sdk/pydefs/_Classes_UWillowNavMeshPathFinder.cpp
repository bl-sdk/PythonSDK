#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowNavMeshPathFinder()
{
    class_< UWillowNavMeshPathFinder, bases< UGBXNavMeshPathFinder >  , boost::noncopyable>("UWillowNavMeshPathFinder", no_init)
        .def("StaticClass", &UWillowNavMeshPathFinder::StaticClass, return_value_policy< reference_existing_object >())
        .def("FindConstrainedPath", &UWillowNavMeshPathFinder::FindConstrainedPath)
        .staticmethod("StaticClass")
  ;
}
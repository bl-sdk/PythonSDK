#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNavMeshPath_AlongLine()
{
    class_< UNavMeshPath_AlongLine, bases< UNavMeshPathConstraint >  , boost::noncopyable>("UNavMeshPath_AlongLine", no_init)
        .def_readwrite("Direction", &UNavMeshPath_AlongLine::Direction)
        .def("StaticClass", &UNavMeshPath_AlongLine::StaticClass, return_value_policy< reference_existing_object >())
        .def("Recycle", &UNavMeshPath_AlongLine::Recycle)
        .def("AlongLine", &UNavMeshPath_AlongLine::AlongLine)
        .staticmethod("StaticClass")
  ;
}
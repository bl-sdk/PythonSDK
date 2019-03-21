#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNavMeshPath_SameCoverLink()
{
    class_< UNavMeshPath_SameCoverLink, bases< UNavMeshPathConstraint >  , boost::noncopyable>("UNavMeshPath_SameCoverLink", no_init)
        .def_readwrite("TestLink", &UNavMeshPath_SameCoverLink::TestLink)
        .def("StaticClass", &UNavMeshPath_SameCoverLink::StaticClass, return_value_policy< reference_existing_object >())
        .def("Recycle", &UNavMeshPath_SameCoverLink::Recycle)
        .def("SameCoverLink", &UNavMeshPath_SameCoverLink::SameCoverLink)
        .staticmethod("StaticClass")
  ;
}
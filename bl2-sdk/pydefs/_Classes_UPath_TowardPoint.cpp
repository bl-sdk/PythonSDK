#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPath_TowardPoint()
{
    class_< UPath_TowardPoint, bases< UPathConstraint >  , boost::noncopyable>("UPath_TowardPoint", no_init)
        .def_readwrite("GoalPoint", &UPath_TowardPoint::GoalPoint)
        .def("StaticClass", &UPath_TowardPoint::StaticClass, return_value_policy< reference_existing_object >())
        .def("Recycle", &UPath_TowardPoint::Recycle)
        .def("TowardPoint", &UPath_TowardPoint::TowardPoint)
        .staticmethod("StaticClass")
  ;
}
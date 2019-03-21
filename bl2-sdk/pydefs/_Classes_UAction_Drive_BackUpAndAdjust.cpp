#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAction_Drive_BackUpAndAdjust()
{
    class_< UAction_Drive_BackUpAndAdjust, bases< UAction_Drive_AvoidWall >  , boost::noncopyable>("UAction_Drive_BackUpAndAdjust", no_init)
        .def("StaticClass", &UAction_Drive_BackUpAndAdjust::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventStop", &UAction_Drive_BackUpAndAdjust::eventStop)
        .def("eventStart", &UAction_Drive_BackUpAndAdjust::eventStart)
        .def("eventCanRun", &UAction_Drive_BackUpAndAdjust::eventCanRun)
        .staticmethod("StaticClass")
  ;
}
#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAttackLocation_LineOfSight()
{
    class_< UAttackLocation_LineOfSight, bases< UAttackLocation >  , boost::noncopyable>("UAttackLocation_LineOfSight", no_init)
        .def_readwrite("LineOfSight", &UAttackLocation_LineOfSight::LineOfSight)
        .def_readwrite("ValidTime", &UAttackLocation_LineOfSight::ValidTime)
        .def_readwrite("ArcAnglePct", &UAttackLocation_LineOfSight::ArcAnglePct)
        .def_readwrite("ArcSpeed", &UAttackLocation_LineOfSight::ArcSpeed)
        .def_readwrite("ArcStartOffset", &UAttackLocation_LineOfSight::ArcStartOffset)
        .def_readwrite("ArcEndOffset", &UAttackLocation_LineOfSight::ArcEndOffset)
        .def("StaticClass", &UAttackLocation_LineOfSight::StaticClass, return_value_policy< reference_existing_object >())
        .def("ValidLocation", &UAttackLocation_LineOfSight::ValidLocation)
        .staticmethod("StaticClass")
  ;
}
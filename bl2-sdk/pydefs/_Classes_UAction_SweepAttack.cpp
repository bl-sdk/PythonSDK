#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAction_SweepAttack()
{
    class_< UAction_SweepAttack, bases< UWillowActionSequencePawn >  , boost::noncopyable>("UAction_SweepAttack", no_init)
        .def_readwrite("Angle", &UAction_SweepAttack::Angle)
        .def_readwrite("Height", &UAction_SweepAttack::Height)
        .def_readwrite("Radius", &UAction_SweepAttack::Radius)
        .def_readwrite("Direction", &UAction_SweepAttack::Direction)
        .def_readwrite("SweepDirection", &UAction_SweepAttack::SweepDirection)
        .def_readwrite("MaxIntervalAngle", &UAction_SweepAttack::MaxIntervalAngle)
        .def_readwrite("NextLoc", &UAction_SweepAttack::NextLoc)
        .def_readwrite("AngleTraveled", &UAction_SweepAttack::AngleTraveled)
        .def("StaticClass", &UAction_SweepAttack::StaticClass, return_value_policy< reference_existing_object >())
        .def("CalcNextLoc", &UAction_SweepAttack::CalcNextLoc)
        .def("eventStop", &UAction_SweepAttack::eventStop)
        .def("eventStart", &UAction_SweepAttack::eventStart)
        .def("eventCanRun", &UAction_SweepAttack::eventCanRun)
        .staticmethod("StaticClass")
  ;
}
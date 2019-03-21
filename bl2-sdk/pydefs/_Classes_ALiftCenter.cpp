#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ALiftCenter()
{
    class_< ALiftCenter, bases< ANavigationPoint >  , boost::noncopyable>("ALiftCenter", no_init)
        .def_readwrite("MyLift", &ALiftCenter::MyLift)
        .def_readwrite("MaxDist2D", &ALiftCenter::MaxDist2D)
        .def_readwrite("LiftOffset", &ALiftCenter::LiftOffset)
        .def_readwrite("CollisionHeight", &ALiftCenter::CollisionHeight)
        .def_readwrite("LiftTrigger", &ALiftCenter::LiftTrigger)
        .def("StaticClass", &ALiftCenter::StaticClass, return_value_policy< reference_existing_object >())
        .def("ProceedWithMove", &ALiftCenter::ProceedWithMove)
        .def("eventSuggestMovePreparation", &ALiftCenter::eventSuggestMovePreparation)
        .def("eventSpecialHandling", &ALiftCenter::eventSpecialHandling, return_value_policy< reference_existing_object >())
        .def("eventPostBeginPlay", &ALiftCenter::eventPostBeginPlay)
        .staticmethod("StaticClass")
  ;
}
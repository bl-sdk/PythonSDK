#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ADoorMarker()
{
    class_< ADoorMarker, bases< ANavigationPoint >  , boost::noncopyable>("ADoorMarker", no_init)
        .def_readwrite("MyDoor", &ADoorMarker::MyDoor)
        .def_readwrite("DoorType", &ADoorMarker::DoorType)
        .def_readwrite("DoorTrigger", &ADoorMarker::DoorTrigger)
        .def("StaticClass", &ADoorMarker::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventSuggestMovePreparation", &ADoorMarker::eventSuggestMovePreparation)
        .def("ProceedWithMove", &ADoorMarker::ProceedWithMove)
        .def("eventSpecialHandling", &ADoorMarker::eventSpecialHandling, return_value_policy< reference_existing_object >())
        .def("MoverClosed", &ADoorMarker::MoverClosed)
        .def("MoverOpened", &ADoorMarker::MoverOpened)
        .def("eventPostBeginPlay", &ADoorMarker::eventPostBeginPlay)
        .staticmethod("StaticClass")
  ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADoorMarker(py::object m)
{
    py::class_< ADoorMarker,  ANavigationPoint   >(m, "ADoorMarker")
        .def_readwrite("MyDoor", &ADoorMarker::MyDoor)
        .def_readwrite("DoorType", &ADoorMarker::DoorType)
        .def_readwrite("DoorTrigger", &ADoorMarker::DoorTrigger)
        .def("StaticClass", &ADoorMarker::StaticClass, py::return_value_policy::reference)
        .def("eventSuggestMovePreparation", &ADoorMarker::eventSuggestMovePreparation)
        .def("ProceedWithMove", &ADoorMarker::ProceedWithMove)
        .def("eventSpecialHandling", &ADoorMarker::eventSpecialHandling, py::return_value_policy::reference)
        .def("MoverClosed", &ADoorMarker::MoverClosed)
        .def("MoverOpened", &ADoorMarker::MoverOpened)
        .def("eventPostBeginPlay", &ADoorMarker::eventPostBeginPlay)
          ;
}
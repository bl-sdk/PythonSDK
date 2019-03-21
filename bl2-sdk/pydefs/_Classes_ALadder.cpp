#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ALadder()
{
    class_< ALadder, bases< ANavigationPoint >  , boost::noncopyable>("ALadder", no_init)
        .def_readwrite("MyLadder", &ALadder::MyLadder)
        .def_readwrite("LadderList", &ALadder::LadderList)
        .def("StaticClass", &ALadder::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventSuggestMovePreparation", &ALadder::eventSuggestMovePreparation)
        .staticmethod("StaticClass")
  ;
}
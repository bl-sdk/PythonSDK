#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxEvent_FSCommand()
{
    class_< UGFxEvent_FSCommand, bases< USequenceEvent >  , boost::noncopyable>("UGFxEvent_FSCommand", no_init)
        .def_readwrite("Movie", &UGFxEvent_FSCommand::Movie)
        .def_readwrite("FSCommand", &UGFxEvent_FSCommand::FSCommand)
        .def_readwrite("Handler", &UGFxEvent_FSCommand::Handler)
        .def("StaticClass", &UGFxEvent_FSCommand::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
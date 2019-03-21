#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxFSCmdHandler()
{
    class_< UGFxFSCmdHandler, bases< UObject >  , boost::noncopyable>("UGFxFSCmdHandler", no_init)
        .def("StaticClass", &UGFxFSCmdHandler::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventFSCommand", &UGFxFSCmdHandler::eventFSCommand)
        .staticmethod("StaticClass")
  ;
}